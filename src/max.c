#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    int max = numbers[0]; //definerer en variabel maks, som skal tage den højeste værdi i arrayet
assert(size>0); //aborter hvis størrelsen af arrayet er 0

for (int i = 0; i<size; i++){ //laver et for loop der går gennem hele arrayet igennem. Det starter ved i = 0
    if (numbers[i] > max)
    {
    max = numbers[i]; //hvis 
    }
}
return max;
}

