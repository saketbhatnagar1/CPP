#include<iostream>
using namespace std;

//recursion is a type of function calling itself,function call may be direct or indirect
//when a problem's solution relies on the same problems solution on a smaller scale
//for example 2^3 = 2x2x2 => 2^n = 2x2^(n-1)
//f(n) = 2 x f(n-1)
//eg.2 5!=  5x4x3x2x1 == 5x4! => n! = nx(n-1)!


//tail recursion:
//base case=>condition where recursion stops therefore base case in 2^n is 2^0
//function body
//recursive relation




//head recursion:
//base case=>condition where recursion stops therefore base case in 2^n is 2^0
//recursive relation
//function body



double fact(int n){
if(n==0){
    return 1;//base case me return likhna mandatory hai since it returns the answer to the function

}else{
   return n*fact(n-1);

}

 //printing power of a number, 
}
double power(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*power(n-1);
    }
}
//counting numbers tail recusrions
void count(int n){

    if(n==0){
        cout<<0;
        return ;
    }
    else{
        
        cout<<n<<endl;
       count(n-1);       //recursive relation
       
        
    }

}
//void counting numbers head recurison

void princount(int n){
    if(n==0){       //base condition
        cout<<0;
        return;
    }
    princount(n-1); //recursive relation

    cout<<n<<endl;        //function body;

}


int main(){
   //int ans  = power(3);
   //cout<<ans;
    int a = 10;
    princount(500);
    return 0;
}