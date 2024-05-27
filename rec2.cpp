#include<iostream>
using namespace std;
//functions:

//fibbonacci:take n as the nth term of fibbonacci number

//recursive relation will be f(n)=f(n-1)+f(n-2)
int fib(int n){
if(n==0)
{
    return 1; 

}
else if(n==1){
    return 1;
}
else{
    int ans = fib(n-1)+fib(n-2);
}
}



void saydigit(int n){
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

if(n==0){
    return;
    
}
else{
    int digit = (n%10);//digit = 589%10 = 9
    n = n/10;//589 = 58;
    saydigit(n);
    cout<<arr[digit]<<endl;
}





}








//problems on recursion:







//Q1 fibbonacci number/series -> 0,1,1,2,3,5,8,13,21,34
//q2 count ways to reach nth stairs
//q3 input - 421 output -four,two,one: such is the problem
int main()
{
int a = fib(4);
cout<<a;

saydigit(789);
    return 0;
}