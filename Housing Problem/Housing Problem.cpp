

#include <__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
    //13214132112
    vector<int> input = { 1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2 };

    int i = 0, j = 0, k = 8, currentTotal = 0;

    vector<pair<int, int>> output;

    while (j < input.size()) {
        cout << "j-- " << j << "   i-- " << i << endl;
        if (currentTotal == k) {
            output.push_back(make_pair(i, j - 1));
            j++;
            currentTotal += input[j];
        }
        else if(currentTotal < k) {
            currentTotal += input[j];
            j++;
        }
        else
        {
            currentTotal -= input[i];
            i++;
        }
    }
    for (auto temp : output) {
        cout << "fi -- " << temp.first << "   si -- " << temp.second << endl;
    }
}

