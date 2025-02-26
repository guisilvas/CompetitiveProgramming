#include <stdio.h>
#include <stdlib.h>
// weight Limak menor que do Bob
//Limak weight 3x por ano
//Bob   weight 2x por ano

int main()
{
    int a, b, year=0;
    scanf("%d %d",&a, &b);

    while(a<=b){
        a=a*3;
        b=b*2;
        year++;
    }
    printf("%d",year);

    return 0;
}

