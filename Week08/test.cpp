#include <iostream>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    long i, n;
    bool isPrime = true;

    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}