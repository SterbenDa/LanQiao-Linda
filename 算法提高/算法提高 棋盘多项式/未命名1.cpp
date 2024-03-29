/*
思路：枚举每个格子，放或者不放 到终点几个就累加 
*/
#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;
const int N=10;
int map[N][N];    //0洞 1可以放 2放了 
int re[N*N];
int len;  //结果数的长度 
int n;
inline bool check(int x,int y){
	int i;
	for(i=y-1;i>=0;i--) {   //左横 
	      if(map[x][i]==2)      //遇到车 
	       return false;
	    if(map[x][i]==0)       //遇到洞 不会攻击到别人 
	      break;
	}
	
	for(i=y+1;i<n;i++) {   //右横 
	       if(map[x][i]==2)      //遇到车 
	       return false;
	    if(map[x][i]==0)       //遇到洞 不会攻击到别人 
	      break;
	}
	 
	   	   
	for(i=x-1;i>=0;i--)  {        //左竖 	
	   if(map[i][y]==2)
	   return false;
	   
	   if(map[i][y]==0)
	   break;
	}    
	   
	   for(i=x+1;i<n;i++)  {        //右竖 	
	   if(map[i][y]==2)
	   return false;
	   
	   if(map[i][y]==0)
	      break;
	}    
	
	   return true;
}
void dfs(int now,int sum){
	if(now>=n*n){
		re[sum]++; 
		return;
	}
	int x=now/n;
	int y=now%n;
	
	if(map[x][y]==1){
		if(check(x,y)){
			map[x][y]=2;
			dfs(now+1,sum+1);
			map[x][y]=1;
		}	
	}	
	dfs(now+1,sum);
}
int main(){    
    int i,j;
    while(cin>>n){
    	for(i=0;i<n;i++)
    	  for(j=0;j<n;j++){
    	  	cin>>map[i][j];
		  }
		  
		  memset(re,0,sizeof(re)); 
	
			dfs(0,0); 
		
		
		for(i=1;i<n*n;i++){
			if(re[i]!=0){
				cout<<re[i]<<endl;
			} 
		    else 
			    break; 
		}
	}
	return 0;
}


