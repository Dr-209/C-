#include<iostream>
using namespace std;


//binary search logic
int BinarySearch(int arr, int size , int key){
int start=0;
int end=size-1;
int mid=(start+end)/2;

while(start <= end){
    if(key == arr[mid]){
        return mid;
    }
    if( key<arr[mid]){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    mid = (start+end)/2;
}
return-1;
} 

int main(){

int even[8]={1,3,5,7,9,10,11,12};
int key=7;
int index = BinarySearch(even,8,7);
    
    cout <<"index of 7 is" << index <<endl;
    return 0;
}
