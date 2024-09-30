#include <__msvc_all_public_headers.hpp>
using namespace std;

//int main()
//{
//    vector<int> nums = { 1,3,2,2,2 };
//    int min = 0, max = -1;
//    for (int i = 0; i < nums.size() - 2; i++) {
//        if (nums[i] > nums[i + 1]) {
//            min = i;
//            break;
//        }
//    }
//    for (int i = nums.size() - 1; i > 0; i--) {
//        if (nums[i] < nums[i - 1]) {
//            max = i;
//            break;
//        }
//    }
//    cout << max - min + 1  << endl;
//}

int outOfOrder(vector<int> arr, int i) {
    int x = arr[i];

    if (i == 0) {
        return x > arr[1];
    }

    if (i == arr.size() - 1) {
        return x < arr[i - 1];
    }

    return x > arr[i + 1] or x < arr[i - 1];
}

int main() {
    vector<int> arr = { 2,6,4,8,10,9,15 };
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int x = arr[i];

        if (outOfOrder(arr, i)) {
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }

    if (smallest == INT_MAX) {
        cout << 0;
    }

    int left = 0;
    while (smallest >= arr[left]) {
        left++;
    }
    int right = arr.size() - 1;
    while (largest <= arr[right]) {
        right--;
    }

    cout << right - left + 1;
    return 0;
}

