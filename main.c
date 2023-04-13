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
int * zad29(){
    return malloc(sizeof(int));
}
void z29(){
    printf("Zadanie 3.2.9\n");
    printf("%d\n",zad29());
}
int * zad211(unsigned int n){
    return malloc(n*sizeof(int));
}
void z211(){
    printf("Zadanie 3.2.11\n");
    int n;
    scanf("%d",&n);
    printf("%d\n",zad211(n));
}
void zad216(int const * a, int * const b){
    *b=*a;
}
void z216(){
    printf("Zadanie 3.2.16");
    const int a = 5, b = 7;
    zad216(a,b);
}
// 3.2.1 / 3.2.2 / 3.2.4 / 3.2.6 / 3.2.9 / 3.2.11 / 3.2.12 / 3.2.16
int main()
{
    z21();
    z22();
    z24();
    z26();
    z29();
    z211();
    z216();
    return 0;
}
--------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zad421a(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i]=0;
        printf("%d\n",tab[i]);
    }
}
void zad421b(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i] = i;
        printf("%d\n",tab[i]);
    }
}
void zad421c(unsigned int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i] = tab[i] * 2;
        printf("%d\n",tab[i]);
    }
}
void zad421d(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i] = abs(tab[i]);
        printf("%d\n",tab[i]);
    }
}
void z421(){
    int n = 10;
    int tab[10] = {1, 2, -5, 4, 0, -2, 7, -3, 9, 5};
    zad421a(n,tab);
    zad421b(n,tab);
    zad421c(n,tab);
    zad421d(n,tab);
}
double zad424(int n, unsigned int tab[]){
    double tmp = 1;
    double z = 1.0/n;
    for(int i=0;i<n;i++){
        tmp = tmp * tab[i];
    }
    double x = pow(tmp,z);
    printf("%lf\n",x);
    return x;
}
void z424(){
    int n = 5;
    unsigned int tab[5] = {5, 2, 3, 1, 7};
    zad424(n,tab);
}
void zad426a(int n, int tab1[], int tab2[]){
    for(int i = 0; i<n;i++){
        tab2[i] = tab1[i];
        printf("%d\n",tab2[i]);
    }
}
void zad426b(int n, int tab1[], int tab2[]){
    int x = n-1;
    for(int i =0; i<n;i++){
        tab2[x] = tab1[i];
        printf("%d\n",tab2[i]);
        x--;
    }
}
void z426(){
    unsigned int n = 7;
    int tab1[7] = {5, 1, 3, -6, -2, 8, 1};
    int tab2[7];
    //zad426a(n,tab1,tab2);
    zad426b(n,tab1,tab2);
}
// 4.2.1 / 4.2.4 / 4.2.6 / 4.2.7 / 4.2.10 / 4.2.12
int main()
{
    //z421();
    //z424();
    z426();
    return 0;
}
---------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zad421a(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i]=0;
        printf("%d\n",tab[i]);
    }
}
void zad421b(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i] = i;
        printf("%d\n",tab[i]);
    }
}
void zad421c(unsigned int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i] = tab[i] * 2;
        printf("%d\n",tab[i]);
    }
}
void zad421d(unsigned int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i] = abs(tab[i]);
        printf("%d\n",tab[i]);
    }
}
void z421(){
    int n = 10;
    int tab[10] = {1, 2, -5, 4, 0, -2, 7, -3, 9, 5};
    zad421a(n,tab);
    zad421b(n,tab);
    zad421c(n,tab);
    zad421d(n,tab);
}
double zad424(int n, unsigned int tab[]){
    double tmp = 1;
    double z = 1.0/n;
    for(int i=0;i<n;i++){
        tmp = tmp * tab[i];
    }
    double x = pow(tmp,z);
    printf("%lf\n",x);
    return x;
}
void z424(){
    int n = 5;
    unsigned int tab[5] = {5, 2, 3, 1, 7};
    zad424(n,tab);
}
void zad426a(int n, int tab1[], int tab2[]){
    for(int i = 0; i<n;i++){
        tab2[i] = tab1[i];
        printf("%d\n",tab2[i]);
    }
}
void zad426b(int n, int tab1[], int tab2[]){
    int x = n-1;
    for(int i =0; i<n;i++){
        tab2[i] = tab1[x-i];
        printf("%d\n",tab2[i]);
    }
}
void z426(){
    unsigned int n = 7;
    int tab1[7] = {5, 1, 3, -6, -2, 8, 1};
    int tab2[7];
    zad426a(n,tab1,tab2);
    zad426b(n,tab1,tab2);
}
void zad427a(int n, int tab1[], int tab2[], int tab3[]){
    for(int i = 0; i<n;i++){
        tab3[i] = tab1[i] + tab2[i];
        printf("%d\n",tab3[i]);
    }
}
void zad427b(int n, int tab1[], int tab2[], int tab3[]){
    for(int i = 0;i<n;i++){
        if(tab1[i] >= tab2[i]){
            tab3[i] = tab1[i];
        }else{
            tab3[i] = tab2[i];
        }
        printf("%d\n",tab3[i]);
    }
}
void zad427c(int n, int tab1[], int tab2[], int tab3[]){
    int tmp[5];
    for(int i=0;i<n;i++){
        tmp[i]= tab1[i];
        tab1[i] = tab3[i];
        tab3[i] = tab2[i];
        tab2[i] = tmp[i];
    }

}
void z427(){
    unsigned int n = 5;
    int tab1[5] = {1, 2, 3, 4, -5};
    int tab2[5] = {5, -4, -3, 2, 1};
    int tab3[5] = {2, 4, -6, 8, 0};
    zad427a(n,tab1,tab2,tab3);
    zad427b(n,tab1,tab2,tab3);
    zad427c(n,tab1,tab2,tab3);

}
int zad4210a(int n, int tab[]){
    int x = tab[0];
    for(int i = 1;i<n;i++){
        if(tab[i]>x){
            x = tab[i];
        }
    }
    printf("%d\n",x);
    return x;
}
int zad4210b(int n, int tab[]){
    int x = tab[0];
    for(int i = 1;i<n;i++){
        if(tab[i]<x){
            x = tab[i];
        }
    }
    printf("%d\n",x);
    return x;
}
int zad4210c(int n, int tab[]){
    int x = tab[0];
    int tmp;
    for(int i = 1;i<n;i++){
        if(tab[i]>x){
            x = tab[i];
            tmp = i;
        }
    }
    printf("%d\n",tmp);
    return tmp;
}
int zad4210d(int n, int tab[]){
    int x = tab[0];
    int tmp;
    for(int i = 1;i<n;i++){
        if(tab[i]<x){
            x = tab[i];
            tmp = i;
        }
    }
    printf("%d\n",tmp);
    return tmp;
}
int zad4210e(int n, int tab[]){
    int x = abs(tab[0]);
    for(int i = 1;i<n;i++){
        if(abs(tab[i])>x){
            x = abs(tab[i]);
        }
    }
    printf("%d\n",x);
    return x;
}
int zad4210f(int n, int tab[]){
    int tmp;
    int x = abs(tab[0]);
    for(int i = 1;i<n;i++){
        if(abs(tab[i])>x){
            x = abs(tab[i]);
            tmp = i;
        }
    }
    printf("%d\n",tmp);
    return tmp;
}
void z4210(){
    unsigned int n = 4;
    int tab[4] = {-1, 5, 2, -6};
    zad4210a(n,tab);
    zad4210b(n,tab);
    zad4210c(n,tab);
    zad4210d(n,tab);
    zad4210e(n,tab);
    zad4210f(n,tab);


}
void zad4212a(int n, int tab[]){
    int tmp[5];
    int x = n-1;
    for(int i =0; i<n;i++){
        tmp[i] = tab[x-i];
    }
    for(int i=0;i<n;i++){
        tab[i]=tmp[i];
        printf("%d\n",tab[i]);
    }
}
void zad4212b(int n, int tab[]){
    int x = tab[0];
    for(int i =0;i<n-1;i++){
        tab[i] = tab[i+1];
        printf("%d\n",tab[i]);
    }
    tab[n-1]=x;
    printf("%d\n",tab[n-1]);
}
void zad4212c(int n, int tab[]){
    int x = tab[n-1];
    for(int i =n-2;i>=0;i--){
        tab[i+1]=tab[i];
    }
    tab[0] = x;
    for(int i =0; i<n;i++){
        printf("%d\n",tab[i]);
    }
}
void z4212(){
    unsigned int n = 5;
    int tab[5] = {2, 7, -3, 4, -8};
    zad4212a(n,tab);
    zad4212b(n,tab);
    zad4212c(n,tab);
}
// 4.2.1 / 4.2.4 / 4.2.6 / 4.2.7 / 4.2.10 / 4.2.12
int main()
{
    z421();
    z424();
    z426();
    z427();
    z4210();
    z4212();


    return 0;
}
----------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double * zad4214(unsigned int n){
    double * tab = malloc(sizeof(double)*n);
    return tab;
}
int * zad4219(int n, int tab[]){
    int tmp = 0;
    for (int i = 0; i<n; i++){
        if(tab[i] != 0){
            tmp++;
        }
    }
    int * tab2 = malloc(tmp*sizeof(int));
    int tmp2;
    for(int i = 0; i < n; i++){
        if(tab[i] != 0){
            tab2[tmp2] = tab[i];
            tmp2++;
        }
    }
    return tab2;
}
double zad3213(int x){
    return 1.0;
}

int main()
{
    int n = 5;
    int tab[] = {1, 0, 5};
    printf("%p",zad4219(n,tab));
    
    return 0;
}
