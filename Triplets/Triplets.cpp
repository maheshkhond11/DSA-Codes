#include <__msvc_all_public_headers.hpp>
using namespace std;

//my implementation
//void printTriplets(vector<int> input, int target) {
//
//    vector<vector<int>> calcArr;
//
//    for (int i = 0; i < input.size(); i++) {
//        int j = i;
//        vector<int>::iterator s = input.begin() + j;
//        vector<int>::iterator e = input.end();
//        int diff = target - input[i];
//        while (s != e) {
//            if(s->)
//        }
//    }
//
//    //print
//    for (vector<int> innerArr : calcArr) {
//        for (int val : innerArr) {
//            cout << val << " ";
//        }
//        cout << endl;
//    }
//}

void triplets(vector<int> arr, int targetSum) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    
    for (int i = 0; i <= n - 3; i++) {
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int currentSum = arr[i];
            currentSum += arr[j];
            currentSum += arr[k];
            if (currentSum == targetSum) {
                result.push_back({ arr[i], arr[j], arr[k] });
                j++;
                k--;
            }
            else if (currentSum > targetSum) {
                k--;
            }
            else {
                j++;
            }
        }
    }

    //print
    for (vector<int> innerArr : result) {
        for (int val : innerArr) {
            cout << val << " ";
        }
        cout << endl;
    }

}

int main()
{
    vector<int> input = {1,2,3,4,5,6,7,8,9,15};
    int target = 18;
    triplets(input, target);
}

