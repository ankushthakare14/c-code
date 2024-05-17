
//calculator
add(float x,float y)
{
    float c;
    c=x+y;
    return c;
}
//sub()
//mul function
//div function
int main()
{
    int ch;
    float a, b;
// do 
    printf("Enter an operator \n1) +\n 2) -\n3) *\n4) /\n0) exit");
    scanf(" %c", &ch);


    printf("Enter values of a and b: ");
    scanf("%f %f", &a, &b);

        switch (ch)

        {

        // For Addition
        case 1:
            printf("%.1f + %.1f = %.1f\n", a, b, a + b);
            break;

                                                           // For Subtraction
        case 2:
            printf("%.1f - %.1f = %.1f\n", a, b, a - b);
            break;

                                                           // For Multiplication
        case 3:
            printf("%.1f * %.1f = %.1f\n", a, b, a * b);
            break;

                                                           // For Division
        case 4:
            printf("%.1f / %.1f = %.1f\n", a, b, a / b);//add(a,b)
            break;

                                                           // If operator not match any case 
        default:
            printf(
                "please enter a valid operator\n");
        }
//}while (ch!=0)
    return 0;
}