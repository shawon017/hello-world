#include <iostream>
using namespace std;
const int maxN = 5010;
int n,arr[maxN];
void print(int arr[], int n){
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void min_heapify(int arr[],int n, int i){
//    arr[0]=arr[i];
//    int k=2*i;
//    while (k<=n)
//    {
//        if ((k<n)&&(arr[k]>arr[k+1])) k++;
//        if (arr[0]>arr[k]) {
//          arr[i]=arr[k];
//          i=k;
//          k=i<<1;
// }
//        else k=n+1;
//
//    }
//    arr[i]=arr[0];
// }
    int lowest = i; // Initialize lowest as root
    int left = 2*i ;
    int right = 2*i + 1;

    // If child is lower than root
    if(left <= n && arr[left] < arr[lowest]){
        lowest = left;
    }

    // If right child is lower than lowest
    if(right <= n && arr[right] < arr[lowest]){
        lowest = right;
    }
    // If lowest is not root
    if(lowest != i){ // also break condition
        swap(arr[i], arr[lowest]);

        //Recursively heapify
        min_heapify(arr, n, lowest);

    }
//    int j, temp;
//
//    temp = arr[i];
//
//    j = 2 * i;
//
//    while (j <= n)
//
//    {
//
//        if (j < n && arr[j+1] < arr[j])
//
//            j = j + 1;
//
//        if (temp < arr[j])
//
//            break;
//
//        else if (temp >= arr[j])
//
//        {
//
//            arr[j/2] = arr[j];
//
//            j = 2 * j;
//
//        }
//
//    }
//
//    arr[j/2] = temp;
    print(arr,n);
}
// main function to extract value
void heapsort(int arr[], int n){
    long long sum = 0;
    for (int i = n;i!=1; ) {

        swap(arr[1], arr[i]);
        i--;
        min_heapify(arr,i,1);
        arr[1] += arr[i+1];
        sum+=arr[1];
        min_heapify(arr,i,1);
    }

    cout << sum << endl;
}
void build_min_heap(int arr[], int n) {
    for (int i = n / 2 ; i; --i) {
        min_heapify(arr, n, i);
    }
    heapsort(arr,n);
//    long long ans = 0;
//    while(n!=1){
//        swap(arr[1], arr[n--]);
//        min_heapify(arr,n,1);
//        arr[1] += arr[n+1];
//        ans+=arr[1];
//        min_heapify(arr,n,1);
////        print(arr, n);
//    }
//    cout << ans << endl;
}
int main(){
    int g;
    while(cin >> n && n){
        g = n;
//        arr[n] = {0};
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        build_min_heap(arr,n);
//        print(arr, n);
//        heapsort(arr, n);
//        for (int j = 1; j <= g ; ++j) {
//            cout << arr[j];
//        }

    }
}
//#include <iostream>
//using namespace std;
//
//struct Node* head = NULL;
//struct Node {
//    int data;
//    struct Node* next;
//
//};
//
//
//void Insert(Node* head, int x){
//    struct Node* temp = new Node;
//    temp->data = x;
//    temp->next = NULL;
//    if(head != NULL) temp-> next = head;
//
//    head = temp;
//}
//
//void Delete(Node* head, int n){
//    struct Node* temp1 = head;
//    if(n == 1){
//        head = temp1->next; // point to next node;
//        free(temp1);
//        return;
//    }
//    for(int i = 0; i< n-2; i++){
//        temp1 = temp1->next; // (n-1) nth node.
//    }
//    struct Node* temp2 = temp1->next; // nth node pointing to.
//    temp1->next = temp2->next; // telling temp1 to point (n+1)nth node
//    free(temp2);
//}
//
//void Print(Node* head){
//    struct Node* temp = head;
//    cout << "List: ";
//    while(temp != NULL){
//        cout << temp->data;
//        temp = temp->next;
//    }
//    cout << endl;
//
//}
//int main() {
//    int n;
//    struct Node *temp1 = head;
//    int arr[100000];
//    while(1) {
//        cin >> n;
//        if (n == 0) {
//            break;
//        }
//        int x = 0;
////        int che[] = {2,3,4,5,0};
////        int cSize=sizeof(che)/sizeof(che[0]);
////        cout << cSize;
//        int o=0;
//        int arr1[100000] = {0};
//        for (int i = 0; i < n; i++) {
////            cin >> arr[i];
//            cin >> x;
//            Insert(head, x);
////            Print();
//        }
//
////        Insert(head, 6);
////        cout << "f";
//        int a = 0, temp = 0;
//        for (int i = 0; i < n; i++) {
//            while (temp1->next) {
//                if (temp1->data > temp1->next->data) {
//                    temp = temp1->data;
//                    temp1->data = temp1->next->data;
//                    temp1->next->data = temp;
//                }
//                else {
//                    temp1 = temp1->next;
//                }
//            }
//            temp1 = head;
//        }
//
////        Print();
//
////        a = arr[0] + arr[1];
////        arr1[0] = a;
//        arr[0] += arr[1];
//        int arr2[100000];
//        long long int sum = 0;
//        cout << "A";
//        int l = 1, swap =0, k = 0, cnt = 0;
//        for(int i = 1; i < n; i++){
////            a += arr[i];
////            arr[0]+=arr[i];
////            arr[i]=0;
//            cout << "a";
//            temp1->data+=temp1->next->data;
//            Delete(head, i+1);
//            sum += temp1->data;
//
////                if(a > arr[i+1]){
////                    cout<<"i";
////                    arr2[k] = a;
////                    k++;
////                    cnt++;
////                    a = arr[i+1]+arr[i+2];
////                    i+=2;
////                }
//            for(int j = 0; j < n; j++){
//                while(temp1->next) {
//                    if(temp1->data > temp1->next->data){
//                        swap = temp1->data;
//                        temp1->data = temp1->next->data;
//                        temp1->next->data = swap;
//                    }
//                    else{
//                        temp1 = temp1->next;
//                    }
//                }
//                temp1 = head;
//            }
////            for (int m = 0; m < n; ++m) {
////                cout << arr[m];
////            }
////            arr1[l] = a;
////            l++;
//        }
////        cout << a;
////
////        for(int i = 0; i < n ; i++){
////            sum += arr1[i];
////        }
////        for (int m = cnt; m >=0; --m) {
////            sum+=arr2[cnt];
////        }
//        cout << sum << endl;
//        Print(head);
//    }
//    return 0;
//}

