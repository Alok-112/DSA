// Find the smallest /largest in an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        /*
         if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        */

        smallest = min(nums[i], smallest);
        /*
          if(nums[i]>largest)
        {
        largest = nums[i];
        }
        */

        largest = max(nums[i], largest);
    }

     // min and max

    cout << "smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}