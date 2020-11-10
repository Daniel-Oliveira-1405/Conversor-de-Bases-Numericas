#include<stdio.h>
#include<string.h>

int main(){
    int base, n;
    int resto, a, i;

    char caracteres[36] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char resultado[100];

    printf("Digite a base para qual ser convertida: ");
    scanf("%d",&base);
    printf("\nDigite o numero: ");
    scanf("%d",&n);

    if(base==8)
        printf("%d na base 8 = %o\n",n,n);
    else if(base==16)
        printf("%d na base 16 = %X",n,n);
    else{
        a=n;
        for(i=0; a!=0; i++){
            resto = a % base;
            resultado[i] = caracteres[resto];
            a-=resto;
            a/=base;
        }
        printf("%d na base %d = ",n,base);
        for(i=strlen(resultado)-1; i>=0; i--)
            printf("%c",resultado[i]);
    }
    getchar();
}
