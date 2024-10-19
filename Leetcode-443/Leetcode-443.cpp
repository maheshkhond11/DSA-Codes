
#include <iostream>
#include<__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
    string str = "aaaabbcdeee";
    bool flag = true;
    int count = 1;
    string result;
    for (int i = 0; i < str.size(); i++) {
        if (i < str.size() - 1 && str[i + 1] == str[i]) {
            count++;
        }
        else {
            result += str[i] + to_string(count);
            if (count > 1)
                flag = false;
            count = 1;
        }
    }
    if (flag) {
        cout << str;
    }
    cout << result;
}