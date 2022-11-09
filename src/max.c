#include <stdio.h>
#include <assert.h>

// Excercise 2
// Implement your code below...

int max(int *numbers, int size)
{
    assert(size > 0); // Size cant be NULL
    int max = numbers[0];

    for (int i = 0; i < size; i++) // Looper igennem for at erstatte max med nyest max
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}
