#include "library.h"

#include <stdio.h>

typedef const int assignValue;
typedef unsigned short int sint;

void Assign(float *value [], assignValue *valueToAssign)
{
    const int valueSize = sizeof(value)/sizeof(value[0]) + 1;
    int newList[valueSize] = {};
    for(sint i =0 ; i < valueSize;i++)
    {
        i < valueSize - 1? newList[i] = *value[i]: newList[i] = *valueToAssign;
    }
    printf("%llu",sizeof(value)/sizeof(value[0]));
    return;
}
void Assign(int *value[], assignValue *valueToAssign) {
    const int valueSize = sizeof(value)/sizeof(value[0]) + 1;
    int newList[valueSize] = {};
    for(sint i =0 ; i < valueSize;i++)
    {
        i < valueSize - 1? newList[i] = *value[i]: newList[i] = *valueToAssign;
    }
    printf("%llu",sizeof(value)/sizeof(value[0]));
    return;
}

int Length(void *value[])
{
    return sizeof(value)/sizeof(value[0]);
}
void Reverse(int *value[]){
    const int valueSize = sizeof(value)/sizeof(value[0]);
    int *newValue[valueSize] = {};
    for(sint i =valueSize ; i > 0 ;i--)
    {
        *newValue[i] = *value[i];
    }
    *value = *newValue;
    return;
}
void Reverse(float *value[]){
    const int valueSize = sizeof(value)/sizeof(value[0]);
    float *newValue[valueSize] = {};
    for(sint i =valueSize ; i > 0 ;i--)
    {
        *newValue[i] = *value[i];
    }
    *value = *newValue;
    return;
}