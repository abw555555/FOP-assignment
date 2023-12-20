#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    string result = "";
    for (size_t i = 0; i < inputString.length(); ++i) {
        char c = inputString[i];
        if (result.find(tolower(c)) == string::npos) {
            result += tolower(c);
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}

