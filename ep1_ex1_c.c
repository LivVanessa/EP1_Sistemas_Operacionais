#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    pid_t pai = fork();
    pid_t filho = fork();
    printf("hello world do %d\n", getpid());
    return 0;
}

/*void *childthread2(void *vargp){
    printf("Hello World do processo filho2!\n");
}

void *childThread(void *vargp)
{
    pthread_t childThread2_id;
    pthread_create(&childThread2_id,NULL, childthread2,NULL);
    printf("Hello World do processo filho!\n");
    pthread_join(childThread2_id,NULL);
}


void *fatherThread(void *vargp) 
{
    pthread_t childThread_id;
    pthread_create(&childThread_id, NULL, childThread, NULL);
    printf("Hello World do processo pai!\n"); 
    pthread_join(childThread_id,NULL);
    return NULL;
} 

void main(){
    pthread_t fatherThread_id;
    
    printf("Antes da Thread\n");
    pthread_create(&fatherThread_id, NULL, fatherThread, NULL); 
    pthread_join(fatherThread_id, NULL);
    printf("Depois da Thread\n"); 
}*/




