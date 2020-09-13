#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

int variable = 0x12345678; 
char first, second, third, fourth;



first= ((char*)(&variable))[0];


second =  ((char*)(&variable))[1];
third= ((char*)(&variable))[2];
fourth=   ((char*)(&variable))[3];
printf("%c\n",first);
printf("%c\n",second);printf("%c\n",third);
printf("%c",fourth);
}
