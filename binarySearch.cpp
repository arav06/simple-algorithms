#include <iostream>
using namespace std;

int main(){

    int arr[] = {32,80,94,143,175,209};
    int n = 6;
    int low=0;
    int high = n-1;
    int middle;
    int search = 175;
    while(low<=high){
        middle = (low+high)/2; 
        if(arr[middle] == search){
            cout<<"Found "<<search<<" at "<<middle;
            break;
        }
        else if(arr[middle]<search){
            low = middle +1;
        }
        else if(arr[middle] > search){
        high = middle - 1; 
        } 
    }
}
