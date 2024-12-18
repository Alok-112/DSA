#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no to check prime or not : ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime No. \n";
    }
    else
    {
        cout << "Non Prime No. \n";
    }
    return 0;
}