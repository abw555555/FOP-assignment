#include <iostream>
#include <string>

using namespace std;

int main() {
    string String1, String2;

    cout << "Enter the first string: ";
    cin >> String1;

    cout << "Enter the second string: ";
    cin >> String2;

    if (String1 == String2) {

        int len = String1.length();
        string reversedString = "";

        for (int i = len - 1; i >= 0; i--) {
            reversedString += String1[i];}
            
        cout << "Strings were equal. Rotated first string: " << reversedString << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}

