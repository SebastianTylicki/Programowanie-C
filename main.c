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
-------
    
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void z21(){
    printf("Zadanie 3.2.1\n");
    int *n,*m;
    scanf("%d %d",&n, &m);
    printf("%d\n",zad21(&n,&m));
}
int zad21(int *n, int *m){
    if(*n<=*m){
        return *n;
    }else{
        return *m;
    }
}
void z22(){
    printf("Zadanie 3.2.2\n");
    int *n,*m;
    scanf("%d %d",&n, &m);
    printf("%p\n",zad22(&n,&m));
}
int zad22(int*n, int*m){
    if(*n<=*m){
        return n;
    }else{
        return m;
    }
}
void z24(){
    printf("Zadanie 3.2.4\n");
    int *n, *m;
    scanf("%d %d",&n, &m);
    printf("% \n",zad24(&n,&m));
}
void zad24(int*n, int*m){
    int tmp;
    if(*n>*m){
        tmp = n;
        n = m;
        m = tmp;
        printf("%d\n%d\n",*n,*m);
    }else{
        printf("%d\n%d\n",*n,*m);
    }
}
void z26(){
    printf("Zadanie 3.2.6\n");
    int n, *w;
    scanf("%d",&w);
    printf("%d \n",zad26(n,&w));
}
void zad26(int n, int *w){
    n = *w;
    printf("%d\n%d\n",n,*w);
}
// 3.2.1 / 3.2.2 / 3.2.4 / 3.2.6 / 3.2.9 / 3.2.11 / 3.2.12 / 3.2.16
int main()
{
    z21();
    z22();
    z24();
    z26();
    return 0;
}
