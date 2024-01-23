#include <iostream>

int main()
{
    // Declare variables to store four numbers
    int N1 = 5, N2 = 10, N3 = 15, N4 = 20;
    // Find and display the maximum number using nested if statements
    if (N1 >= N2 && N1 >= N3 && N1 >= N4)
    {
        std::cout << "The maximum number is: " << N1 << std::endl;
    }
    else if (N2 >= N1 && N2 >= N3 && N2 >= N4)
    {
        std::cout << "The maximum number is: " << N2 << std::endl;
    }
    else if (N3 >= N1 && N3 >= N2 && N3 >= N4)
    {
        std::cout << "The maximum number is: " << N3 << std::endl;
    }
    else
    {
        std::cout << "The maximum number is: " << N4 << std::endl;
    }

    return 0;
}
