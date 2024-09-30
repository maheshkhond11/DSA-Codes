

#include <__msvc_all_public_headers.hpp>
using namespace std;\

int main()
{
    vector<int> a = { 23, 5, 10, 17, 30 };
    vector<int> b = { 26, 134, 135, 14, 19 };
    //create min var
    int min = INT_MAX;

    //create a min diff elements pair
    pair<int, int> mindiff;

    //sort botth the arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    //time complexity -- nlog(n) + mlog(m)
    //set two pointers p1,p2
    int p1 = 0, p2 = 0;

    //move min element pointer by 1 until one of the pointer reaches array end
    while (p1 < a.size() || p2 < b.size()) {
        if (p1 == a.size())
            break;
        if (p1 == a.size())
            break;

        if (abs(a[p1] - b[p2]) < min) {
            min = abs(a[p1] - b[p2]);
            mindiff.first = a[p1];
            mindiff.second = b[p2];
        }

        if (a[p1] < b[p2]) {
            p1++;
        }
        else {
            p2++;
        }
    }

    cout << "first " << mindiff.first << "     second - " << mindiff.second;
}

