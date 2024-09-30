#include<__msvc_all_public_headers.hpp>

using namespace std;

vector<string> fizzbuzz(int n) {
    vector<string> fBStrings;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fBStrings.push_back("FizzBuzz");
        }
        else if (i % 3 == 0) {
            fBStrings.push_back("Fizz");
        }
        else if (i % 5 == 0) {
            fBStrings.push_back("Buzz");
        }
        else {
            fBStrings.push_back(to_string(i));
        }
    }
    return fBStrings;
}


int main()
{
    vector<string> returnedString = fizzbuzz(20);

    for(string temp : returnedString) {
        cout << temp << " ";
    }
}

/*
FizzBuzz Test
Write a fizzbuzz function that returns a vector<string> with the numbers from 1 to n with the following restrictions:

for multiples of 3 store "Fizz" instead of the number

for multiples of 5 store "Buzz" instead of the number

for numbers which are multiples of both 3 and 5 store "FizzBuzz"

You may use the std::to_string(number) method to convert a number into a string.



Example

fizzbuzz(15) == {
"1", "2", "Fizz", "4", "Buzz",
"Fizz", "7", "8", "Fizz", "Buzz",
"11", "Fizz", "13", "14", "FizzBuzz"
}


Hint
Expected Time Complexity O(N)

Expected Space Complexity O(N)
*/

