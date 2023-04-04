#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zad22(unsigned int n1){
    scanf("%d",&n1);
    int wynik = 1;
    for(int i = 1; i <= n1; i++){
        wynik = wynik * i;
    }
    return wynik;
}
int zad24(unsigned int n2){
    scanf("%d",&n2);
    int wynik = 2;
    if(n2 == 0){
        return 1;
    }else if(n2 == 1){
        return 2;
    }else{
    for(int i = 1; i < n2; i++){
        wynik = 2 * wynik;
    }
    return wynik;
    }
}

int zad28(unsigned int n3){
    scanf("%d",&n3);
    double wynik;
    double tmp;
    for(int i = 0; i<=n3; i++){
        wynik = i*i;
        if(wynik == n3){
            return i;
        }
    }
}
int zad212b(unsigned int m4,unsigned int n4){
    scanf("%d",&m4);
    double tmp;
    double wynik = 0;
    if(m4 <= 1){
        printf("Podana liczba jest mniejsza równa 1\n ");
    }else{
        scanf("%d",&n4);
        for(int i = 0; i <= n4; i++){
        wynik = wynik + zad212a(i, m4);
        }
        return wynik;
    }
}
int zad212a(unsigned int n4, unsigned int m4){
    double x = (1.0/m4);
    double tmp;
    for(int i =0; i <= n4; i++){
    tmp = pow(i,x);
    }
    return tmp;
}
void zad217(){
    static int x = 0;
    x++;
    printf("Liczba wywolan = %d \n",x);
}
int zad220(unsigned int n5){
    scanf("%d",&n5);
    if (n5<=1)
        return 1;
    else
        return n5 * zad220(n5-1);
}
int zad224(unsigned int n6){
    scanf("%d",&n6);
    int tmp;
    for(int i = 1; i < n6; i++){
        tmp = i + tmp;
    }
    return tmp+1;
}
int zad229(unsigned int n7, unsigned int m7){
    scanf("%d",&n7);
    scanf("%d",&m7);
    if (n7==m7)
        return m7;
    else if (n7>m7)
        return zad229(n7%m7, m7);
    else
        return zad229(m7%n7, n7);
}
// 2.2 / 2.4 / 2.8 / 2.12 / 2.17 / 2.20 / 2.24 / 2.29
int main()
{
    printf("Zadanie 2.2.2\n");
    int n1;
    int zadd22 = zad22(n1);
    printf("%d\n",zadd22);

    printf("Zadanie 2.2.4\n");
    int n2;
    int zadd24 = zad24(n2);
    printf("%d\n",zadd24);

    printf("Zadanie 2.2.8\n");
    int n3;
    int zadd28 = zad28(n3);
    printf("%d\n",zadd28);

    printf("Zadanie 2.2.12\n");
    int n4;
    int m4;
    double x;
    int zadd212 = zad212b(n4,m4);
    printf("%d\n",zadd212);

    printf("Zadanie 2.2.17\n");
    zad217();
    zad217();
    zad217();

    printf("Zadanie 2.2.20\n");
    int n5;
    int zadd220 = zad220(n5);
    printf("%d\n",zadd220);

    printf("Zadanie 2.2.24\n");
    int n6;
    int zadd224 = zad224(n6);
    printf("%d\n",zadd224);

    printf("Zadanie 2.2.29\n");
    int n7;
    int m7;
    int zadd229 = zad229(n7, m7);
    printf("%d\n",zadd229);

    return 0;
}
