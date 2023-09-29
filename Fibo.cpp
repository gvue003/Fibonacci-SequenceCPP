// Fibonacci Sequence: Write a function to generate the first N numbers in the Fibonacci sequence.

// Traditional Loop

#include <iostream>

int main()
{
    int n = 10;
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            std::cout << first << ", ";
            continue;
        }
        if (i == 2)
        {
            std::cout << second << ", ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;

        std::cout << next << ", ";
    }
    return 0;
}