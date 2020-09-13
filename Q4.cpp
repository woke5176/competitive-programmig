#include<stdio.h>
typedef struct 
{
  char *s;
  int n;
}store;
void display(store *str)
{
    printf("%s %d\n",str->s,str->n);
}
int main(int argc,char* argv[])
{
    float a,b,sum;
    if(argc!=3)
    {
        printf("please input 2 no.");
        return 0;
    }
    

    store str;
    str.s = argv[1];
    str.n = atoi(argv[2]);
    display(&str);
    return 0;
}
