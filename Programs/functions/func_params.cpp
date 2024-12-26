#include<iostream>
using namespace std;

// Sum of two numbers
int sum(int a,int b){ // parameters
    int s=a+b;
    return s;
}

//min of 2 nums
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    // cout<<sum(10,5); // Arguments
    // cout<<min(15,3);
    return 0;
}