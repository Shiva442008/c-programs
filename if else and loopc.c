// large and small value bw two value_____________________________________________________________________________________________

/*#include <stdio.h>
void main()
{
    float a,b, largest, smallest;
    printf("enter two values\n");
    scanf("%f %f", &a,&b);
    if(a>b){
        largest = a;
        smallest=b;
    }
    if(b>a)
    {
        largest=b;
        smallest=a;
    }

    printf("largest is equal to : %.2f\n", largest);
    printf("smallest is equal to : %.2f", smallest);
} */

// large an =d small value bw 3 values_________________________________________________________________________________________
/*#include <stdio.h>
void main()
{
    int a,b,c,L,s;
    printf("enter three value \n");
    scanf("%d %d %d", &a,&b,&c);
    L=a;
    s=a;
    if(b>L){
        L=b;
    }
    if(b<s){
        s=b;
    }
    if(c>L){
        L=c;
    }
    if(c<s){
        s=c;
    }
    printf("largest = %d\n" ,L);
    printf("smallest = %d\n" ,s);
}*/

// n natural no. print_______________________________________________________________________________________________________

/*#include <stdio.h>
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        printf("%d",i);
    }
}*/


//find out net salary_______________________________________________________________________________________________________________

/*#include<stdio.h>
void main()
{
    float G,A,N,D;
    printf("enter the gross salary\n");
    scanf("%f", &G);
    if(G>10000){
        A=G*10/100;
        D=G*3/100;
        N=G+A-D;
        printf("net salary is: %.2f\n", N);
    }
        if(G>5000 && G<=10000){
        A=G*7/100;
        D=G*2/100;
        N=G+A-D;
        printf("net salary is: %.2f\n", N);
    }

}*/
