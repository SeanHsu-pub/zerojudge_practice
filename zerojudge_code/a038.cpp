#include<bits/stdc++.h>
using namespace std;
int main(void){
	int b=0, c=0;
	cin >> b;
	while(true){
		if(b==0){
			break;
		}
		int temp=0;
		temp=b%10;
		b/=10;
		c*=10;
		c+=temp;
	}
	cout << c;
	return 0;
}
