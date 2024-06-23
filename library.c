#include "library.h"

#include <stdio.h>

typedef const int assignValue;

void Assign(float value [], assignValue valueToAssign)
{
    const int valueSize = sizeof(value)/sizeof(value[0]) + 1;
    int newList[valueSize] = {};
    for(short int i =0 ; i < valueSize;i++)
    {
        i < valueSize - 1? newList[i] = value[i]: newList[i] = valueToAssign;
    }
    printf("%llu",sizeof(value)/sizeof(value[0]));
}
void Assign(int value[], assignValue valueToAssign) {
    const int valueSize = sizeof(value)/sizeof(value[0]) + 1;
    int newList[valueSize] = {};
    for(short int i =0 ; i < valueSize;i++)
    {
        i < valueSize - 1? newList[i] = value[i]: newList[i] = valueToAssign;
    }
    printf("%llu",sizeof(value)/sizeof(value[0]));
}

int Length(void value[])
{
    return sizeof(value)/sizeof(value[0]);
}
int  Reverse(int value[]){

}