#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		if(n==0){
			break;
		}
		int a[6]={};
		a[0]=1;
		a[1]=2;
		a[2]=3;
		a[3]=4;
		a[4]=5;
		a[5]=6;
		while(n){
			n--;
			string b;
			cin >> b;
			if(b=="east"){
				int temp;
				temp=a[3];
				a[3]=a[0];
				a[0]=a[2];
				a[2]=a[5];
				a[5]=temp;
			}else if(b=="south"){
				int temp;
				temp=a[4];
				a[4]=a[0];
				a[0]=a[1];
				a[1]=a[5];
				a[5]=temp;
			}else if(b=="west"){
				int temp;
				temp=a[2];
				a[2]=a[0];
				a[0]=a[3];
				a[3]=a[5];
				a[5]=temp;
			}else if(b=="north"){
				int temp;
				temp=a[1];
				a[1]=a[0];
				a[0]=a[4];
				a[4]=a[5];
				a[5]=temp;
			}
		}
		cout << a[0] << endl;
	}
	return 0;
}
