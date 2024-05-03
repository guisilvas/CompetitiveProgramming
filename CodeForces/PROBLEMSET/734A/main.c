#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, anton=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        char win;
        scanf("%c",&win);
        if(win=="A"){
            anton++;
        }
    }
    if(anton>(n/2)){
        printf("Anton");
    }else if(anton<(n/2)){
        printf("Danik");
    }else{
        printf("Friendship");
    }

    return 0;
}
