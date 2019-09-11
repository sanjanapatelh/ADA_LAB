#include<bits/stdc++.h>
using namespace std;
#define N 9
#define SQN 3
#define UN 0

bool FindUnassignedLocation(vector<vector<int>> grid,int &row,int &col){
  for(row=0;row<N;row++){
    for(col=0;col<N;col++)
    {
      if(grid[row][col]==UN)
        return true;
    }
  }
  return false;
}
bool UsedInRow(vector<vector<int>> grid,int row,int num){
  for(int col=0;col<N;col++){
    if(grid[row][col]==num)
      return true;
  }
  return false;
}
bool UsedInCol(vector<vector<int>> grid,int col,int num){
  for(int row=0;row<N;row++){
    if(grid[row][col]==num)
      return true;
  }
  return false;
}
bool UsedInBox(vector<vector<int>> grid,int boxStartRow,int boxStartCol,int num){
  for(int row=0;row<SQN;row++){
    for(int col=0;col<SQN;col++){
      if(grid[row+boxStartRow][col+boxStartCol]==num)
        return true;
    }
  }
  return false;
}

bool isSafe(vector<vector<int>> grid,int row,int col,int num){
  return !UsedInRow(grid,row,num) &&
  !UsedInCol(grid,col,num) &&
  !UsedInBox(grid,(row-(row%SQN)),(col-(col%SQN)),num) &&
  grid[row][col]==UN;
}

bool SolveSudoku(vector<vector<int>>& grid){
  int row,col;
  if(!FindUnassignedLocation(grid,row,col))
    return true;
  for(int num=1;num<=N;num++){
    if(isSafe(grid,row,col,num)){
      grid[row][col]=num;
      if(SolveSudoku(grid))
        return true;
      grid[row][col]=UN;
    }
  }
  return false;
}




int main(){
  int t;
  cin>>t;
  for(int l=0;l<t;l++){
    vector<vector<int>> grid;
    for(int i=0;i<N;i++){
      vector<int> temp;
      for(int j=0;j<N;j++){
        int ele;
        cin>>ele;
        temp.push_back(ele);
      }
      grid.push_back(temp);
    }
    if(SolveSudoku(grid)){
      for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
          cout<<grid[i][j]<<"\t";
        cout<<"\n";
      }
    }
  }
  return 0;
}
