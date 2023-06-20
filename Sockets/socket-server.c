#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>


int main (){
/*

listen(SD,allowedClientNO.)
Function Turns Socket to Passive Socket to recive connections 
returns 0 if successful listen -1 if unsuccessful listen 

accept(SD , struct sockaddr ...   , addrlen) rused send from server and recieve ---> eturns New non passive SD as int  Becuse the First SD is Passive due to listen() if successful listen -1 if unsuccessful accept 
NOTE : accept Function is reserved 1 client  From allowed Clients
those parameters to store address of Connected Client Can Be NULL and Dont store addresses
accept(SD , NULL   , NULL)  

Blocking Function : Stops the Code & wait Client to Connect Like scanf()  
*/


//Socket Intilizing  

int SD = socket( AF_INET , SOCK_STREAM , 0);
struct sockaddr_in SERVER ;
memset(&SERVER ,0 , sizeof(SERVER));
SERVER.sin_family = AF_INET ;
SERVER.sin_addr.s_addr = inet_addr("127.0.0.1") ;
SERVER.sin_port = htons(4445) ;
//Socket Binding
/*bind(SD ,  (struct sockaddr_in*)&SERVER   ,  sizeof(SERVER) );*/ 

if(bind(SD ,  (struct sockaddr_in*)&SERVER   ,  sizeof(SERVER) ) == 0){ 
            printf("\nServer Started on Port 4444\n"); 
    } else{   
            printf("\nPort 4444 already is used\n");}

//Socket Listening

// while (1==1);
// {
listen(SD,3); 
printf("listenning ...... \n");
// }


//accept connection and make active socket 

// struct sockaddr_in CONNECION ;
// memset(&CONNECION ,0 , sizeof(CONNECION));

int connectSD = accept(SD , NULL  , NULL) ;

//Send Data
char welcomemsg[1024] = "welcome to TCP C-server\n";
send(connectSD , welcomemsg,strlen(welcomemsg) ,0);
//Recive Data


/*Impelemnt an array of Bytes to Recive Data */
char msg[1024] = {}; 
/*  memset(msg , 0 , sizeof(msg)); */
/*  store recieved message from Socket into implemented array Of Bytes and set a limit to the massegge */
while (1 == 1)
{
     char Blockofmsg[1024] = "Send Message: ";
     send(connectSD , Blockofmsg,strlen(Blockofmsg) ,0);

     int recvres =  recv(connectSD  , msg , 1024 ,0);
     printf("Recieved msg is: %s" , msg);
     
     if (recvres ==0 ) {
         printf("Client Closed The Connection");
          break;}

  }

close(SD) ; close (connectSD);



return 0 ;
}




