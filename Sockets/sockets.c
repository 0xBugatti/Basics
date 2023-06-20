#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>

int main() {
return 0;
}

/*
Sockets Programmming is the way to send and recieve data as Byte Stream (array OF Bytes) between 2 Devices using Networks 

Sockets is the name of end point whcich send and recieve data considre it as s file which is Byte Stream (array OF Bytes) ,  defined by pointers and accessed with some Functions



Application Layer : Socket 
Transport Layer : Socket Type (TCP|UDP|...)
Internet Layer : Socket Protocol (IPv4|IPv6..) 


Socket Prog Structure
1- 
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
2 - Socket Creation




socket(int DOMAIN ,int TYPE ,int PROTO)



int SD = socket(int DOMAIN ,int TYPE ,int PROTO);
function return sockD if Created Succefully 
function return -1 if Created failuer 

DOMAIN : Socket Family AF_UNIX  (used in : Same Machine Connecting) , AF_INET | PF_INET (used in : IPv4 Connecting) , AF_INET6 | PF_INET6 (used in :IPv6 Connecting )
TYPE : Protocol of Transport Layer SOCK_DATAGRAM (used in : UDP), SOCK_STREAM (used in : TCP)
PROTO :Protocols of Internet Protocol layer 0 : IP 
                                                cat /etc/protocols
                                                ip 0, hopopt 0, icmp 1, igmp 2, ggp 3, ipencap 4, st 5, tcp 6, egp 8, igp 9, pup 12, udp 17, hmp 20, xns-idp 22, rdp 27, iso-tp4 29, 
                                                dccp 33, xtp 36, ddp 37, idpr-cmtp 38, ipv6 41, ipv6-route 43, ipv6-frag 44, idrp 45, rsvp 46, gre 47, esp 50, ah 51, skip 57, ipv6-icmp 58, 
                                                ipv6-nonxt 59, ipv6-opts 60, rspf 73, vmtp 81, eigrp 88, ospf 89, ax.25 93, ipip 94, etherip 97, encap 98, # 99, pim 103, ipcomp 108, vrrp 112, 
                                                l2tp 115, isis 124, sctp 132, fc 133, mobility-header 135, udplite 136, mpls-in-ip 137, manet 138, hip 139, shim6 140, wesp 141, rohc 142
                                                
3- Bind Socket
bind(SD ,(struct sockaddr*)&bindSOCK_t , sizeof(structName)) return 0 if socket binded succefully

struct vary with domain  and detailing describe the socket
AF_INET :sockaddr_in
struct sockaddr_in bindSOCK_t;
memset(&bindSOCK_t, 0 , sizeof(bindSOCK_t);
bindSOCK_t.sin_family = AF_INET;
bindSOCK_t.sin_port = htons(8080);
bindSOCK_t.sin_addr.s_addr = inet_addr("127.0.0.1"); //specify allowed address



AF_UNIX sockaddr_un




4- Connect 

connect(SD, (struct sockaddr*)&connectSOCK_t , sizefo(connectSOCK_t)) //return 0 if Connected Succefully

struct sockaddr_in connectSOCK_t
memset(&connectSOCK_t, 0 , sizeof(connectSOCK_t);
connectSOCK_t.sin_family = AF_INET;
connectSOCK_t.sin_port = htons(8080);
connectSOCK_t.sin_addr.s_addr = inet_addr("127.0.0."); //specify allowed address

5- Send 
int sendreturn = send(SD,arr , sizeof(arr),0) //retrn 0 if successed
send takes( Socket Descriptor , array of Bytes will be Trancimetted , Length of this array)


6 - Receive
int recvreturn = recv(SD,arr , sizeof(arr),0) //retrn 0 if successed
recv takes( Socket Descriptor , array to store recived  Bytes on it  , Length of this array)






5- Close Socket
 close(ID); 


 NOTES :
Network is BigEndian
 
 htons htonl = Host to Network 
 ntohs ntohl = Network to host
 Need Conversion = IP - Port 

*/