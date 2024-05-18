#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, P, A=0, B=0;

    scanf("%d",&N);

    for(int i=0; i<N; i++){
        scanf("%d",&P);
      if(P==1){
          if(A==0){
              A=1;
          } else {
              A=0;
          }
      } else {
          if(B==0){
              B=1;
          } else {
              B=0;
          }
          if(A==0){
              A=1;
          } else {
              A=0;
          }
      }
    }

    printf("%d\n%d",A,B);

    return 0;
}
