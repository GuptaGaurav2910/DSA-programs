#include<stdio.h>

int main(){

   float value=19.0;
   float *ptr=&value;
   float **pptr=&ptr;
   printf("value : %u",**pptr);
}