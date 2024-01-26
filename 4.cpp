#include <iostream>

using namespace std;

uint64_t factorial_r(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n >= 1){
         return n * factorial_r(n-1);
    }
    
};

int main() {
    int n = 15;
    uint64_t result = factorial_r(n);
    cout << "Factorial of " << n << " equals " << result << endl;
    return 0;
}

