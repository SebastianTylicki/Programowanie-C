#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1.3
int zad31(int n1){
    int x;
    if(n1 < 0){
        x = n1 *-1;
    }else{
     x=n1;
    }
    return x;
}
int zad32(int n2, int m2){
    if(n2>= m2){
        return n2;
    }else{
        return m2;
    }
}
int zad33(int n3, int m3, int k3){
    if(n3 >= m3 && n3 >= k3){
        return n3;
    }else if(m3 >= n3 && m3 >= k3){
        return m3;
    }else{
        return k3;
    }
}
int zad34(int n4, int m4){
    int x = abs(n4);
    int y = abs(m4);
    if(x >= y){
        return n4;
    }else
        return m4;
}
void zad37(double a, double b, double c){
    double delta = (b*b)-4*a*c;
    double pierwiastek = sqrt(delta);
    double x1,x2,x0;
    if(delta < 0){
        printf("Nie ma rozwiazan\n");
    }else if( delta == 0){
        x0 = -b/(2*a);
        printf("x0 = ");
        printf("%lf \n",x0);
    }else{
        x1 = (-b-pierwiastek)/(2*a);
        printf("x1 = ");
        printf("%lf \n",x1);
        x2 = (-b+pierwiastek)/(2*a);
        printf("x2 = ");
        printf("%lf \n",x2);
    }
}
//1.4
void zad41(int nn, int mm){
    for(int i=nn; i < mm; i +=nn){
        printf("%d\n",i);
    }
}
void zad42(int nn2, int mm2){
    int wynik;
    for(int i =1; i <= mm2; i++){
        wynik = i*nn2;
        printf("%d\n",wynik);
    }
}
void zad43(int nn3, int mm3, int kk3){
    int wynik;
    for(int i =1; i <= kk3; i++){
        wynik = i*nn3;

        if(kk3 > wynik && wynik > mm3){
        printf("%d\n",wynik);
    }
    }
}
int zad44(int nn4){
    int wynik2 =1;
    for(int i=1; i <= nn4; i++){
        wynik2 = i * wynik2;
    }
    return wynik2;
}
int zad45(int nn5){
    int wynik3 =0;
    int z;
    for(int i=0; i <=nn5; i++){
        z = i*i;
        wynik3 = z + wynik3;
    }
    return wynik3;
}
int main()
{
    //1.3
    printf("Zadanie 1.3.1\n");
    int n1;
    scanf("%d",&n1);
    int zadd31 = zad31(n1);
    printf("%d\n",zadd31);

    printf("Zadanie 1.3.2\n");
    int n2, m2;
    scanf("%d",&n2);
    scanf("%d",&m2);
    int zadd32 = zad32(n2,m2);
    printf("%d\n",zadd32);

    printf("Zadanie 1.3.3\n");
    int n3, m3 ,k3;
    scanf("%d",&n3);
    scanf("%d",&m3);
    scanf("%d",&k3);
    int zadd33 = zad33(n3,m3,k3);
    printf("%d\n",zadd33);

    printf("Zadanie 1.3.4\n");
    int n4, m4;
    scanf("%d",&n4);
    scanf("%d",&m4);
    int zadd34 = zad34(n4,m4);
    printf("%d\n",zadd34);

    printf("Zadanie 1.3.7\n");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    zad37(a,b,c);

    //1.4
    printf("Zadanie 1.4.1\n");
    unsigned int nn, mm;
    scanf("%d",&nn);
    scanf("%d",&mm);
    zad41(nn,mm);

    printf("Zadanie 1.4.2\n");
    unsigned int nn2, mm2;
    scanf("%d",&nn2);
    scanf("%d",&mm2);
    zad42(nn2,mm2);

    printf("Zadanie 1.4.3\n");
    int nn3, mm3, kk3;
    scanf("%d",&nn3);
    scanf("%d",&mm3);
    scanf("%d",&kk3);
    zad43(nn3,mm3,kk3);

    printf("Zadanie 1.4.4\n");
    unsigned int nn4;
    scanf("%d",&nn4);
    int zadd44 = zad44(nn4);
    printf("%d\n",zadd44);

    printf("Zadanie 1.4.5\n");
    unsigned int nn5;
    scanf("%d",&nn5);
    int zadd45 = zad45(nn5);
    printf("%d\n",zadd45);
    return 0;
}
