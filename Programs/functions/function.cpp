#include<iostream>
using namespace std;

// Function definition
int  printHello(){
    cout<<"Hello World!"<<endl;
    return 3;
}

int main(){
   int val = printHello(); // Function call or Invocation
    cout<<"Value returned by function is: "<<val<<endl;
    return 0;
}