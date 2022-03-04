#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	//cout << a << " " << b << endl;
	bool is=true;
	for(int i=a; i<=b; i++){
		//cout << "i = " << i << endl;
		int temp0=i;
		//cout << "temp0 = " << temp0 << endl;
		int length=0, total=0;
		while(temp0){
			temp0/=10;
			length++;
		}
		//cout << "length = " << length << endl; 
		int temp1=i, t;
		while(temp1){
			int n=temp1%10;
			int t=1;
			for(int j=0; j<length; j++){
				t*=n;
			}
			total+=t;
			temp1/=10;
		}
		//cout << "total = " << total << endl;
		if(total==i){
			cout << i << " ";
			//system("pause");
			is=false;
		}
		
	}
	if(is){
		cout << "none";
	}
	return 0;
}
