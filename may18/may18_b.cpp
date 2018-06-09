#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q=0;
	cin>>q;
	while(q!=0){
		long int n=0,t=0,i,k;
		long long int sum=0;
		cin>>n>>t;
		for(i=1;i<=n;i++){
			long long int su=1;
			for(k=1;k<=t;k++){
				su=su*(i+k);
			}
			sum=sum+su;
		}
		sum=sum%(1000000007);
		printf("%lld\n",sum);
		q--;
	}
	return 0;
}