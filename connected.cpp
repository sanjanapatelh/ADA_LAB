#include<iostream>
#include<vector>
using namespace std;

void dfs(int v ,int visited[],int n,vector<vector<int>> a){
  cout<<v;
  visited[v] = 1;
  for (int i=0;i<n;i++)
  {
    if(a[v][i]==1 && visited[i]==0)
      dfs(i,visited,n,a);
  }
}

int main()
{
  cout<<"enter the number of nodes\n";
  int n;
  cin>>n;
  cout<<"enter the elments\n";
  vector<vector<int>> a;
  for(int i=0;i<n;i++){
    vector<int> temp;
    for(int j=0;j<n;j++){

      int ele;
      cin>>ele;
      temp.push_back(ele);
    }
    a.push_back(temp);
  }
  int visited[n];
  for(int i=0;i<n;i++)
    visited[i]=0;
  for(int i=0;i<n;i++){
    if(visited[i] == 0)
    {  dfs(i,visited,n,a);
       cout<<"\n";

    }
  }

}
