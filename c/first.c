// WAP to input Name, Roll, marks in 3 subjects. Calculate average.
//Display name, roll and avg.

#include<stdio.h>
#include<string.h>

int main()
{
     int roll;
     float m1,m2,m3,avg;
     char name[50];
     printf("Enter the name of the student: ");
     scanf("%s",&name);
     printf("Enter roll number: ");
     scanf("%d",&roll );
     printf("Enter marks in 3 subjects: ");
     scanf("%f%f%f",&m1,&m2,&m3);
     avg = (m1+m2+m3)/3;
     printf("Average marks is: %f",avg);
}
