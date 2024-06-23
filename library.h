#ifndef ListFunctions_H
#define ListFunctions_H

typedef const int assignValue;
typedef unsigned short int sint;

void AssignFloat(float *value[], assignValue *valueToAssign);
void AssignInt(int *value[], assignValue *valueToAssign);
int Length(void *value[]);
void ReverseInt(int *value[]);
void ReverseFloat(float *value[]);

#endif
