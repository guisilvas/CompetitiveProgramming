// 1x3 2x3 3x3 4x3...ixk
// 3
// 6
// 9
//12
//--
//30

#include <stdio.h>
#include <conio.h>

int main()
{
    //preco da banana1, dolares inicio, quant bananas que ele quer
    int k, n, w, price=0, borrow, zero=0;
    scanf("%d %d %d",&k,&n,&w);

    //Quanto sera emprestado?
    for(int i=1; i<=w; i++){
        price+=(k*i);
    }

    if(price>n){
        borrow=(price-n);
        printf("%d",borrow);
    } else {
        printf("%d",zero);
    }

    return 0;
}
