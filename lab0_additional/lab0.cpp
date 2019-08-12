
#include<iostream>

using namespace std;
int main()
{
int n,t,k;
#ifndef ONLINE_JUDGE
 freopen( "test.txt", "r" ,stdin);
#endif

cin>>t;

for(int i=0;i<t;i++)
{
cin>>n>>k;
int a[n];

for(int j=0;j<n;j++){
int ele;
cin>>ele;
a[j]=ele;
}

 int begin=0;
 int last=n-1;
  int mid=(begin+last)/2;
while(begin<=last)
{
	if(a[mid]<k)
	   begin=mid+1;
        else if(a[mid]==k)
           {cout<<1<<"\n"; break;}
        else  last=mid-1;
        mid=(begin+last)/2;
}
if(begin>last)
 cout<<-1<<"\n";

}
return 0;
}
