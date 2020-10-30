#include<iostream.h>
#include<conio.h>
int main()
{
int i,n;
cout<<"Enter size of array: ";
cin>>n;
int a[n];
cout<<"Enter array: ";
for (i=0;i<n;i++)
cin>>a[i];
int beg=0,end=n-1;
int no;
cout<<"Enter no to be searched: ";
cin>>no;
int mid=(beg+end)/2;
while(beg<=end)
{
	if(a[mid]<no)
		beg=mid+1;
	else if(a[mid]==no)
	{
		cout<<"Found at "<<mid+1;
		break;
	}
	else
		end=mid-1;
	mid=(beg+end)/2;
}
if(beg>end)
cout<<"Not found";
return 0;
}