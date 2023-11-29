#include <pthread.h>
#include <stdio.h>

void *helloWorld(){
    printf("hello world!\n");
}

void main(){
    pthread_t Thread_ID1;
    pthread_t Thread_ID2;
    pthread_t Thread_ID3;
    pthread_t Thread_ID4;
    pthread_t Thread_ID5;
    pthread_t Thread_ID6;
    
    pthread_create(&Thread_ID1, NULL, helloWorld, NULL);
    pthread_create(&Thread_ID2, NULL, helloWorld, NULL); 
    pthread_create(&Thread_ID3, NULL, helloWorld, NULL);
    pthread_create(&Thread_ID4, NULL, helloWorld, NULL);
    pthread_create(&Thread_ID5, NULL, helloWorld, NULL);
    pthread_create(&Thread_ID6, NULL, helloWorld, NULL);
    pthread_join(Thread_ID1,NULL);
    pthread_join(Thread_ID2,NULL);
    pthread_join(Thread_ID3,NULL);
    pthread_join(Thread_ID4,NULL);
    pthread_join(Thread_ID5,NULL);
    pthread_join(Thread_ID6,NULL);    
}