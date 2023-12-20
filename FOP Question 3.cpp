#include <iostream>
using namespace std;

int main() {
    int initial[5] = {1, 2, 3, 4, 5};
    int expand = 10;
    int final[expand] = {0};
    
    for (int i = 0; i < 5; ++i) {
        final[i] = initial[i];
    }
    
    for (int i = 5; i < expand; ++i) {
        final[i] = i + 1; 
    }

    cout << "Final array: ";
    for (int i = 0; i < expand; ++i) {
        cout << final[i] << " ";
    }
    cout << endl;

    return 0;
}

