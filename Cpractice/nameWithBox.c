//pyramid pattern
#include <stdio.h>
#include <string.h>
int main() {

int nameLen, col, row, midH, midW;
char name[] = "DESD";
nameLen = strlen(name);

col = nameLen + 4;
midW = (col / 2) - (nameLen / 2);
row = 5;
midH = row/2;
for(int i=1; i<= row; i++){
    for(int j=1; j <= col; j++){
        if( i==1 || i == row || j == 1 || j == col){
            printf("*");
        }
        if( i == midH && j == midW) printf(name[j-midW]);
        printf(" ");
    }
    printf("\n");
}
return 0;
}