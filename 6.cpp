#include <iostream>
#include <cmath>

using namespace std;

double leibniz_pi(double stop_at){
    double pi = 0;
    double mianownik = 1;
    double licznik = 1;
while(1){
    double drob = licznik/mianownik;
    if (abs(drob) < stop_at){
        break;
    }
    pi += drob;
    licznik *= -1;
    mianownik += 2;
}
return pi*4;
}

int main(){
double stop_at = 0.001;   
double pi_approx = leibniz_pi(stop_at);
cout<<pi_approx <<endl;
cout<<"error: "<< pi_approx - M_PI<<endl;

    return 0;
}