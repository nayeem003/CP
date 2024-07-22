#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    long fact = 1.0;
    cin >> n;

    if(n==0){
      cout << "Enter values greater than 0"<<endl;
    }else{
        for(int i = 1; i<=n ; ++i){
            fact *= i;
        cout<<"Factorial is of "<< n << "=" << fact <<endl;
        }
        return 0;

    }
        
}

