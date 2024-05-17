//Q3. Implement a system to calculate the Grade of the student based on
//marks in n subjects.

#include<stdio.h>
int main()
{
	int sub,obt;
	float a,e;

	printf("Enter your obtained marks out of 500 \n");
	scanf("%d",&obt);
    int g =obt*0.20;
    scanf("%d",&g);

	if(g>90){
		printf("Your Grade is A+");
	}
	else if(90<=g>=80){
		printf("Your grade is A");
}
	else if(80<=g>=70){
		printf("Your Grade is B");
	}
	else if(70>=g>=50){
		printf("Your Grade is c");
	}
	else if(50<=g>=45){
		printf("Your Grade is D");
	}
	else{
		printf("You Grade is F You Failed");
}

	return 0;

}

		
