#include "iostream"
using namespace std;
int main()
{
  char c;
  cin>>c;
  int a,b;
  cin>>a>>b;
  switch(c){
  	case '+':{
  		cout<<a+b;
  		break;
  	}
  		case '-':{
  		cout<<a-b;
  		break;
  	}
  		case '*':{
  		cout<<a*b;
  		break;
  	}
  		case '/':{
  		cout<<a/b;
  		break;
  	}
  } 
 return 0;
}

