#include<stdlib.h>
#include<stdio.h> 
#include<string.h>
#include <stdio.h>

struct student_info {
    int roll;
    char name[50];
    float cgpa;
};


void display(struct student_info *a) {
	    printf("\nName %s",a->name);
    printf("Roll %d\n",a->roll);

    printf("cgpa %f\n",a->cgpa);    
    return;
}

int main() {
    struct student_info info;
    printf("Roll Number: ");
    scanf("%d", &info.roll);
    printf("Name");
    scanf("%s\n", &info.name);
    printf("Enter cgpa: ");
    scanf("%f", &info.cgpa);
    display(&info);
    return 0;
}
