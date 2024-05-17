/*Write a program to implement display and reverse display function
for integer array element.*/

#include<stdio.h>

#define SIZE 6
void arraydisplay(int[],int);    //fun declaration
void reverseArray(int[],int);


int main()
{

	int arr[] = {1,2,3,4,5,6,7};  //declare array

	int i = 0;
	int n = 6;

	arraydisplay(arr,i);   //calling a functions for print and logic

	reverseArray(arr,n);
	

	return 0;
}

void arraydisplay(int arr[],int i)   // to print the array
{

	if(i > SIZE){
		return;
	}
	else{
		printf(" %d",arr[i]);
		return arraydisplay(arr,i+1);
	}		

	printf("\n");

}

void reverseArray(int arr[],int n)  //to reversing the array
{

	if(n < 0){
		return;
	}
	else{
		printf(" %d",arr[n]);
		return reverseArray(arr,n-1);
	}
	
	printf("\n");	

}
