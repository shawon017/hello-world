#include <iostream>

using namespace std;

int main() {
    int n, s;
    int p = 1;
    while(cin >> n && n > 0){
        s = n;
        string ch[25];
        int l = 0;
        while(s != 0){
            cin >> ch[l];
            l++;s--;
        }
        int i;
        cout << "SET " << p << endl;

        for( i = 0; i < n; i+=2){
            cout << ch[i] << endl;
        }
        if(n % 2 != 0) {
            for (i = n - 2; i > 0; i -= 2) {
                cout << ch[i] << endl;
            }
        }
        else{
            for (i = n - 1; i >= 0; i -= 2) {
                cout << ch[i] << endl;
            }
        }
        p++;
    }
    return 0;
}