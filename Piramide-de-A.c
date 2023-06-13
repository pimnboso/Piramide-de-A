#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int linhas, i, j;
    char a;
    printf("Digite a quantidade de linhas que deseja em sua pirâmide: ");
    scanf("%d", &linhas);
    a = 'A';
    for(i = 1; i <= linhas; i++){
        for(j = 1; j <= i; j++){
            printf("%c", a);
        }
        a++;
        printf("\n");
}
}