// practice q1
// WAP to calculate area of square whwn side is given.
/*
#include<stdio.h>
int main(){
    int side=4;
    printf("The area of the square is : %d\n",side*side);
    return 0;
}
*/

/*
practice q2
WAP to calculate the rea of the circle
#include<stdio.h>
int main(){
    int r=4;
    float pi=3.14;
    printf("The area of the circle is : %f\n",pi*r*r);
    return 0;
}
*/


/*
pratcice q3
Converting the datatypes
#include<stdio.h>
int main(){
    int a=(int)1.99999;
    printf("The int value of a is : %d\n",a);
    return 0;
}
    */

/*
practice q4
priority of operators.
#include<stdio.h>
#include<math.h>
int main(){
    printf("The value is : %d\n", 5*2-2*3); 
    printf("The value is : %d\n", 5*2/2*3); 
    printf("The value is : %d\n", 5*(2/2)*3); 
    printf("The value is : %d\n", 5+2/2*3); 
    return 0;
}
*/

/*
practice q5
WAP to check if a number is divisible bt 2 
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(num%2==0)
    printf("t is divisible by 2\n");
    else
    printf("it is not divisible by 2\n");
    return 0;
}
*/


/* 
practice q6
WAP to calculate average of tree numbers
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the three numbers a b c :");
    scanf("%f%f%f",&a,&b,&c);
    float avg=(a+b+c)/3;
    printf("The average of three numbers is : %f\n",avg);
    return 0;
}
*/

/*
practice q7
WAP to check a character is alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(('a'<=ch<='z')||('A'<=ch<='Z')){
        printf("it is a alphabet\n");
    }
    else
    printf("it is digit");
    return 0;
}
*/



/*
practice q8
WAP to find the smallest number.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter the three numbers a b c :");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b&&a<c)
    printf("a is smallest\n");
    else if(b<a&&b<c)
    printf("b is smallest \n");
    else
    printf("c is smallest\n");
}
*/


/*
practice q9
WAP to check if a student is pass or fail. marks>30 --> PASS and marks<=30  -->FAIL
#include<stdio.h>
int main()
{
    float marks;
    printf("enter the marks of the student :");
    scanf("%f",&marks);
    if(marks>30)
    printf("The student is PASS\n");
    else if(marks<=30)
    printf("The studnet is FAIL\n");
    else
    printf("Invalid marks\n");
    return 0;
}
*/

/*
practice q10
WAP to give grades to student marks.
#include<stdio.h>
int main(){
    int marks;    
    printf("enter the marks of the student :");
    scanf("%d",&marks);
    if(marks<30)
    printf("GRADE C\n");
    else if(30<=marks && marks<70)
    printf("GRADE B\n");
    else if(70<=marks && marks<90)
    printf("GRADE A\n");
    else if(90<=marks && marks<=100)
    printf("GRADE A+\n");
    else
    printf("Invalid marks !\n");
}
*/

/*
practice q11
WAP to find if a chracter entered by user is upper caseor not.
#include<stdio.h>
int main()
{
    char ch;
     printf("enter a character :");
    scanf("%c",&ch);
    if('a'<=ch && ch<='z')
    printf("it is lower case alphabet.");
    else if('A'<=ch && ch<='Z')
    printf("it is upper case alphabet.");
    else
    printf("it is not a alphabet.");
    return 0;
}
*/



/*
practice q12
WAP to print numbers 1 tp 10
#include<stdio.h>
int main()
{
 int i;
 for(i=0;i<=10;i++){
    printf("%d\n",i);
 }
}
*/



/*
pracctice q13
WAP to print numbers 1 to n wnen n is entered by user.
#include<stdio.h>
int main(){
 int i,n;
 printf("enter a number : ");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
    printf("%d\n",i);
 }
 return 0;
}
*/

/* practice q14
WAP to print the sum of n natural numbers and also print them in reverse.
#include<stdio.h>
int main(){
 int i,n;
 printf("enter a number : ");
 scanf("%d",&n);
 int sum=0;
 for(i=0;i<=n;i++){
    sum=sum+i;
 }
 printf("The sum of n natural numbers is : %d\n",sum);
 for(i=n;i>=1;i--){
    printf("%d\n",i);
 }
 return 0;
}
*/

/*practice q15
WAP to print table of number n input by a user.
#include<stdio.h>
int main(){
 int i,n;
 printf("enter a number : ");
 scanf("%d",&n);
 for(i=1;i<=10;i++){
    printf("%d\n",n*i);
 }
 return 0;
}
*/


//practice q16
//WAP to take input from the user until a odd number is entered.
/*
#include<stdio.h>
int main()
{
    int n;
    do
    {
       printf("Enter a number n :");
       scanf("%d",&n);
    } while (n%2==0);
    return 0;
}
*/


//practice q17
//WAP to take input from the user until a number multiple of 7 is entered.
/*
#include<stdio.h>
int main()
{
    int n;
    do
    {
       printf("Enter a number n :");
       scanf("%d",&n); 
    } while(n%7!=0);
    return 0;
}
*/


/*
practuce q18
WAP to print numbers 1 to 10 except 6 
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
*/


/*practice q19
WAP to print all the odd numbers from 5 to 50
#include<stdio.h>
int main()
{
    int i;
    for(i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
*/



/*
practice q20
WAP to print factorial of n entered by the user.
#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of n is %d\n",fact);
    return 0;
}
*/


/*
practice q21
AP to print reverse of a table of a number entered by the user.
#include<stdio.h>
int main(){
 int i,n;
 printf("enter a number : ");
 scanf("%d",&n);
 for(i=10;i>=1;i--){
    printf("%d\n",n*i);
 }
 return 0;
}
*/



/*
practice q22
WAP to calculate the sum of numbers between 5 and 50 including 5 and 50.
#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=5;i<=50;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
*/

/*practice23
WAP using functions one to print hello and other to print goodbye
#include<stdio.h>
void printhello();
void printbye();
int main()
{
    printhello();
    printbye();
    return 0;
}
void printhello(){
    printf("HELLO !\n");
}
void printbye(){
    printf("GOODBYE !\n");
}
*/


/*practice q24
WAP to print namaste if user is indian or bonjour if user is french
#include<stdio.h>
void Namaste();
void Bonjour();
int main()
{
    char ch;
    printf("enter a character (i or f)");
    scanf("%c",&ch);
    if(ch=='i' || ch=='I')
    Namaste();
    else
    Bonjour();
    return 0;
}
void Namaste(){
    printf("Namste ji ! \n");
}
void Bonjour(){
    printf("Bonjour !\n");
}
*/


/*practice q25
WAP to calculate square of a number using library function
#include<stdio.h>
#include<math.h>
int main()
{   
    float n,sq;
    printf("enter a number : ");
    scanf("%f",&n);
    sq=pow(n,2);
    printf("The square of the function is : %f\n",sq);
    return 0;
}
*/


/*practice q26
WAP USING FUNCTIONS TO CALCULATE AREA OF A SQUARE,CIRCLE,RECTANGLE.
#include<stdio.h>
float sqarea(float s);
float carea(float r);
float rarea(float l,float b);
int main()
{   
    float s,l,b,r,sq,circle,rect;
    printf("enter the side of a square : ");
    scanf("%f",&s);
    printf("enter the radius of a circle : ");
    scanf("%f",&r);
     printf("enter the length of a rectangle : ");
    scanf("%f",&l);
    printf("enter the breadth of a rectangle : ");
    scanf("%f",&b);
    sq=sqarea(s);
    circle=carea(r);
    rect=rarea(l,b);
    printf("The area of square is : %f\n",sq);
      printf("The area of circle is : %f\n",circle);
        printf("The area of rectangle is : %f\n",rect);
    return 0;
}
float sqarea(float s){
    return s*s;
}
float carea(float r){
    float pi=3.14;
    return pi*r*r;
}
float rarea(float l,float b){
    return l*b;
}
*/

/*
practice q27
WAP to calculate factorial of a number using recursive function
#include<stdio.h>
int fact(int n);
int main(){
    printf("the factorial of the number is : %d\n",fact(5));
    return 0;
}
int fact(int n){
    if(n==1)
    return 1;
    int factnm1=fact(n-1);
    int factn=factnm1*n;
}
*/



/*
practice q28
WAP using function to convert temperature from celsius to fehrenheit.
#include<stdio.h>
float temp(int c);
int main()
{
    int celsius;
    printf("enter the temperature in celsius : ");
    scanf("%d",&celsius);
    printf("the converted temperature from celsius to fehrenheit is : %f\n",temp(celsius));
}
float temp(int c){
    float f = (9.0/5.0)*c + 32;
    return f;
}
*/


/*
practice 29
WAP to calculate percentage of three subject marks of a student.
#include<stdio.h>
float percentage(int sci,int math,int sanskrit);
int main()
{
    int sci,math,sanskrit;
    printf("enter the marks of three subjects : ");
    scanf("%d%d%d",&sci,&math,&sanskrit);
    printf("The percentage of the student is  : %f\n",percentage(sci,math,sanskrit));
}
float percentage(int sci,int math,int sanskrit){
    float p = ((math+sci+sanskrit)/300.0)*100;
    return p;
}
*/



/* practice q30 
calculate the fibonacci series using recursive function 
#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("The fibonacci of the number n is : %d\n",fib(n));
}
int fib(int n){
    if(n==0 || n==1)
    {
        if(n==0){
        return 0;
        }
        if(n==1){
            return 1;
        }
    }
   int  fibnm2 = fib(n-2);
  int  fibnm1 = fib(n-1);
   int fibn = fibnm1 + fibnm2;
    return fibn;
}
    */


/* 
practice q31
     enterning the elements into array and printing them.
    #include<stdio.h>
    int main()
    {
        int n;
        printf("Enter the no of elements : \n");
        scanf("%d",&n);
        int aadhar[n];
        for(int i=0;i<n;i++)
        {
            printf("%d index : ", i );
            scanf("%d",&aadhar[i]);
        }
         for(int i=0;i<n;i++)
        {
            printf("%d index = %d\n", i ,aadhar[i]);
        }
        return 0;
    }
*/


/*
practice q32
array as a function argument 
to count the no of odd numbers in an array
#include<stdio.h>
void countodd(int arr[],int n);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    countodd(arr,10);
    return 0;
}
void countodd(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("The number of odd numbers in the array are : %d\n",count);
*/


/*
practice q32
print a reverse of atray.
#include<stdio.h>
void reverse(int arr[],int n);
void print(int arr[],int n);
int main()
{
    int arr[10] = {1,2,3,4,5};
    reverse(arr,5);
    print(arr,5);
    return 0;
}
void reverse(int arr[],int n){
     for(int i=0;i<n/2;i++)
     {
        int firstval = arr[i];
        int secval = arr[n-1+i];
        arr[i] = secval;
        arr[n-i-1] = firstval;
     }
    }
    void print(int arr[],int n)
    {
        for(int i=0;i<n;i++){
            printf("%d \t",arr[i]);
        }
    }
*/


/*
#include<stdio.h>
int fib(int n);
int main()
{
    int n = 6;
    fib(n);
    return 0;
}
int fib(int n)
{
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=0;i<=n;i++){
    fib[i] = fib[i-1] + fib[i-2];
    printf("%d \t", fib[i]);
    }
}
*/

/*
#include<stdio.h>
void printtable(int table[][10],int m,int n);
int main()
{
    int table[2][10];
    printtable(table,2,10);
    printtable(table,3,10);
    return 0;
}
void printtable(int table[][10],int m,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d \t",m*i);
    }
    printf("\n");
}
*/


// STRINGS
/*
#include<stdio.h>
int main()
{
    char name[20] = {'T','E','J','A','S','H','W','I','N','I','\0'};
    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c\t",name[i]);
    }
    return 0;
}*/


/*
#include<stdio.h>
int main()
{
    char firstname[] = "Tejashwini";
    char lastname[] = "Kanasani";
   printf("%s %s", firstname,lastname);
    return 0;
}
*/

/* Strings cannot input multiword strings with spaces
#include<stdio.h>
int main()
{
    char name[50];
    printf("enter your name : ");
    scanf("%s",name);
    printf("My name is : %s",name);
    return 0;
}
*/



// string ffinctions to access multiwords
// gets(str) --- inputs a string 
// puts(str) --- outputs a string 
/*
#include<stdio.h>
int main()
{
    char name[100];
    gets(name);
    puts(name);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char str[20];
    fgets(str,20,stdin);
    puts(str);
    return 0;
}
    */


//string using pointers.
// we can change the strings if we used pointers.
/*
#include<stdio.h>
int main()
{
    char *name = "Tejashwwini Kanasani";
    puts(name);
    name = "Kanasani Vamsidhar Reddy";
    puts(name);
    return 0;
}
*/

// WAP that inputs user's name and prints its length.
#include<stdio.h>
void printlength(char name[]);
int countlength(char name[]);
int main()
{
    char name[100];
    fgets(name,20,stdin);
    printlength(name);
    printf("%d\n",countlength(name));
    return 0;
}
void printlength(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
}
}
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}