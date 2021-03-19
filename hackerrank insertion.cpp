/*

QUESTION: Correctness and the Loop Invariant



*/















#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i=0;i< a;i++){
        cin >> arr[i];
    }
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    //arr={4,2,1,9}
    for(int i=1; i < size ; i++)
    {
        int index, key;
         key=arr[i];
         index= i;
         while(index>0 && arr[index-1] > key){
             arr[index]=arr[index-1];
             index--;
         }
        arr[index]=key;
        
       }
       
        for(int i=0;i<size;i++){
            
            cout << arr[i] << " ";
        }
    
    
    
    
    
    
}

