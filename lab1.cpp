#include<iostream>
using namespace std;
int main(){
cout<<"enter the number\n";
int n;
cin>>n;
int b=0,e=(n/2),sqrt=0,m;
while(b<=e){
m=(b+e)/2;
if(m*m==n) {
sqrt=m;
break;
}
else if(m*m<n){
b=m+1;
sqrt=m;
}

else
 e=m-1;

}
cout<<"The square root of "<<n<<" is "<<sqrt<<"\n";
return 0;
}
