#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#define n 20

sem_t full;
sem_t empty;
int fill=0,use=0,count=0;
int buffer[10];

void put(int value)
{
    buffer[fill]=value;
    fill=(fill+1)%10;
    count++;
}

int get(){
    int temp=buffer[use];
    use=(use+1)%10;
    count--;
    return temp;
}
void *producer(void *arg)
{

   for(int i=0;i<n;i++)
      {sem_wait(&empty);
       put(i);
       printf("Produced %d\n",i);
sem_post(&full);
}
    pthread_exit(NULL);
}

void *consumer(void *arg)
{
   
   for(int i=0;i<n;i++)
      {sem_wait(&full);
       put(i);
       printf("Consumed %d\n",i);
sem_post(&empty);
}
    pthread_exit(NULL); 
}


void main(){
    sem_init(&empty,0,10);
    sem_init(&full,0,0);

    pthread_t producer_thread,consumer_thread;
    
    pthread_create(&producer_thread,NULL,producer,NULL);
    pthread_create(&consumer_thread,NULL,consumer,NULL);
    
    pthread_join(producer_thread,NULL);
    pthread_join(consumer_thread,NULL);
    
    sem_destroy(&empty);
    sem_destroy(&full);
    
}


