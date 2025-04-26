#include "headers.h"


int main(int argc, char * argv[])
{
    initClk();
    
    //TODO implement the scheduler     :)
   // You are required to implement the following THREE algorithms...
    //Engyyyyyyyy begin
    //1. Non-preemptive Highest Priority First (HPF).
    //2. Shortest Remaining time Next (SRTN).
    //3. Round Robin (RR).
    /*
     *Engy and Amir
    * The scheduling algorithm only works on the processes in the ready queue. (Processes
    that have already arrived.)
    The scheduler should be able to
    1. Start a new process. (Fork it and give it its parameters.)
    2. Switch between two processes according to the scheduling algorithm. (Stop the
        old process and save its state and start/resume another one.)
    3. Keep a process control block (PCB) for each process in the system. A PCB
        should keep track of the state of a process; running/waiting, execution time,
        remaining time, waiting time, etc.
    4. Delete the data of a process when it gets notifies that it finished. When a
        process finishes it should notify the scheduler on termination, the scheduler
        does NOT terminate the process.

        //Engy bas

    5. Report the following information
    (a) CPU utilization.
    (b) Average weighted turnaround time.
    (c) Average waiting time.
    (d) Standard deviation for average weighted turnaround time.
    //Endy end




    //Rafeek begin
    6. Generate two files: (check the input/output section below)
    (a) Scheduler.log
    (b) Scheduler.perf
    //Rafeek End
     */


    //upon termination release the clock resources.
    
    destroyClk(true);
}
