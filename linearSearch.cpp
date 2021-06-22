#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {374,59,571,47,20,32};
    int n=6;
    int search = 20;
    for(int i=0;i<n-1;i++){
        if(arr[i]==search){
            cout<<search<<" was found at "<<i;
            break;
        }
    }
}
