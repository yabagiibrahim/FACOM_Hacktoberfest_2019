#include<stdio.h>


long long int vet[100];

void calculate(){
    vet[1]=1;
    for(int i=2;i<93;i++){
        vet[i]=vet[i-1]+vet[i-2];
    }
}

int main(){

    calculate();


    int n;
    printf("Type the number of querys : ");
    scanf("%d",&n);
    printf("\n");
    
    for(int i=0;i<n;i++){
        int x;
        printf("Query #%d: ",i+1);
        scanf("%d",&x);

        if(x>=93)
            printf("Fibonacci(%d) = can not be represented\n",x);
        else 
            printf("Fibonacci(%d) = %lld\n",x,vet[x]);
        printf("\n");
    }

return 0;
}