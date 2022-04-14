#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void vla_test(unsigned int length);
void *some_function(void *arg);
void *test_static_variable_with_threads(void *arg);

int main(void)
{
	pthread_t thread_id1, thread_id2, thread_id3;
	void *exit_status1, *exit_status2, *exit_status3;
	int value1, value2, value3;
	char input;
	unsigned int array_length=0;

	value1 = 42;
	value2 = 0;

	//fork();
	pthread_create(&thread_id1, NULL, some_function, &value1);
	pthread_create(&thread_id2, NULL, test_static_variable_with_threads, &value2);
	pthread_create(&thread_id3, NULL, test_static_variable_with_threads, &value3);

	pthread_join(thread_id1, &exit_status1);
	pthread_join(thread_id2, &exit_status2);
	pthread_join(thread_id3, &exit_status3);

	input = getchar();
	//scanf("%d",&array_length);
	//vla_test(array_length);

	return 0;
}

void vla_test(unsigned int length)
{
	int vla_array[length];
	int i;
	
	for (i=0; i<length; i++)
	{
		vla_array[i] = i;
	}

	for (i=0; i<length; i++)
	{
		printf("%d\n", vla_array[i]);
	}
}

void *some_function(void *arg)
{
	int i;
	i = *(int*)arg;
	int j;

	pthread_t tid = pthread_self();

	for (j=0; j<10; j++)
	{
		printf("%lu: %d \n", tid, i);
		usleep(500);
		i--;
	}

	return NULL;
}


void *test_static_variable_with_threads(void *arg)
{
	static int i = 0;
	pthread_t tid = pthread_self();
	pthread_mutex_t mutex;

	pthread_mutex_init(&mutex, NULL);

	while (i<20)
	{
		pthread_mutex_lock(&mutex);
		i++;
		printf("value of the static variable in thread %lu: %d\n", tid, i);
		pthread_mutex_unlock(&mutex);
		usleep(100);
	}

	pthread_mutex_destroy(&mutex);

	return NULL;
}

