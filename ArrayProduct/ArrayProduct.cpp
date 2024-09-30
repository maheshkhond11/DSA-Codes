

#include <__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
    vector<int> nums = { 1,2,3,4 };
    int size = nums.size();
    vector<int> left(size, 1), right(size, 1), result(size, 0);
    for (int i = 0; i < size; i++) {
        //store left result
        if (i != 0) {
            left[i] = nums[i-1] * left[i - 1];
            right[size - i - 1] = nums[size - i] * right[size - i];
        }
        //store right result
    }

    for (int i = 0; i < size; i++) {
        result[i] = left[i] * right[i];
    }
    for (auto var : result) {
        cout << var << " " << endl;
    }
}


