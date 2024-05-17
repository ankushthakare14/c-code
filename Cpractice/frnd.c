/*
Q7: Create an employee structure with the following members
empid, employee name, salary, year of joining, gender, age, ID proofs (Adhar, Passport,
Voter ID (any1))
Note: Range of empid is 0 – 1000
Range of age is 18 - 65
Implement bit-fields, unions wherever possible
Accept the data for certain no. of employees and find their total, average, max, min salary.
Also find out the employees with maximum, minimum service, use a function to find
service for each employee element in the array.
Year of service is the number of years a given person has worked from joining year to
current
*/



#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>

#define MAX_EMPLOYEE_COUNT 10

struct employee{
	int empid;
	char name[50];
	float salary;
	struct t
	{
		short int d;
		short int m;
		short int y;
	}year;
	char gender;
	int age;
	union idp
	{
		int adhar;
		int pan;
		int driving;
	}idproof;
};
int EmployeCount;
struct employee *e[MAX_EMPLOYEE_COUNT];

void UpdateEmploye();
void Employee_With_Min_Salary();
void Add_Employee();
void Add_Employee();
void Search_Employee();
void Display_Employee(int);
void Max_Salary();
void Mini_Salary();
void Average_Salary();
void Employee_With_Max_Service();
void Employee_With_Min_Service();
int Calculate_Duration(int);

int main()
{
	printf("Maximum employes 10\nAfter exit Employes info will be print");
	while(1)
	{
		unsigned int choice;
		unsigned int ExitFlag=0;
		printf("Enter choice \n");
		printf("1 -> Add Employe \n");
		printf("2 -> Search Employee \n");
		printf("3 -> Display Employee \n");
		printf("4 -> Employee with Max Salary\n");
		printf("5 -> Employee with Min Salary\n");
		printf("6 -> Average Salary of all Employe\n");
		printf("7 -> Employe with maximum service\n");
		printf("8 -> Employe with minimum service\n");
		printf("9 -> update employee details\n");
		printf("0 -> exit \n");

		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				Add_Employee();
				break;
			case 2:
				Search_Employee();
				break;
			case 3:
				for(int i=0;i<EmployeCount;i++)
				Display_Employee(i);
				break;
			case 4:
				Max_Salary();
				break;
			case 5:
				Mini_Salary();
				break;
			case 6:
				Average_Salary();
				break;
			case 7:
				Employee_With_Max_Service();
				break;
			case 8:
				Employee_With_Min_Service();
				break;
			case 9:
				UpdateEmploye();
				break;
			case 10:
				printf("%d\n",Calculate_Duration(0));
				printf("%d\n",Calculate_Duration(1));
				break;
			case 0:
				ExitFlag=1;
				break;
			default:
				printf("Enter Again!!");
				break;
		}
		if(ExitFlag==1)
		{
			Max_Salary();
			Mini_Salary();
			Average_Salary();
			Employee_With_Max_Service();
			Employee_With_Min_Service();
			return 0;
		}
		printf("\n");

	}

	return 0;
}

void enter_employee(int count)
{

	//e[EmployeCount]=(struct employee *)malloc(sizeof(struct employee));

	printf("Enter emplyee name=");
	__fpurge(stdin);
	fgets(e[count]->name,50,stdin);
	
	printf("Enter emplyee ID=");
	scanf("%d",&e[count]->empid);
	
	printf("Enter emplyee salary=");
	scanf("%f",&e[count]->salary);

	printf("Enter emplyee year of joining in (d/m/y)=");
	scanf("%hu/%hu/%hu", &e[count]->year.d, &e[count]->year.m, &e[count]->year.y);

	printf("Enter gender in (m/f)=");
	__fpurge(stdin);
	e[count]->gender=fgetc(stdin);

	printf("Enter id proof = ");
	scanf("%d",&e[count]->idproof.adhar);

	printf("Enter age = ");
	scanf("%d",&e[count]->age);


	return ;
}



void Add_Employee()
{
	//printf("size of structure = %ld\n",sizeof(struct employee));
	e[EmployeCount]=(struct employee *)malloc(sizeof(struct employee));
	enter_employee(EmployeCount);
	//Display_Employee();
	EmployeCount++;
	return ;
}
void Search_Employee()
{
	int temp;
	printf("Enter emplyee ID");
        scanf("%d",&temp);
	for(int i=0;i<EmployeCount;i++)
	{
		if(temp==e[i]->empid)
		{
			Display_Employee(i);
			return ;
		}
	}
	printf("\n usert not fount!!! \n");

}
void Display_Employee(int cout){

printf("\n--------------------------------------------------------------\n\n");

	printf(" emplyee name= %s\n",e[cout]->name);
	
	printf(" emplyee ID = %d\n",e[cout]->empid);
	
	printf(" emplyee salary=%f\n",e[cout]->salary);

	printf(" emplyee year of joining is = (%d/%d/%d)\n",e[cout]->year.d, e[cout]->year.m, e[cout]->year.y);

	printf(" gender in (m/f) = %C\n",e[cout]->gender);

	printf(" id proof = %d\n",e[cout]->idproof.adhar);

	printf(" age = %d\n",e[cout]->age);
	
printf("\n--------------------------------------------------------------\n\n");


}

void UpdateEmploye(){
	int temp;
	printf("Enter emplyee ID to Update");
        scanf("%d",&temp);
	for(int i=0;i<EmployeCount;i++)
	{
		if(temp==e[i]->empid)
		{
			enter_employee(i);
			return ;
		}
	}
	printf("user not Fount!!!\n");

}
void Max_Salary(){
	if(EmployeCount>1)
	{
		float max;
		int n;
		for(int i=0;i<EmployeCount;i++)
		{
			if(max<e[i]->salary)
			{
				max=e[i]->salary;
				n=i;
			}
		}
		printf("employee with max salary is ---->>>\n");
		Display_Employee(n);
	}
	else
		printf("only one or no employee has entered!!!\n");
	return;
}
void Mini_Salary(){
	if(EmployeCount>1)
	{
		float min=e[0]->salary;
		int n;
		for(int i=1;i<EmployeCount;i++)
		{
			if(min>e[i]->salary)
			{
				min=e[i]->salary;
				n=i;
			}
		}
		printf("employee with min salary is ---->>>\n");
		Display_Employee(n);
	}
	else
		printf("only one or no employee has entered!!!\n");
}
void Average_Salary(){
	float avg=0;
	for(int i=1;i<EmployeCount;i++)
			avg=avg+e[i]->salary;
		avg=avg/EmployeCount+1;
		printf("Average of all salaries = %f\n",avg);
}

int Calculate_Duration(int cout)
{
	int duration=0;
	duration=duration+(365*(2023-(e[cout]->year.y)));
	duration=duration+(30*(12-(e[cout]->year.m)));
	duration=duration+(30-e[cout]->year.d);
	return duration;
}

void Employee_With_Max_Service()
{
	if(EmployeCount>1)
	{
		int ms=Calculate_Duration(0);
		printf("ms=%d\n",ms);
		int n=0;
		for(int i=1;i<EmployeCount;i++)
		{
			int temp=Calculate_Duration(i);
			if(ms<temp)
				{
					printf("temp=%d\n",temp);
					ms=temp;
					n=i;
				}
		}
		printf("\n################################################################################################\n\n");
		Display_Employee(n);
	}
	else
		printf("only one or No employ present!!!\n");
	return ;
}

void Employee_With_Min_Service()
{
	
	if(EmployeCount>1)
	{
		
		int ms=Calculate_Duration(0);
		int n=0;
		for(int i=1;i<EmployeCount;i++)
		{
			int temp=Calculate_Duration(i);
			if(ms>temp)                               //segmentation fault
				{
					ms=temp;   
					n=i;
				}
		}
		printf("\n---------------------------------------------\n\n");
		Display_Employee(n);
	}
	else
		printf("only one or No employ present!!!\n");
	return ;
}

