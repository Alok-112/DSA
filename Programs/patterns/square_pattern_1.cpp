#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++) //outer loop for number of rows
    {
        for (int j = 1; j <= n; j++) //inner loop for number of columns
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}