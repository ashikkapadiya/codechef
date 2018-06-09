#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin<<t;
	while(t!=0){
		long long int n=0,m=0,a=0;
		int r=0;
		scanf("%lld %lld",&n,&m);
		if(n%2==0&&m%2==0){
			cout>>"EVEN";
		}
		if(n%2!=0&&m%2==0){
			cout>>"ODD";
		}
		if(m%2!=0){
			a=m/n;
			r=n-(m*a);
			if(r%2==0){
				cout>>"EVEN";
			}
			else{
				cout>>"ODD";
			}
		}
		t--;
	}
	return 0;
}
