#ifndef ListFunctions_H
#define ListFunctions_H

typedef const int assignValue;
typedef unsigned short int sint;

void Assign(float *value[], assignValue *valueToAssign);
void Assign(int *value[], assignValue *valueToAssign);
int Length(void *value[]);
void Reverse(int *value[]);
void Reverse(float *value[]);
#endif
