#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int global = 0;

void zad22(int n1){
    scanf("%d",&n1);
    int wynik = 1;
    for(int i = 1; i <= n1; i++){
        wynik = wynik * i;
    }
    printf("%d\n",wynik);
}
void zad24(int n2){
    scanf("%d",&n2);
    int wynik = 2;
    if(n2 == 0){
        printf("1\n");
    }else if(n2 == 1){
        printf("2\n");
    }else{
    for(int i = 1; i < n2; i++){
        wynik = 2 * wynik;
    }
    printf("%d\n",wynik);
    }
}

void zad28(int n3){
    scanf("%d",&n3);
    double wynik;
    double tmp;
    for(int i = 0; i<=n3; i++){
        wynik = i*i;
        if(wynik == n3){
            printf("%d\n",i);
        }
    }
}
void zad212(int m4, int n4){
    scanf("%d",&m4);
    double tmp;
    double wynik = 0;
    double x = (1.0/m4);
    if(m4 <= 1){
        printf("Podana liczba jest mniejsza równa 1\n ");
    }else{
        scanf("%d",&n4);
        for(int i = 0; i <= n4; i++){
        tmp = pow(i,x);
        wynik = wynik + tmp;
        }
        printf("%lf\n",wynik);
    }
}
void zad217(int global){
    global = global + 1;
    printf("Liczba wywolan = %d \n",global);
}
// 2.2 / 2.4 / 2.8 / 2.12 / 2.17 / 2.20 / 2.24 / 2.29
int main()
{
    printf("Zadanie 2.2.2\n");
    unsigned int n1;
    zad22(n1);

    printf("Zadanie 2.2.4\n");
    unsigned int n2;
    zad24(n2);

    printf("Zadanie 2.2.8\n");
    unsigned int n3;
    zad28(n3);

    printf("Zadanie 2.2.12\n");
    unsigned int n4;
    unsigned int m4;
    zad212(m4,n4);

    printf("Zadanie 2.2.17\n");
    zad217(global);
    zad217(global);

    return 0;
}
