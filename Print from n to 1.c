#include <stdio.h>

// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{
    // if N is less than 1
    // then return void function
    if (N <= 0) {
        return;
    }
    else {
        printf("%d ", N);

        // recursive call of the function
        PrintReverseOrder(N - 1);
    }
}

// Driven Code
int main()
{
    int N = 5;

    PrintReverseOrder(N);

    return 0;
}
