#include<iostream>

using namespace std;
int main()
{
int n,t,k;
#ifndef ONLINE_JUDGE
 freopen( "lab1atest.txt", "r" ,stdin);
#endif

cin>>t;

for(int i=0;i<t;i++)
{
cin>>n;
int a[n],out,in;

for(int j=0;j<n;j++){
int ele;
cin>>ele;
a[j]=ele;
}
cin>>k;
 int begin=0;
 int last=n-1;
 int mid = 0;
while(begin<=last)
{
 mid=(begin+last)/2;
	if(a[mid]<k)
	   begin=mid+1;
        else if(a[mid]==k)
           {
       
       int count=0;
       for(int i=mid;i<n;i++)
       { if(a[i]==k)
         {count++;}
         else 
          { out=i-1;break;}
       }
     for(int i=mid-1;i>=0;i--)
       { if(a[i]==k)
         {count++; }
         else 
          { in=i+1;break;}
       }              
 
       cout<<in<<"\t"<<out<<"\t"<<count<<"\n";
       break;

}
        else  last=mid-1;
}
if(begin>last)
 cout<<"-1 -1 0\n";

}
return 0;
}
