#include <iostream>
using namespace std;

int main(){
    char x, y;
    int N, count;
    count = 0;
    while(count < N){
        cout << "Enter the first text: ";
        cin >> x;
        cout << "Enter the second text: ";
        cin >> y;
        cout << "Enter N: ";
        cin >> N;
        if(count%2==0){
            cout << x ;
        }
        else{
            cout << y ;
        }
        count = count+1;
    }
    return 0;

}