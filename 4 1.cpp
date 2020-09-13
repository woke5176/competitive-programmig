#include<stdio.h>
int main(int argc,char* argv[])
{
    int i,
    int sum;
    if(argc!=3)
    {
        printf("invalid\n");
        return 0;
    }
    printf("%s %s",argv[1],argv[2]);
}
