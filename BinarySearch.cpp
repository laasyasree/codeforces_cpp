#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
int binarysearch()
{
int n,key;
cout<<"enter the size of the array";
cin>>n;
int a[n];
cout<<"enter the sorted array";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the element to be searched";
cin>>key;
int beg,end,mid;
beg=0;
end=n-1;
while(beg<=end)
{
mid=(beg+end)/2;
if(key==a[mid])
return a[mid];
else if(key<a[mid])
end=mid-1;
else
beg=mid+1;
}
return -1;
}
int main()
{
int x=binarysearch();
cout<<x;
return 0;
}
