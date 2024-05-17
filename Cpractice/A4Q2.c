//Q2. Write a program to implement display and reverse display function for string..

#include<stdio.h>

#define SIZE 7
void stringdisplay(char[],int);   //function declaration
void reversestring(char[],int);    //for reversing the str


int main()
{

	char ch[] = {'d','e','s','d','a','c','t','s'};


	int i = 0;
	int n = 7;

	stringdisplay(ch,i);

	printf("\n");
    reversestring(ch,n);
	

	return 0;
}

void stringdisplay(char ch[],int i)   //printing function defination
{

	if(i > SIZE)
    {
		return;
	}
	else{
		printf(" %c",ch[i]);
		return stringdisplay(ch,i+1);
	}		

	printf("\n");

}

void reversestring(char ch[],int n)   //reversing function defination
{

	if(n < 0)
    {
		return;
	}
	else
    {
		printf(" %c",ch[n]);
		return reversestring(ch,n-1);
	}
	
	printf("\n");	

}
