#include<iostream>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
 freopen( "lab2atest.txt", "r" ,stdin);
#endif
int t;
cin>>t;

for (int l=0;l<t;l++)
{
int n;
cin>>n;
int a[n];
for(int j=0;j<n;j++)
	cin>>a[j];
int k;
cin>>k;
int min;
for(int i=0;i<k;i++)
{
min=i;
for(int j=i+1;j<n;j++)
{
 if(a[j]<a[min])
  min=j;
}
int temp;
temp=a[i];
a[i]=a[min];
a[min]=temp;

}
cout<<a[k-1]<<"\n";
}


}
