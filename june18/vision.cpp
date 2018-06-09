#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t!=0){
		int p[3],q[3],d[3],r[4];
		for (i=0;i<13;i++){
			if(i<3){
				cin>>p[i];
			}
			else if(i<6){
				cin>>q[i-3];
			}
			else if(i<9){
				cin>>d[i-6];				
			}
			else{
				cin>>r[i-9];
			}
		}
		
		t--;
	}
}