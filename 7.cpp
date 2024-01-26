#include <iostream>

using namespace std;

void draw_square(int n, bool left_diagonal = false, bool right_diagonal = false){

//if(left_diagonal && right_diagonal){

for (int i=0; i < n; i++){
        cout<<"#";
        }; cout<<endl;
    for (int i=0; i < n-2; i++){
        cout<<"#";
         for(int j=1; j < n-1; j++){
            if( left_diagonal && i == j-1 || right_diagonal && i == n-j-2){
                cout<<"#"; 
        }
        else {cout<<" ";}
            }cout<<"#"<<endl;
        }
    for (int i=0; i < n; i++) {
        cout<<"#";}

}

int main(){
//cout<<"Wprowadz rozmiar"<<endl;
//int n;
//cin>>n;
draw_square(4);
cout<<endl;
cout<<endl;
draw_square(6, true, false);
cout<<endl;
cout<<endl;
draw_square(7, true, true);
return 0;
}