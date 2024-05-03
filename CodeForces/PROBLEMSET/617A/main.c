#include <stdio.h>
#include <stdlib.h>

int main()
{
    int steps=5, friendHouse, i=1;

    scanf("%d",&friendHouse);

    for(i; i<=friendHouse; i++){
        if(steps<friendHouse){
            steps+=5;
        }else{
            break;
        }
    }
    printf("%d",i);
    return 0;
}
