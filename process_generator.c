#include "headers.h"

struct Process_Param {
    int Arrival_Time;
    int runtime;
    int Priority;
} typedef Process_Param;

Process_Param* Processes;
void clearResources(int);

int main(int argc, char * argv[])
{
    signal(SIGINT, clearResources);
    // TODO Initialization
     int Num_of_Processes = 0; // Input from file
     Processes = malloc(sizeof(Process_Param)*Num_of_Processes); // for nourhan use this

    //Nourhan Begin
    //For nourhann , when doing the input the data into an array of Process_Param -Amir
    // 1. Read the input files..
    // 2. Ask the user for the chosen scheduling algorithm and its parameters, if there are any.
    //Nourhan End
    //Amir Begin

    // Replace args
    char *const args[] = { "ls", NULL };
    char *const envp[] = { NULL };
    int SchedPid = fork();
    if (SchedPid == 0) {
        execve("../scheduler.out", args, envp);
    }
    else if (SchedPid == -1) {
        printf("Error Creating Scheduler , Terminating... ");
        exit(EXIT_FAILURE);
    }
    int ClockPid = fork();
    if (ClockPid == 0) {
        execve("../clk.out", args, envp);
    }
     else if (ClockPid == -1) {
         printf("Error Creating Clock , Terminating... ");
         exit(EXIT_FAILURE);
     }

    initClk();
    int Time = getClk();
    int index = 0;
    Process_Param nextProcess = Processes[index];
    while (index < Num_of_Processes) {
         Time = getClk();
        if (Time>=nextProcess.Arrival_Time) {
            // implement message queue send process to sched
            nextProcess = Processes[++index];
        }

    }


    // TODO Generation Main Loop
    // 6. Send the information to the scheduler at the appropriate time.
    // 7. Clear clock resources
    //Amir End
    clearResources(0);
    destroyClk(true);
}

void clearResources(int signum)
{
    //Amir Begin
    free(Processes);
    //TODO Clears all resources in case of interruption
    //Amir End
}
