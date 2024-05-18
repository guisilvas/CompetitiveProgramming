#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, D, A=0, j=0;

    //Numero de dias
    scanf("%d",&N);
    int R[N];

    for(int i=1; i<=N; i++){
        scanf("%d",&D);
        A += D;
        if(A>=1000000){
            R[j] = i;
            j++;
        } else {
            continue;
        }
    }

    printf("%d",R[0]);

    return 0;
}
