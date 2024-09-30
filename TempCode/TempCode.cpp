

#include <__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
    string s;
    //cin >> s; // this will take string only before space

    //getline(cin, s); // to get full sentence

    getline(cin, s, '.'); // to get full paragraph ending at .

    cout << s << endl;

}

