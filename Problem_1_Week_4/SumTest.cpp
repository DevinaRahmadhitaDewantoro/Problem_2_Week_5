#include <iostream>

using namespace std;

int main() {
    bool testPassed = false;
    long long n = 99999999;
    long long sum = 0;

    // Calculate the sum of numbers from 1 to n
    for (long long i = 1; i <= n; i++) {
        sum += i;
    }
    

    // Hardcoded expected sum for n = 99999999
    long long expected = 4999999950000000;  // This is the sum of numbers from 1 to 99999999

    // Check if the calculated sum matches the hardcoded expected sum
    testPassed = (sum == expected);

    cout << "Sum: " << sum << endl;

    // Output the test result
    if (testPassed) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}
