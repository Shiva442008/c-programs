/*#include <stdio.h>
void main(){
    int a=10;
    printf("%d\n", a);
printf("hello world");
}*/

// add,sub,mul,dev,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
/*#include <stdio.h>
void main()
{

    float a,b,c,d,m;
    float q;
    printf("enter two numbers\n");
    scanf("%f %f", &a,&b);
    c=a+b;
    d=a-b;
    m=a*b;
    q=a/b;
    printf(" the sum of this two numbers is %.2f\n", c);
    printf(" the difference of this two numbers is %.2f\n", d);
    printf(" the multiplication of this two numbers is %.2f\n", m);
    printf(" the division of this two numbers is %.2f\n", q);
}*/

//area of circle..................................................................................................................
/*#include <stdio.h>
void main()
{
    float pi=22.0/7.0, r,A;
    printf("enter the value of r\n");
    scanf("%f", &r);
    A= pi*r*r;
    printf("%.2f\n", A);
}*/

//area of circle,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
/*#include<stdio.h>
void main()
{
    float b,h,A;
    printf("enter the value of base\n");
    scanf("%f", &b);
    printf("enter the value of height\n");
    scanf("%f", &h);
    A= 1.0/2.0*b*h;
    printf("%.2f", A);
}*/

//print n natural number +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<=n; i++){
        printf("%d\n",i);
    }
}*/

// dollar to rupees,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
/*#include <stdio.h>
void main()
{
    float d,r;
    printf("enter doller value\n");
    scanf("%f",&d);
    r= 100*d;
    printf("the value of dollar in rupees is equal to = %.2f\n", r);
    printf("enter rupees value");
    scanf("%f", &r);
    d= r/100;
    printf("the value of dollar in rupees is equal to = %.2f\n", d);

}*/

// grams to kg;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
/*#include<stdio.h>
void main()
{
    float g,K;
    printf("enter the value of gram\n");
    scanf("%f", &g);
    K= g/1000;
    printf("the value of kg is = %.2f\n" , K);

}*/

// convert bytes into KB,MB,GB""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

/*#include<stdio.h>
void main()
{
    float b,Kb, Mb,Gb;
    printf("enter the value of bytes= \n");
    scanf("%f", &b);
    Kb= b/1024;
    Mb = Kb/1024;
    Gb= Mb/1024;
    printf("the value of Kb is = %.2f\n", Kb);
     printf("the value of Mb is = %.2f\n", Mb);
      printf("the value of Gb is = %f\n", Gb);
}*/

// convert celsius into fahrenheit>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*#include <stdio.h>
void main()
{
    float c,f;
    printf("enter the value of celsius = \n");
    scanf("%f", &c);
    f= (9.0/5.0 *c) + 32;
    printf("the value of fahrenhit is = %.2f\n",f);
}*/

// calculate simple intrest////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*#include <stdio.h>
void main()
{
    float I,p,r,n, amount;
    printf("enter the value of principal amount\n");
    scanf("%f", &p);
    printf("enter the value of rate \n");
    scanf("%f", &r);
    printf("enter the value of years \n");
    scanf("%f", &n);
    amount = p+I;

    I= p*r*n/ 100;
    printf("the value of intrest is = %.2f", I);
    printf("the value of amount is = %.2f", amount);

}*/


// area and perimeter of a squar"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

/*#include <stdio.h>
void main()
{
    float a, A,P;
    printf("enter the value of side\n");
    scanf("%f", &a);
    A= a*a;
    P= 4*a;
    printf("the value of area is = %.2f\n", A);
    printf("the value of perimeter is = %.2f\n", P);
}*/

// area and perimeter of rectangle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/*#include <stdio.h>
void main()
{
    float l,w,A,P;
    printf("enter the value of length : \n");
    scanf("%f", &l);
     printf("enter the value of width : \n");
     scanf("%f", &w);
     A= l*w;
     P= 2*(l+w);
     printf("the value of parimeter is : %.2f\n", P);
     printf("the value of area is : %.2f\n", A);
}*/

// area of triangle????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????

/*#include<stdio.h>
void main()
{
    float A, h,b;
    printf("enter the value of height\n");
    scanf("%f", &h);
    printf("enter the value of base\n");
    scanf("%f", &b);
    A= 1.0/2.0*h*b;
    printf("the value od area is: %.2f\n", A);
}*/

// calculate net salary allowance=10%, deduction=3% of gross>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*#include <stdio.h>
void main()
{
    float A,N,D,G;
    printf("enter the gross salary: \n");
    scanf("%f", &G);
    A= G*10/100;
    D= G*3/100;
    N= G+A-D;
    printf("gross salary is %f\n", G);
    printf(" allowance is %f\n", A);
    printf(" Deduction is %f\n", D);
    printf("net salary is %.2f\n", N);

}*/

// calculate net sales{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
/*#include <stdio.h>
void main()
{
    float G,N,D;
    printf("enter the gross sales: \n");
    scanf("%f", &G);
    D= G*10/100;
    N= G-D;
    printf("the gross gross is: %f\n", G);
    printf("the discount is: %f\n", D);
    printf("the net sales is: %.2f\n", N);
}*/

// total and average of marks of three subjects""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
/*#include<stdio.h>
void main()
{
    float P,C,M,a,t;
    printf("enter the marks of physics\n");
    scanf("%f", &P);
    printf("enter the marks of chemistry\n");
    scanf("%f", &C);
    printf("enter the marks of maths\n");
    scanf("%f", &M);

    t=P+C+M;
    a= t/3;

    printf("the marks of physics is: %.2f\n", P);
    printf("the marks of chemistry is: %.2f\n", C);
    printf("the marks of maths is: %.2f\n", M);
    printf("total marks is: %.2f\n", t);
    printf("average is: %.2f\n", a);
}*/


/*#include <stdio.h>
int main(){
  for(int i=1; i<=5; i++){
    for(int j=2; j<=2; j++){
        printf("%d %d", i,6-i);

    printf("\n");
  }
}

  return 0;
}*/


#include <stdio.h>
int main(){
  for(int i=1; i<=5; i++){
    for(int j=1; j<=2; j++){
        printf("%d %d", i,6-i);
    }
    printf("\n");
  }
return 0;
}







