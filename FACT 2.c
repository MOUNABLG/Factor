#include<stdio.h>

int factorial(int n){
int i,f;
f=1;
for (i=1;i<=n;i++){
    f=f*i;

}
return f;
}
int main()
{
    int n,i;
    printf("saisir un nombre :");
    scanf("%d",&n);

   printf("la factorielle de %d est :%d\n",n,factorial(n));

   int f;
    f=1;
printf( "d% \n",n);

for (i=1;i<=n;i++){
    f=f*i;

}
 printf(" LA FACTORIELLE EST : %d \n",f);
}

