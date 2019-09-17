#include<bits/stdc++.h>
using namespace std;
#define n 3
int visited[n]={0},adj[n][n];
queue<int>q;
void bfs(int so){
	visited[so]=1;
	q.push(so);
cout<<q.front();
	while(!q.empty()){
	q.pop();
	for(int i=0;i<n;i++){
		if(adj[so][i]==1&&visited[i]==0){
			q.push(i);
			visited[i]=1;
cout<<q.front();
			q.pop();
		}
	}
   }
}
int main(){
int s;
cout<<"enter the adjacency matrix:";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin>>adj[i][j];
}
}
cout<<"enter the source vertex";
cin>>s;
bfs(s);
return 0;
}
