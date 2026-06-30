#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev) {
        cout << str << " is a palindrome";
    } else {
        cout << str << " is not a palindrome";
    }

    return 0;
}
