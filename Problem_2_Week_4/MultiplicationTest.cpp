#include <iostream>
using namespace std;

int main()
{
    long long n;
    bool testPassed = false;

    // Hardcoded n value
    n = 99999999;
    
    cout << "The multiplication of " << n << " is:\n";
    
    // Perform the multiplication from 1 to 10
    for (long long i = 1; i <= 10; ++i)
        cout << n << " * " << i << " = " << n * i << endl;

    // Hardcoded expected values for n = 99999999
    long long expected[10] = {99999999, 199999998, 299999997, 399999996, 499999995, 
                              599999994, 699999993, 799999992, 899999991, 999999990};

    // Test if the calculated values match the expected results
    testPassed = true;
    for (long long i = 1; i <= 10; ++i) {
        if (n * i != expected[i - 1]) {
            testPassed = false;
            break;
        }
    }

    
    if (testPassed) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}

