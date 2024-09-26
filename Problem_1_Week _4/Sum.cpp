#include <iostream> 

using namespace std;

int main() {
    long long n; 
    cout << "Enter a number: "; 
    cin >> n;

    long long sum = 0; 

    for (long long i = 1; i <= n; i++) {
        sum += i; 
    }

    cout << "The sum of all natural numbers up to " << n << " is: " << sum << endl;

    return 0;
}
