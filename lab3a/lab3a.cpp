#include<iostream>
using namespace std;
void combine(int[],int,int,int);

void mergeSort(int a[],int low,int high)
{
	int mid;
	if(low<high)
        {
	   mid = (low+high)/2;
	   mergeSort(a,low,mid);
	   mergeSort(a,mid+1,high);
	   combine(a,low,mid,high);
        }
}

void combine(int a[],int low,int mid,int high)
{
int   i=low;
int j=mid+1;
int  k=low;
int c[high+1];
  while (i<=mid && j<=high)
  {
    if(a[i]<a[j] )
    {
         c[k] = a[i];
         k++;i++;
    }
    else
    {
         c[k] = a[j];
         k++;j++;
    }
  }

	if(i>mid)
	 {
		 while(j<=high){
			 c[k]=a[j];k++;j++;
		 }
	 }
	 if(j>high)
 	 {
 		 while(i<=mid){
 			 c[k]=a[i];k++;i++;
 		 }
 	 }

	 for(int i=low;i<=high;i++)
	   a[i]=c[i];
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

mergeSort(a,0,n-1);
for(int i=0;i<n;i++)
 cout<<a[i]<<"\t";
cout<<"\n";


}


}
