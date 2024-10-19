

#include <__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
    string inputString;
    getline(cin, inputString);
    cout << inputString;
    int count = 0;
    for (auto s : inputString) {
        if (isspace(s))
            count++;
    }
    string str(inputString.size() + count * 3, ' ');
    int ctr = inputString.size() - 1 + count * 3;
    for (int i = inputString.size() - 1; i >= 0; i--) {
        if (isspace(inputString[i])) {
            str[ctr] = '0';
            str[ctr - 1] = '2';
            str[ctr - 2] = '%';
            ctr -= 3;
        }
        else {
            str[ctr] = inputString[i];
            ctr--;
        }
    }
    cout << str;
}