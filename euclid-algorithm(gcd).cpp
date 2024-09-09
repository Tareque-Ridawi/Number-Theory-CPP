#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(!b) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans=gcd(a,b);
		cout<<ans;
	}
}