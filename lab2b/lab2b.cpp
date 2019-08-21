#include<iostream>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
 freopen( "lab2btest.txt", "r" ,stdin);
#endif
int t;
cin>>t;
for(int l=0;l<t;l++){
int n;
cin>>n;
int a[n],k;
for(int i=0;i<n;i++)
 cin>>a[i];
cin>>k;

for(int i=0;i<k;i++)
{
 for(int j=i;j<n-i-1;j++)
 { 
   if(a[j]>a[j+1])
   {
    int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp; 
   }
 }
 
}
for(int i=0;i<k;i++){
cout<<a[n-1-i]<<"\t";
}
cout<<"\n";

}

}
