#include "headers.h"

void clearResources(int);

int main(int argc, char * argv[])
{
    signal(SIGINT, clearResources);
    // TODO Initialization
    //Nourhan Begin
    // 1. Read the input files..
    // 2. Ask the user for the chosen scheduling algorithm and its parameters, if there are any.
    //Nourhan End
    //Amir Begin
    // 3. Initiate and create the scheduler and clock processes.
    // 4. Use this function after creating the clock process to initialize clock
    initClk();
    // To get time use this
    int x = getClk();
    printf("current time is %d\n", x);
    // TODO Generation Main Loop
    // 5. Create a data structure for processes and provide it with its parameters.
    // 6. Send the information to the scheduler at the appropriate time.
    // 7. Clear clock resources
    //Amir End
    destroyClk(true);
}

void clearResources(int signum)
{
    //Amir Begin
    //TODO Clears all resources in case of interruption
    //Amir End
}
