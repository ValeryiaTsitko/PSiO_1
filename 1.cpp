#include <iostream>
#include <vector>

using namespace std;

void fill_progressive(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i <= n; i++) {
        v[i] = i+1;
    }
};

void print_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i]<<endl;;
}};

int main(){
int n;
cout<<"Wprowadz rozmiar vektora:"<<endl;
cin>>n;
vector <int> v(n);

fill_progressive(v);
print_vector(v);
return 0;
}
