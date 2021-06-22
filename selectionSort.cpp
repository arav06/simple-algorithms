#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {46,28,491,10,457,90};
    int n=6;
    
    int i,j,k,min,loc,temp;
    
    for(i=0;i<n-1;i++){
        min = arr[i];
        loc = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                loc = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    cout<<"Sorted array ="<<endl;
    for(k=0;k<n;k++){
        
        cout<<arr[k]<<" ";
    }

}
