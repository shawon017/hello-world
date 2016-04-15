#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int store[100];
    int stop[100] = {0};
    int count;
    int count1 = 0;
    int p = 0;
    while(num != -1) {
        count = 0;
//    cout << "a";
        int j = 0;
        while(1){
            cin >> num;

            if(num == 0 || num == -1){
                break;
            }
            store[j] = num;
            count++;
            j++;
        }
        if(num == -1){
            break;
        }
//        cout << count;
        for(int k = 0; k < count; k++){
            int keep = store[k];
            for(int l = 0 ; l < count; l++){
                if(keep * 2 == store[l]){
                    stop[p]++;

                }
            }
        }

        count1++;
        p++;


    }

//    ac[j] = '\0';
   // cout << count1;
  //  int a = sizeof(stop) / sizeof(stop[0]);
//    cout << a;
    for(int i = 0; i < count1; i++){
        cout << stop[i] << endl;

    }


    return 0;
}
