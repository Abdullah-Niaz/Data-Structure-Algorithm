#include <iostream>
#include <pthread.h>
#include <unistd.h> // For sleep
using namespace std;

void *runner(void *param); // Function prototype for the thread function

// Global variable shared by the thread(s)
int sum = 0;

int main(int argc, char *argv[])
{
    pthread_t tid; // The thread identifier

    // Create the thread
    if (pthread_create(&tid, NULL, runner, NULL) != 0)
    {
        cerr << "Error creating thread" << endl;
        return 1;
    }

    // Wait for the thread to exit
    pthread_join(tid, NULL);

    // Print the sum
    printf("sum=%d\n", sum);

    return 0;
}

// Thread function
void *runner(void *param)
{
    int i;

    // Do some work
    for (i = 0; i < 10; i++)
    {
        sum += i;
    }

    pthread_exit(NULL); // Thread exit code
}
