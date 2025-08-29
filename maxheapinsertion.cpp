#include<iostream>
using namespace std;
class maxheap{
    int arr[100];
    int size;
public:
    maxheap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int data){
        size = size + 1;
        int index = size;
        arr[index] = data;
        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent; 
            }
            else{
                return ;
            }
        }

    }
    void deleteMax(){
        if(size == 0){
            cout<<"Nothing to dlt "<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i < size){
            int left = i * 2;
            int right = i * 2 + 1;
            if(left < size && arr[i] < arr[left]){
                swap(arr[left],arr[i]);
                i = left;
            }
            else if( right < size && arr[i] < arr[right]){
                swap(arr[right],arr[i]);
                i = right;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1 ; i <= size ; i++){
            cout<<arr[i] << " "; 
        }
        cout<<endl;
    }
};
// Function to maintain the max-heap property for a subtree rooted at index 'i' in an array 'arr' of size 'n'.
// Parameters:
//   arr[]: The array representing the heap (1-based indexing).
//   n: The number of elements in the heap.
//   i: The index of the subtree root to heapify.
void heapify(int arr[], int n , int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if(left <= n && arr[    left] > arr[largest]){
        largest = left;
    }
     if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
    }
}
void heapsort(int arr[], int n){
    int size = n;
    while(size>1){
       swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);

    }
}
int main(){
    maxheap obj ;
    obj.insert(50);
    obj.insert(55);
    obj.insert(53);
     obj.insert(52);
    //   obj.insert(76);
    //    obj.insert(76);
   obj.print();
   obj.deleteMax();
   obj.print();
   int arr[6] = {-1,54,53,55,52,50};
   int n = 5;
     for(int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }
    
   for(int i = 1 ; i <=n ;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
heapsort(arr,n);
for(int i = 1 ; i <=n ;i++){
    cout<<arr[i]<<" ";
   }

    






}