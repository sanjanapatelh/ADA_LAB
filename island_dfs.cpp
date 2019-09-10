#include<bits/stdc++.h>
using namespace std;
#define row 5
#define col 5
int issafe(int M[][col],int r,int c,bool visited[][col]){
return ((r>=0&&r<row)&&(c>=0&&c<col)&&(M[r][c]&&!visited[r][c]));
}
void dfs(int M[][col],int r,int c,bool visited[][col]){
static int rownbr[]={-1,-1,-1,0,0,+1,+1,+1};
static int colnbr[]={-1,0,+1,-1,+1,-1,0,+1};
visited[r][c]=true;
for(int i=0;i<8;i++){
if(issafe(M,r+rownbr[i],c+colnbr[i],visited)){
dfs(M,r+rownbr[i],c+colnbr[i],visited);
}
}
}
int countislands(int M[][col]){
int count=0;
bool visited[row][col]; 
    memset(visited, 0, sizeof(visited)); 
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
if(M[i][j]&&!visited[i][j]){
dfs(M,i,j,visited);
count++;
}
}
}
return count;
}
int main() 
{ 
    int M[][col] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
  
    cout << "Number of islands is: " << countislands(M); 
  
    return 0; 
}
