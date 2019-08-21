#include<iostream>

using namespace std;

int findPivot(int arr[],int low,int high)
{
 if(high<low) return -1;
 if(high==low) return low;
 int mid=(low+high)/2;
 if(mid<high && arr[mid]>arr[mid+1]) return mid;
 if (mid>low && arr[mid]<arr[mid-1]) return mid-1;
 if(arr[low]>=arr[mid])
  return findPivot(arr,low,mid-1);
 return findPivot(arr,mid+1,high);
}






int main()
{
int n,t,k;
#ifndef ONLINE_JUDGE
 freopen( "lab2test.txt", "r" ,stdin);
#endif

cin>>t;

for(int i=0;i<t;i++)
{
cin>>n;
int a[n];

for(int j=0;j<n;j++){
    cin>>a[j];
}

cin>>k;

int p=findPivot(a,0,n-1);
bool res=true;
 int begin=0;
 int last=p;
  int mid=(begin+last)/2;
while(begin<=last)
{
	if(a[mid]<k)
	   begin=mid+1;
        else if(a[mid]==k)
           {cout<<mid<<"\n"; res=false;break;}
        else  last=mid-1;
        mid=(begin+last)/2;
}
if(res)
{
begin=p+1;
last=n-1;
 mid=(begin+last)/2;
while(begin<=last)
{
	if(a[mid]<k)
	   begin=mid+1;
        else if(a[mid]==k)
           {cout<<mid<<"\n"; res=false;break;}
        else  last=mid-1;
        mid=(begin+last)/2;
}

}

if(begin>last)
 cout<<-1<<"\n";

}
return 0;
}
