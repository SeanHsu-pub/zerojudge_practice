#include<bits/stdc++.h>
using namespace std;
int main(){ 
	char ch;
	int a=0, b=0, no=0;
	while(cin >> ch){
		b=a;
		if((int)ch>=65 && (int)ch<=90){
			a=(int)ch;
		}
		
		if(a!=0&&b!=0){
			if(no==6){
				no=0;
				cout << endl;
				continue;
			}
			if(a>b){
				cout << a-b;
				no++;
			}else{
				cout << b-a;
				no++;
			}
		}
	}
	return 0;
}
