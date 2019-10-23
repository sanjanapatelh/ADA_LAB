#include<bits/stdc++.h>
using namespace std;

bool max_heap(int a[],int n){
  for(int i=1;i<=(n/2);i++){
    if((2*i+1)>n)
    {
      cout<<"\n";
      if(a[i]<a[2*i])
        return false;
    }
     else
     {
      cout <<" a[2*i+1]:"<<a[2*i+1]<<"\n";
       if(a[i]<min(a[2*i],a[2*i+1]))
         return false;
     }
 }
  return true;
}

int main(){
  cout<<"enter the siz of array\n";
  int n;
  cin>>n;
  cout<<"enter the aray\n";
  int a[n+1];
  for(int i=1;i<=n;i++)
    cin>>a[i];
  if(max_heap(a,n))
    cout<<"Given is a max heap\n";
  else
    cout<<"not a max heap \n";
  return 0;
}
