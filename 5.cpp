#include <iostream>
#include <cmath>

using namespace std;

int dolna;
int gorna;

bool is_prime(int n) {
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
};

int main() {
    int prime_or_not_prime = 13;
    if (is_prime(prime_or_not_prime)) {
        cout << prime_or_not_prime << " is prime!" << endl;
    } else {
        cout << prime_or_not_prime << " is not prime!" << std::endl;
    }

    cout<<"Wpisz dolna granice"<<endl;
    cin >> dolna;
    cout<<"Wpisz gorna granice"<<endl;
    cin >> gorna;

    for(int i = dolna; i <= gorna; i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}



