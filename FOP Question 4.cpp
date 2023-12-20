#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer: \n ";
    cin >> N;

    int largestPrime = 0;

    if (N >= 2) {
        while (N > 1) {
            bool isPrime = true;
            for (int i = 2; i * i <= N; ++i) {
                if (N % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                largestPrime = N;
                break;
            }
            --N;
        }
    }

    if (largestPrime != 0) {
        cout << "The largest prime number less than or equal to " << N << " is: " << largestPrime << endl;
    } else {
        cout << "No prime number found less than or equal to " << N << endl;
    }

    return 0;
}

