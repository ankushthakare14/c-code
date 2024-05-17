#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

typedef struct fruitbasket{
	char state[10];
	char colour[10];
	int weight;

}basket;

int x;

void addapple(basket bas[],int);
void addorange(basket bas[],int);
void addmango(basket bas[],int);
void displayall(basket bas[],int);
void displayallfr(basket bas[],int);
void stalefr(basket bas[],int);


int main()
{
	basket bas[2];
	int choice;
	
	printf("================welcome to fruit basket============= ");
	
	
	
	while(1)
	{
	
	printf("enter your choice:\n1)add apple\n2)add orange\n3)add mango\n4)display all fruits\n5)display all fresh fruits\n6)make a fruit marked as stale\n7)exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("enter the quantity\n");
	           scanf("%d",&x);
		       addapple(bas,x);
		       
		       printf("________________________________________________");
			break;
		case 2:printf("enter the quantity\n");
	           scanf("%d",&x);
	           addorange(bas,x);
		       printf("________________________________________________");
			break;
		case 3:	printf("enter the quantity\n");
	            scanf("%d",&x);
	            addmango(bas,x);
		       printf("________________________________________________");
			break;
		case 4:	printf("enter the quantity\n");
	            scanf("%d",&x);
	            displayall(bas,x);
		       printf("________________________________________________");
			break;
		case 5:	printf("enter the quantity\n");
            	scanf("%d",&x);
	            displayallfr(bas,x);
		       printf("________________________________________________");
			break;
		case 6:	printf("enter the quantity\n");
            	scanf("%d",&x);
            	stalefr(bas,x);
		       printf("________________________________________________");
			break;
		case 7:printf("exited\n");
		       printf("======================EXIT======================");
		       

		default:
			printf("invalid entry! please try again...\n");
	}
	}

}
void addapple(basket *bas,int)
{
    for(int i=0;i<x;i++)
    {
    printf("apple:%d\n",i+1);
    __fpurge(stdin);
	printf("enter apple state:\n");
	scanf("%s",&bas[i].state);
	__fpurge(stdin);
	printf("enter apple colour:\n");
	scanf("%s",&bas[i].colour);
	__fpurge(stdin);
	printf("enter apple weight in gm.:\n");
	scanf("%d",&bas[i].weight);
	__fpurge(stdin);
	
        
    }
}
void addorange(basket *bas,int)
{
for(int i=0;i<x;i++)
    {
    printf("orange:%d\n",i+1);
    __fpurge(stdin);
	printf("enter orange state:\n");
	scanf("%s",&bas[i].state);
	__fpurge(stdin);
	printf("enter orange colour:\n");
	scanf("%s",&bas[i].colour);
	__fpurge(stdin);
	printf("enter orange weight in gm.:\n");
	scanf("%d",&bas[i].weight);
	__fpurge(stdin);
    
        
    }

}
void addmango( basket *bas,int)
{
	for(int i=0;i<x;i++)
    {
    printf("mango:%d\n",i+1); 
    __fpurge(stdin);
	printf("enter mango state:\n");
	scanf("%s",&bas[i].state);
	__fpurge(stdin);
	printf("enter mango colour:\n");
	scanf("%s",&bas[i].colour);
	__fpurge(stdin);
	printf("enter mango weight in gm.:\n");
	scanf("%d",&bas[i].weight);
	__fpurge(stdin);
    
        
    }

}
void displayall(basket *bas,int)
{
	for(int i=0;i<x;i++)
{
    printf("mango:%d\n",i+1); 
	printf("state:%s\n",bas[i].state);
	printf("colour:%s\n",bas[i].colour);
	printf("weight:%d\n",bas[i].weight);
}
}
void displayallfr(basket *bas,int)
{
	for(int i=0;i<x;i++)
	{
		if(bas[i].state=="fresh")
		{
		    printf("mango:%d\n",i+1); 
			printf("state:%s\n",bas[i].state);
		}
		return;

	}
}
void stalefr(basket *bas,int)
{
	for(int i=0;i<x;i++)
        {
                if(bas[i].state=="stale")
                {
                        printf("mango:%d\n",i+1);  
                        printf("state:%s\n",bas[i].state);
                }
                return;

        }


}

