#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double calc;
    double d;
    for(int i = 0; i<12; i++){

        cin >> d;
        calc += d;
    }
    calc /= 12;
    cout << setprecision(2) << fixed << "$" <<calc;
    return 0;
}