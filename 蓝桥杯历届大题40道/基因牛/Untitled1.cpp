#include "iostream"
using namespace std;
int main(){
	int i,n,a[100];
	cin>>n;
	a[1]=1;
	a[2]=1;
	for(i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n];
	return 0;
}
