#include<bits/stdc++.h>
using namespace std;
int main(void){
	char a[10]={};
	for(int i=0; i<10; i++){
		cin >> a[i];
	}
	int t=0;
	if(a[0]=='A'){
		t+=1;
		t+=(0*9);
	}else if(a[0]=='B'){
		t+=1;
		t+=(1*9);
	}else if(a[0]=='C'){
		t+=1;
		t+=(2*9);
	}else if(a[0]=='D'){
		t+=1;
		t+=(3*9);
	}else if(a[0]=='E'){
		t+=1;
		t+=(4*9);
	}else if(a[0]=='F'){
		t+=1;
		t+=(5*9);
	}else if(a[0]=='G'){
		t+=1;
		t+=(6*9);
	}else if(a[0]=='H'){
		t+=1;
		t+=(7*9);
	}else if(a[0]=='I'){
		t+=3;
		t+=(4*9);
	}else if(a[0]=='J'){
		t+=1;
		t+=(8*9);
	}else if(a[0]=='K'){
		t+=1;
		t+=(9*9);
	}else if(a[0]=='L'){
		t+=2;
		t+=(0*9);
	}else if(a[0]=='M'){
		t+=2;
		t+=(1*9);
	}else if(a[0]=='N'){
		t+=2;
		t+=(2*9);
	}else if(a[0]=='O'){
		t+=3;
		t+=(5*9);
	}else if(a[0]=='P'){
		t+=2;
		t+=(3*9);
	}else if(a[0]=='Q'){
		t+=2;
		t+=(4*9);
	}else if(a[0]=='R'){
		t+=2;
		t+=(5*9);
	}else if(a[0]=='S'){
		t+=2;
		t+=(6*9);
	}else if(a[0]=='T'){
		t+=2;
		t+=(7*9);
	}else if(a[0]=='U'){
		t+=2;
		t+=(8*9);
	}else if(a[0]=='V'){
		t+=2;
		t+=(9*9);
	}else if(a[0]=='W'){
		t+=3;
		t+=(2*9);
	}else if(a[0]=='X'){
		t+=3;
		t+=(0*9);
	}else if(a[0]=='Y'){
		t+=3;
		t+=(1*9);
	}else if(a[0]=='Z'){
		t+=3;
		t+=(3*9);
	}
	for(int i=1; i<9; i++){
		t+=(((int)a[i]-48)*(9-i));
	}
	t+=(int)a[9]-48;
	if(t%10){
		cout << "fake" << endl;
	}else{
		cout << "real" << endl;
	}
	return 0;
}
