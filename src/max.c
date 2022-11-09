#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...

for (int i = 0; i<size; i++){ //laver et for loop der går gennem hele arrayet igennem. Det starter ved i = 0
    if (numbers[i] > max)
    {
    max = numbers[i]; 
    }
}
return max;
}

