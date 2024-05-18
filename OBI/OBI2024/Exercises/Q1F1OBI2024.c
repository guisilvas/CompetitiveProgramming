#include<stdio.h>
int main(){
    int V, A, F, P, M, CP=0;

    scanf("%d", &V);
    scanf("%d", &A);
    scanf("%d", &F);
    scanf("%d", &P);
    M = A;
    int array[3] = {A, F, P};
    int arrayM[3];

    for(int i=0; i<3; i++){
        if(array[i]<M){
            M = array[i];
        }
    }
    arrayM[0] = M;
    if(F<=P){
        arrayM[1] = F;
        arrayM[2] = P;
    } else {
        arrayM[1] = P;
        arrayM[2] = F;
    }

    for(int i=0; i<3; i++){
        V -= arrayM[i];
        if(V>=0){
            CP++;
        }
    }

    printf("%d", CP);

    return 0;
}
