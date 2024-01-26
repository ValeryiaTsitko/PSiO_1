#include<iostream>
using namespace std;

int gcd( int a, int b){
    int c;
    while (b){
        c = a % b;
        a = b;
        b = c;
    }
    cout << a;
}
int main()
{
    gcd(16, 8);
    return 0;
}