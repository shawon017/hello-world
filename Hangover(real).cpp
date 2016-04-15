#include <iostream>

using namespace std;

int main() {
    double n=0.01;
    int count = 0;
    int cards[100];
    int u = 0;
    while(n != 0.00) {
        cin >> n;
        if(n == 0.00){
            break;
        }
        int div = 2;
        double st = 0;
        while (1) {
            st += (1 / (double) div);
            if (st > n){
                break;
            }
            div++;
        }
        div--;
        cards[u] = div;
        u++;
        count++;
    }
    for(int i  = 0; i < count; i++){
        cout << cards[i] << " card(s)"<< endl;
    }
    return 0;
}
