#include <bits/stdc++.h>
using namespace std;
const int MAX = 10e7+10;
typedef long long lol;
lol cycle[MAX];
int main(){

    lol n,i,m,j,a=0,b,cnt,c=0,maxx;

    while(scanf("%d %d", &i, &j) != EOF){
            if(j < i){
                b = j;
                j = i;
                i = b;
                a = 1;
            }
            else{
                a = 0;
            }
            maxx=0; m = i;
            while(i <= j){

                n = i; cnt = 1;
            while(1){
                if(n==1) break;
                if(n%2) n = 3*n + 1;
                else n/=2;
                cnt++;

            }
            cycle[c]=cnt;
            if(cycle[c] > maxx){
                maxx = cycle[c];
            }
            c++;
            i++;
        }
        if(a == 1){
            cout << j << " " << m << " " << maxx << endl;
        }
        else{
            cout << m  << " " << j << " " << maxx << endl;
        }


    }

}
