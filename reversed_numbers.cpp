#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    int n , n1;
    cin >> t;
    while(t){
        cin >> n >>  n1;


        int d , d1, d2;
        int re = 0 , re1 = 0;
        while(n){
            int a = n % 10;
            re = re * 10 + a;

            n /= 10;

        }
        while(n1){
            int b =  n1 % 10;
            re1 = re1 * 10 + b;
            n1 /= 10;
        }
        int s = re + re1;
        re = 0;
        while(s){
            d2 = s % 10;
            re = re * 10 + d2;
            s /= 10;
        }
        cout << re << endl;
        t--;
    }
    return 0;
}
