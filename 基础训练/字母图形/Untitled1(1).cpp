/*方法一：不难看出每行数据都是由都是有两部分构成的，前面部分是降序，后面部分是升序。*/
/*#include<iostream>  
using namespace std;  
int main()  
{  
    int n;  //输出的行数  
    int m;  //输出的列数  
    cin>>n>>m;  
    for(int i=0;i<n;i++)  
    {  
        int j=0;  
        for(char a='A'+i;a>'A'&&j<m;a--)  
        {  
            cout<<a;  
            j++;   
        }//输出前面部分  
        for(char a='A';a<='Z'&&j<m;a++)  
        {  
            cout<<a;  
            j++;  
        }   
        cout<<endl;  
    }   
    return 0;  
}  */
/*---------------------------------------------------------------------------------------------------*/
/*
方法二：仔细分析发现，字母A出现的位置是第一行的第一个，第二行的第二个，第三行的第三个……；
字母B出现的位置是第一行的第二个，第二行的第一个，第三行的第二个，第四行的第三个……；
字母C的位置是第一行的第三个，第二行的第四个，第三行的第一个和第五个，第四行的第二个和第六个……
每个位置的字母是|行数—列数|+'A'
*/
/*
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
*/
#include<iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
    int n;      //n为行                                                
    int m;      //m为列   
    cin>>n>>m;  
    char a='A'; //作为输出基数   
    for(int i=0;i<n;i++)       //n
    {  
        for(int j=0;j<m;j++)     //m
        {  
            cout<<char(a+abs(i-j));  
        }   
        cout<<endl;  
    }   
    return 0;  
}   
/*-------------------------------------------------------------------------------------------------------*/

/*自己的代码  但是不符合题目要求 例如输入  10 7   在7 7 后面就开始出错  因为按题目要求8 7
应该输出HGFEDCB  而不是ABCDEFG      （只得了70分)  */   


/*#include "iostream"
#include "string"
using namespace std;
int main(){
	int n,m,i,j,z,zz;
	cin>>n>>m;
	string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if(n<=m){
	for(i=0,j=0;i<n;i++,j++){                //n行               
	   for(z=j;z>0;z--)
	      cout<<s[z];
	      for(zz=0;zz<m-j;zz++)
	      cout<<s[zz];
	    cout<<endl;
	}
}

  else{
  	int a=n/m,b=n%m,num;
  	for(num=0;num<a;num++)
    	for(i=0,j=0;i<m;i++,j++){                //n行               
	  		 for(z=j;z>0;z--)
	     		 cout<<s[z];
	      	for(zz=0;zz<m-j;zz++)
	      		cout<<s[zz];
	    cout<<endl;
	}
	for(i=0,j=0;i<b;i++,j++){                //n行               
	   for(z=j;z>0;z--)
	      cout<<s[z];
	      for(zz=0;zz<m-j;zz++)
	      cout<<s[zz];
	    cout<<endl;
	}
}	   
	return 0;
}*/
