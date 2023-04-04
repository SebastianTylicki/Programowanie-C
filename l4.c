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
