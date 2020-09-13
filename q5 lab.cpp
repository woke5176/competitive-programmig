#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
int ch =atoi(argv[1]);
unsigned char a,b,c,d;
a=ch;
b=ch>>8;
c=ch>>16;
d=ch>>24;
unsigned char *v;
v=&ch;
if(a==*v){
    printf("Little endian\n");
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    a=*v;
    *v=v+3;
    *(v+3)=a;
    b=*(v+1);
    (v+1)=(v+2);
    *(v+2)=b;
    printf(" Big endian:%d\n%d\n%d\n%d\n", v, (v+1),(v+2), (v+3));
}
else{
    printf("Big endian\n");
    printf("\n Big endian %d\n%d\n%d\n%d ",a,b,c,d);
    a=*v;
    *v=v+3;
    *(v+3)=a;
    b=*(v+1);
    *(v+1)=(v+2);
    *(v+2)=b;
    printf("\n Little endian %d\n%d\n%d\n%d\n",v,(v+1),(v+2),(v+3));
}
}
