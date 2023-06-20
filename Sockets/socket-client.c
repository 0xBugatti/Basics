#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>

int main() {

//Socket Intilizing  
int SD = socket( AF_INET , SOCK_STREAM , 0);
struct sockaddr_in REMOTE_ADDR ;
memset(&REMOTE_ADDR ,0 , sizeof(REMOTE_ADDR));
REMOTE_ADDR.sin_family = AF_INET ;
REMOTE_ADDR.sin_addr.s_addr = inet_addr("127.0.0.1") ;
REMOTE_ADDR.sin_port = htons(4444) ;
//Socket Connection
if (connect(SD, (struct sockaddr *)&REMOTE_ADDR , sizeof(REMOTE_ADDR)) == 0) {
    printf("\n--Connection intialized  Successfully --\n");
}else {
    printf("\n--Connection Error--\n");

    exit(1);
}


//Using Sockets to Send /Recieve Array Of Bytes as file

//Bytes array is contain sent data


//char socksendBuff[1024] = "Hello Socket\n";

// or get Data From user
char socksendBuff[1024] ;
printf("Type Data To Sent [Max is 1KB] : ") ;
scanf ("%s" , socksendBuff);
send(SD , socksendBuff, strlen(socksendBuff),0) ;


   


//Bytes array is Specify allowed Recieved Size 
char sockrecvBuff[1024] ;
recv(SD , sockrecvBuff, 1024 , 0 );
printf("\nRecieved Data Stored In the array is : %s" ,sockrecvBuff);






//Take From User IP / Port

return 0;
}
