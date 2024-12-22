

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int num = 1;
    for (int i = 0; i < n; i++) // outer loop for number of rows
    {
        for (int j = 0; j < n; j++) // inner loop for number of columns
        {
            cout << num<<" ";
            num++;
        }
        cout << endl;
    }
    return 0;
}