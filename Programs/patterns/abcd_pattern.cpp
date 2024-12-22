#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // outer loop for number of rows
    {
        char ch = 'A';              // initialize ch to 'A' inside the outer loop because we want to reset it to 'A' after each row
        for (int j = 0; j < n; j++) // inner loop for number of columns
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}
