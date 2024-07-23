#include <iostream>
using namespace std;


int findMax(int num1, int num2, int num3) {
    int max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    return max;
}

int main() {
    int num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    
    int maximum = findMax(num1, num2, num3);

    
    cout << "The maximum of the three numbers is: " << maximum << endl;

    return 0;
}
