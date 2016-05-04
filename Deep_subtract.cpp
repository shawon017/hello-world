#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

int main()
{

    std::priority_queue <long int, std::vector<long int>, std::greater<long int>> PQ;
    int n,m;
    long int x;
    scanf("%d",&n);
    int *arr = new int[n];
    int i = 0;
    int temp = n;
    for(;i < n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&m);
    int temp1 = m;
//    while(m){
//
//        PQ.push(x);
//
//        m--;
//    }
    while(temp1){
        scanf("%ld",&x) ;

        for(int j = 0; j < n; j++){
            if(arr[j] > x){
                arr[j] = arr[j] - 1;
            }
        }
        PQ.pop();
        temp1--;
    }



    for (int k = 0; k < n; ++k) {
        printf("%d ", arr[k]);
    }
    return 0;
}
