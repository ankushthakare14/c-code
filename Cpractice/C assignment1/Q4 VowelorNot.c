//vowel or not
#include <stdio.h>
int main()

{
    
    char ch;
    printf("enter any english character\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("it is a vowel");
        
    }
    else{
        printf("its not a vovel");
    }

    return 0;
}
