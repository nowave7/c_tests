#include <stdio.h>
#include <pthread.h>
#define MAX 10

pthread_mutex_t buffer_mutex;
pthread_cond_t producer_cond, consumer_cond;

int buffer=1;

void *producer(void *ptr)
{
	int i;
	
	for (i=1; i<MAX; i++)
	{
		pthread_mutex_lock(&buffer_mutex);
		while (buffer != 0)
			pthread_cond_wait(&producer_cond, &buffer_mutex);
		buffer = i;
		printf("producer produced the buffer: %d\n", buffer);
		pthread_cond_signal(&consumer_cond);
		pthread_mutex_unlock(&buffer_mutex);
	}
	pthread_exit(0);
}

void *consumer(void *ptr)
{
	int i;

	for (i=1; i<=MAX; i++)
	{
		pthread_mutex_lock(&buffer_mutex);
		while (buffer == 0)
			pthread_cond_wait(&consumer_cond, &buffer_mutex);
		buffer = 0;
		printf("consumer consumed the buffer: %d\n", buffer);
		pthread_cond_signal(&producer_cond);
		pthread_mutex_unlock(&buffer_mutex);
	}
	pthread_exit(0);
}

int main(int argc, char **argv)
{
	pthread_t pro, con;
	pthread_mutex_init(&buffer_mutex, 0);
	pthread_cond_init(&producer_cond, 0);
	pthread_cond_init(&consumer_cond, 0);

	pthread_create(&con, 0, consumer, 0);
	pthread_create(&pro, 0, producer, 0);

	pthread_join(pro, 0);
	pthread_join(con, 0);

	pthread_cond_destroy(&producer_cond);
	pthread_cond_destroy(&consumer_cond);
	pthread_mutex_destroy(&buffer_mutex);
}


