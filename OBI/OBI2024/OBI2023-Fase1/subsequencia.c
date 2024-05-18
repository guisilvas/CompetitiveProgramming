#include<stdio.h>

int main(){
    int A, B, tamanhoSb=0, yes=0;

    scanf("%d %d", &A, &B);
    int Sa[A];
    int Sb[B];

    for(int i=0; i<A; i++){
        scanf("%d", &Sa[i]);
    }
    for(int i=0; i<B; i++){
        scanf("%d", &Sb[i]);
        tamanhoSb++;
    }

    for(int i=0; i<A; i++){
        for(int j=0; j<B; j++){
            if(Sa[i]==Sb[i]){
                yes++;
                break;
            }
        }

    }
    if(yes==tamanhoSb){
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}
