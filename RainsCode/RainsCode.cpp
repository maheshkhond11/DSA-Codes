// RainsCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <__msvc_all_public_headers.hpp>
using namespace std;

int GetTotalWater(vector<int> height) {
    int n = height.size();
    if (n <= 2) {
        return 0;
    }
    vector<int> left(n, 0), right(n, 0);

    //formula
    //min(left[i], right[i]) - height[i]

    //save elements in left and right
    
    int lg = 0;
    int rg = 0;
    int totalWater = 0;
    for (int i = 0; i < n; i++) {

        //left
         lg = max(lg, height[i]);
         left[i] = lg;

        //right
        rg = max(rg, height[n - i - 1]);
        right[n - i - 1] = rg;
    }

    //calculate total water
    for (int i = 0; i < n; i++) {
        totalWater += min(left[i], right[i]) - height[i];
    }
    //return it
    return totalWater;
}

int main()
{
    //vector<int> arr{ 0,1,0,2,1,0,1,3,2,1,2,1 };
    vector<int> arr{ 4,2,0,3,2,5 };
    cout << "Total Water Count: " << GetTotalWater(arr) << endl;
}