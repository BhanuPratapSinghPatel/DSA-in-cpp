#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    int arr[100];
    int size;
    MaxHeap(){
        arr[0]= -1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deleteFromHeap(){
        if(size==0){
            return;
        }
        arr[1]=arr[size];
        size=size-1;
        int i=1;
        while(i<size){
            int left=2*i;
            int right=2*i+1;
            if(left<size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MaxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(80);
    
    h.print();
    h.deleteFromHeap();
    h.print();
    return 0;
}