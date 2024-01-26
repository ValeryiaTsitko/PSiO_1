#include <iostream>
 
using namespace std; 
 
uint64_t factorial(int n)
{
    if(n>1)
        return n * factorial(n-1);
    return 1;
}

int main()
{
    int n = 15;
    uint64_t result = factorial(n);
    cout << "Factorial of " << n << " equals " << result << endl;
    return 0;
}
 