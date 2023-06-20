#include <string>
#include <stdio.h>
#include <pthread.h>
#include <pthread.h>
#include <time.h>
#include <time.h>



void* func(){
    int var = 145;
    printf("\n%d \n" , var );

}
int main(){
pthread_t th1 ;
pthread_create(&th1, NULL, func);    
//thread th1(func) ;
//th1.join();


return 0 ;
}


/*
in Java run specify the funcion Putted in the thread
Join function waits for ending the threads called in the same  scope of it before termination (Best Pracitce : Use it in the main function) because threads are parllel to the main thread and if the main finished before them all process ends and all threads closed even they not ends
Joinable
Synchronization to Prevent Confusion in Shared Resource
2 Threads needs to access same Resource (changing same Variable -calling same Function) those are ram addresses (Resources) 

Mutex
run
sleep to sleep thread in milli seconds
start to tun the thread
suspend to Puse thread
resume to resume it
wait to execute thread after main thread /Execution Flow / Function ending

Exit : ends thread




Thread attributes 
scope PTHREAD_SCOPE_PROCESS 
New thread is unbound - not permanently attached to LWP.  detachstate

PTHREAD_CREATE_JOINABLE Exit status and thread are preserved after the thread terminates.  

stackaddr NULL New thread has system-allocated stack address. 

stacksize 1 megabyte  New thread has system-defined stack size. 

priority

 

New thread inherits parent thread priority. 

inheritsched

PTHREAD_INHERIT_SCHED

New thread inherits parent thread scheduling priority. 

schedpolicy

SCHED_OTHER

New thread uses Solaris-defined fixed priority scheduling; threads run until preempted by a higher-priority thread or until they block or yield. 

*/
