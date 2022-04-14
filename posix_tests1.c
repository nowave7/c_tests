#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

void *thread_function1(void *arg);
void *thread_function2(void *arg);

int main(int argc, char *argv[])
{
	int params_counter, i=0, j, parameter;
	pthread_t thread_id1, thread_id2;
	void *exit_status1, *exit_status2;

	printf("Running program: %s\n", argv[0]);
	for (params_counter=1; params_counter < argc; params_counter++)
	{
		parameter = atoi(argv[params_counter]);
		printf("With parameter%d: %d\n", params_counter, parameter);
	}

	pthread_create(&thread_id1, NULL, thread_function1, &parameter);
	pthread_create(&thread_id2, NULL, thread_function2, &parameter);

	pthread_join(thread_id1, &exit_status1);
	pthread_join(thread_id2, &exit_status2);

	return 0;
}

void *thread_function1(void *arg)
{
	int i=*((int*)arg), j=0;
	pid_t tid = syscall(__NR_gettid);
	printf("thread %d started with parameter: %d\n", tid, i);

	while (j < i)
	{
		printf("thread id: %d. Current j: %d\n", tid, j);
		j++;
		//usleep(1000);
		sched_yield();
	}
}

void *thread_function2(void *arg)
{
	int i=0, j=0;
	i = *((int*)arg);
	pid_t tid = syscall(__NR_gettid);
	printf("thread %d started with parameter: %d\n", tid, i);

	while (j < i)
	{
		printf("thread id: %d. Current j: %d\n", tid, j);
		j++;
		//usleep(1000);
		sched_yield();
	}
}


