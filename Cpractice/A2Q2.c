#include<stdio.h>

long incometax(long income,char gender,int age)   //defination of fuction

{
	if(income<= 250000) //if income is less than or eqals to 25000
        {
                return 0;
        }


        else if( income > 250000 && income <= 500000)    //if income is less than 2.5 lac and grater than 0.5lac
        {
                int tax = 0 + (income - 250000) * 0.05;
		if(gender == 'f')
                {
			tax = tax * 0.10;  //for the female on total tax there will be consession of 10 %
		}
		
		if(age >= 60)
                {
			tax = tax * 0.10;  //if the person is senior citizen 10% extra consession on total tax
		}	
                return tax;
        }

        else if ( income > 500000 && income <= 750000)   //if income is less than 5 lac and grater than 7.5lac
        {
                int tax = 0 + 12500 + (income - 500000) * 0.20;
		if(gender == 'f')
                {
                        tax = tax * 0.10;  //for the female on total tax there will be consession of 10 %
                }

                if(age >= 60)
                {
                        tax = tax * 0.10;    //if the person is senior citizen 10% extra consession on total tax
                }
                return tax;

        }

        else if( income > 750000 && income <= 1000000)    //if income is less than 7.5 lac and grater than 10lac
        {
                int tax = 0 + 12500 + 50000 + (income - 750000) * 0.20;
		if(gender == 'f')
                {
                        tax = tax * 0.10;  //for the female on total tax there will be consession of 10 %
                }

                if(age >= 60)
                {
                        tax = tax * 0.10;    //if the person is senior citizen 10% extra consession on total tax
                }
                return tax;
        }

        else if( income > 1000000 && income <= 1250000)    //if income is less than 15 lac and grater than 12.5la
        {
                int tax = 0 + 12500 + 500000 + 750000 + (income - 1000000) * 0.30;
		if(gender == 'f')
                {
                        tax = tax * 0.10;   //for the female on total tax there will be consession of 10 %
                }

                if(age >= 60)
                {
                        tax = tax * 0.10;    //if the person is senior citizen 10% extra consession on total tax
                }
                return tax;

        }
        else if (income > 1250000 && income <= 1500000)  //if income is less than 15 lac and grater than 12.5lac
        {
                int tax = 0 + 125000 + 500000 + 750000 + (income - 1250000) * 0.30;
		if(gender == 'f')
                {
                        tax = tax * 0.10;    //for the female on total tax there will be consession of 10 %
                }

                if(age >= 60)
                {
                        tax = tax * 0.10;    //if the person is senior citizen 10% extra consession on total tax
                }
                return tax;
        }

        else if( income >= 1500000)
        {
                int tax = 0 + 125000 + 500000 + 750000 + (income - 1500000) * 0.30; //if income is grater than 15 lac
		if(gender == 'f')
                {
                        tax = tax * 0.10;    //for the female on total tax there will be consession of 10 %
                }

                if(age >= 60)
                {
                        tax = tax * 0.10;    //if the person is senior citizen 10% extra consession on total tax
                }
                return tax;
        }
        else\
        {
        return 1;
        }
}

int main()
{
	long income;
	long tax;

	char gender;
	int age;

	printf("Enter Gender: ");   //taking user input for gender

	scanf("%c",&gender);  //reading gender from user

	printf("Enter Age: "); //taking age input from user

	scanf("%d",&age);  //reading age

	printf("Enter your Annual income: "); //taking user gross income input

	scanf("%lu",&income);  //reading user input

	long finaltax = incometax(income,gender,age);// calling a fuction

	printf("TAX = %lu",finaltax);  //printing final tax	 
	return 0;
}	