#include<stdio.h>
typedef struct 
{
	int i;
  char *st;
 
}disp;
void display(disp *str)
{
    printf("%s %d\n",str->st,str->i);
}
int main(int argc,char* argv[])
{
    float c,d,sum;
    if(argc!=3)
    {
        printf("invalid input");
        return 0;
    }
    

    disp st;
    str.st = argv[1];
    str.i = atoi(argv[2]);
    display(&st);
    return 0;
}
