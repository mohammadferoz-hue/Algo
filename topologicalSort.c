#include<stdio.h>
#include<stdlib.h>
#define Max 100
int graph[Max][Max];
int visited[Max];
int top=-1;
int stack[Max];
int n;
void dfs(int v){
  int visited[v]=1;
  for(int i=0;i<n;i++){
    if (graph[v][i]==1 && !visited[i]){
      dfs(i);
    }
  }
  stack[++top]=v;
}
void topologicalSort(){
  for(int i=0;i<n;i++){
    if(!visited[i]){
      dfs(i);
    }
  }

printf("topological sort :\n");
while(top!=-1){
  printf("%d  ",stack[top--]);
  }
}
int main(){
  printf("enter the number of vertix");
  scanf("%d",&n);
  printf("Enter  matrix adjacency");
  for(int i=0;i<n;i++){
    visited[i]=0;
    for(int j=0;j<n;j++){
      scanf("%d",&graph[i][j]);
    }
  }
topologicalSort();
return 0;
}
  
  
