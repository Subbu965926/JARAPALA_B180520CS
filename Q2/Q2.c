/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

#include<conio.h>

void disp();

void insert();

void del();

int front=0,real=0,n,q[13];

void main()

{

int i,ch;

clrscr();

printf("enter the queue limit");

scanf(%d",&n);

do

{

printf("\n1.insert \n2.\n delete\n3.\ndisplay\n4.\n exit\n");

printf("enter your choice");

scanf("%d",&ch);

switch(ch)

{

case1:

insert();

break;

case2:

del();

break;

case3:

disp();

break;

case4:

exit;

break;

default:

printf("invalid user option");

break;

}}

while(ch!=4);

getch();

}

void insert()

{

int data;

if(real<n)

{

printf("Inserting the marks of five students");

scanf("%d",&data);

q[real]=data;

real++;

}

else

{

printf("\n queue is full");

}}

void del()

{

if(front!=real)

{

printf("\n delete element in :%d",q[front]");

front++;

}

else

{

printf("\n queue is empty");

}

}

void disp()

{

int i;

if(front==real)

{

printf("\n element not found");

}

else

{

for(i=front;i<real;i++)

{

printf("\n %d",q[i]);

}
}

}