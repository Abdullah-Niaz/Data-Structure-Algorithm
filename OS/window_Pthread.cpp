#include <iostream>
#include <windows.h>
using namespace std;

DWORD WINAPI runner(LPVOID param); // Function prototype for the thread function

// Global variable shared by the thread(s)
int sum = 0;
int main(int argc, char *argv[])
{
    HANDLE threadHandle; // Handle to the thread
    DWORD threadId;      // ID of the thread

    // Create the thread
    threadHandle = CreateThread(NULL, 0, runner, NULL, 0, &threadId);
    if (threadHandle == NULL)
    {
        cerr << "Error creating thread" << endl;
        return 1;
    }

    // Wait for the thread to exit
    WaitForSingleObject(threadHandle, INFINITE);

    // Close the thread handle
    CloseHandle(threadHandle);

    // Print the sum
    printf("sum=%d\n", sum);

    return 0;
}



// Thread function
DWORD WINAPI runner(LPVOID param)
{
    int i;

    // Do some work
    for (i = 0; i < 10; i++)
    {
        sum += i;
    }

    return 0; // Thread exit code
}
