#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    int arr1[100],arr2[100];

    cin >> t;
    while(t){
        cin >> n;
        int count = 0;
        int count1 = 0;
        for(int i = 0 ; i < n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        int m = n;
        for(int j = 0, k = 0 ; j < n ; j++,k++){
            if(arr1[j] == arr2[k] ){
                count++;
//                cout << "a";
            }
            if(arr1[j] == arr2[m-1]){
                count1++;
                m--;
            }

        }
//        cout << count;
        if(count1 == n && count == n){
            cout << "both" << endl;
        }
        else if(count1 == n){
            cout << "stack" << endl;
        }
        else if(count == n){
            cout << "queue" << endl;
        }
        else{
            cout << "neither" << endl;
        }




        t--;
    }
    return 0;
}
