//#include <string>
#include <stdio.h>
#include <pthread.h>
#include <pthread.h>
#include <time.h>
#include <time.h>
//#import "dll.dll"

pthread_mutex_t mut ; 
//pthread_mutex_t *  pmut = &mut ; 

int x = 757; 


void* func2(){
     
pthread_mutex_lock(&mut);
     *&x = 14;
pthread_mutex_unlock(&mut);
}

int main(){
//printf("\n%d\n",v);
pthread_t th ;
pthread_mutex_init(&mut , NULL);
pthread_create(&th, NULL, &func2,NULL);    //return 0 if Sucessful Created
pthread_join(th , NULL);

//thread th1(func) ;




printf("VarVal Is :%d " , x);
//Join: without Join In some times of Code running Main Function Thread finishes Before created thread which cause to Execution Ending and Close all threads before some Threads Ended its functionality But With if you Joined thread in the main scope  You make the main thread dont finishes untill Joined thread ended at any time of execution     
/*
Mutex: If You Want Same Resources (Variable) to be shared with 2 threads will Cause undefined Behaviuor [Race Condition] without Mutex / Synchronization / Ordering
Mutexx is a lock in the thread running to Organize Shared Resources Using and after running thread ended lock is opened and you can access the shared resources with other thread  
Decleration Varibale with  UserDefined DataType (Struct) 
pthread_mutex_t mut
Intialization
pthread_mutex_init(&mut , NULL);
Destroy it at the end
pthread_mutex_destroy(&mut);

Using Intialized Mutex 


void *UsedFunc{
pthread_mutex_lock(&mut);

code ; 
pthread_mutex_unlock(&mut);

}




Pass Args To thread




Return Values from threads



pthreads_exit




Object Stored in the stack






*/

return 0 ;
}


/*
in Java run specify the funcion Putted in the thread


threading Concept : Creat New Execution Flow (Parallel)
Create a thread

Decleration Varibale with  UserDefined DataType (Struct) 
pthread_t t1 ,t2 
pthread_create(&th1, NULL, &func,NULL);    

\\func is function Return Void Pointer 


Join function waits for ending the threads called in the same  scope of it before termination (Best Pracitce : Use it in the main function) because threads are parllel to the main thread and if the main finished before them all process ends and all threads closed even they not ends
Joinable
Synchronization to Prevent Confusion in Shared Resource
2 Threads needs to access same Resource (changing same Variable -calling same Function) those are ram addresses (Resources) 

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
