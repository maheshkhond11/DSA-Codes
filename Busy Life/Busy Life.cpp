

#include <__msvc_all_public_headers.hpp>
using namespace std;

bool compare(pair<int, int> v1, pair<int, int> v2) {
    return v1.second < v2.second;
}

int main()
{
    vector<pair<int,int>> slots = { {7,9}, {0,10}, {4,5}, {8,9}, {4, 10}, {5,7} };
    sort(slots.begin(), slots.end(), compare);
    for (auto arr : slots) {
        cout << arr.first << " , " << arr.second << endl;
    }
    int count = 1;
    int finish = slots[0].second;

    for (int i = 1; i < slots.size(); i++) {
        if (slots[i].first >= finish) {
            count++;
            finish = slots[i].second;
        }
    }
}
