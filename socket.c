#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <pthread.h>
#include <netinet/in.h>
#include <unistd.h>

#define MAX 512
//someday divorce range max from connection max :P
//need struct with array pppointer iand index nummber(int).
void Connection(void *p);

int main()  {

  struct sockaddr_in Address;
  int                fd, x = 0;
  int                SockArray  [MAX]; 
  pthread_t          ThreadArray[MAX];
  /*
  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)  {
	   
        printf("\n socket(): creation error \n"); 
        exit(1);; 
    } 
   */
   for ( ; x < MAX ; x++ )   {  // change for loop then wait on threads join.
	   
	 while(0); //(connection not yeald) { incrementAddress(); }
	 
	 //on success copy fd into array and spin off threaad.
     pthread_create( &ThreadArray[x], NULL, Connection, NULL);
    }
    
    pthread_join(ThreadArray[0], NULL); //needs for loop
    return 0;
} 

void Connection(void *p)  {
	
	printf("connection details%d\n", 2); // p->count);
	sleep(5);
	
	//close(socket);
}
