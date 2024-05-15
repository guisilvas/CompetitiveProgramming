#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, anton=0, danik=0;
    scanf("%d\n",&n);
    char games[n];

    for(int i=0; i<n; i++){
        char win;
        scanf("%c",&win);
        games[i]=win;
        if(games[i]=='A'){
            anton++;
        } else {
            danik++;
        }
    }

    if(anton>danik){
        printf("Anton");
    }else if(anton<danik){
        printf("Danik");
    }else{
        printf("Friendship");
    }

    return 0;
}
