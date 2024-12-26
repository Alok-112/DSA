// Q1. Calculate sum of numbers from 1 to N
// Q2. Calculate N Factorial 
// Q3. Calculate sum of digits of a number 
// Q4. Calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

// Q1
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// Q2
int factorialN(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

// Q3
int sumOfDigits(int num){
    int digSum=0;
    while(num>0){
        int lastDig = num%10;
        num/=10;
        digSum+=lastDig;
    }
    return digSum;
}

// Q4
int nCr(int n,int r){
    int fact_n=factorialN(n);
    int fact_r=factorialN(r);
    int fact_nmr = factorialN(n-r);

   return  fact_n/(fact_r * fact_nmr);
}


int main()
{
    cout << sumN(10) << endl;
    cout << sumN(50) << endl;
    cout<<factorialN(4)<<endl;
    cout<<factorialN(5)<<endl;
    cout<<"sum = "<<sumOfDigits(2356) <<endl;
    cout<<"sum = "<<sumOfDigits(975834) <<endl;
    cout<<nCr(8,2)<<endl;
    cout<<nCr(6,2)<<endl;
    return 0;
}