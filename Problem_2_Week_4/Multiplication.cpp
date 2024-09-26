#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter a number: ";  
    cin >> n;

    cout << "The multiplication of " << n << " is:\n";

    for (long long i = 1; i <= 10; ++i) 
        cout << n << " * " << i << " = " << n * i << endl;
    
    return 0;
}
