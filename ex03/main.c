#include <pthread.h>
#include <stdio.h>

void *routine(void *tlaid)
{
	while (1)
		printf("t laid");
}
int main(void)
{
	pthread_t thread;

	pthread_create(&thread, NULL, routine, NULL);

	pthread_join(thread, NULL);
}