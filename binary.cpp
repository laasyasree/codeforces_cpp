#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int beg,int end,int info)
{
    int mid=(beg+end)/2;
    do
    {
        mid=(beg+end)/2;
    if(info<arr[mid])
    {
        end=mid;
    }
    else if(info>arr[mid])
    {
        beg=mid+1;
    }

     else if(arr[mid]==info)
    {
        return mid;
    }

    }while(beg<=end);
    cout<<"value not found"<<endl;
    return -1;
}

int main()
{

    int size,x;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];

    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];

    cout<<"Enter item to search"<<endl;
    cin>>x;

    sort(arr,arr+size);

    int y=binarysearch(arr,0,size-1,x);
    if(y!=-1)
        cout<<"value found"<<endl;
}
