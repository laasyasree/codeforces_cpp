#include<bits/stdc++.h>
using namespace std;

int bsRecursive(int start,int last,int arr[],int value){

    if(start > last){
        return -1;
    }
    int mid = (start + last)/2;
    if(arr[mid] == value){
        return mid;
    }
    if(arr[mid] > value){
        return bsRecursive(start,mid-1,arr,value);
    }
    return bsRecursive(mid+1,last,arr,value);

}

int bsIterative(int arr[],int n,int value){

    int start = 0, last = n-1;
    while(start <= last){

        int mid = (start + last)/2;
        if(arr[mid] == value){
            return mid;
        }
        if(arr[mid] > value){
            last = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}

int main(){

    int n;  //Size of array
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];        //Array elements in sorted order

    int value;
    cin>>value;     //value to be searched in the array

    cout<<bsRecursive(0,n-1,arr,value)<<endl;
    cout<<bsIterative(arr,n,value)<<endl;

    return 0;
}
