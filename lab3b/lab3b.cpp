#include<iostream>
using namespace std;
int count=0;
int partion(int[],int low,int high);

void quickSort(int a[],int low,int high){
  int pivot_pos ;
  if(low<high){
    pivot_pos=partion(a,low,high);
    quickSort(a,low,pivot_pos-1);
    quickSort(a,pivot_pos+1,high);
  }
}

int partion(int a[],int low,int high){
  int pivot = a[low],i=low+1,j=high;
  while(1){
    count++;
    while(a[i]<=pivot && i<=high) i++;
    while(a[j]>pivot && j>=low) j--;
    if(i<j){
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;

    }
    else{
      a[low]=a[j];
      a[j]=pivot;
      return j;
    }
  }
}


int main(){
#ifndef ONLINE_JUDGE
 freopen( "lab3test.txt", "r" ,stdin);
#endif
int t;
cin>>t;

for (int l=0;l<t;l++)
{
int n;
cin>>n;
//cout<<n;
int a[n];
for(int j=0;j<n;j++)
	cin>>a[j];
quickSort(a,0,n-1);
for(int i=0;i<n;i++)
 cout<<a[i]<<"\t";
cout<<"\n";
cout<<"NO of comparision:"<<count<<"\n";


}


}
