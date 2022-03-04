#include<iostream>
#include<stdlib.h>
using namespace std;
int y1, y2, m1, m2, d1, d2;
int nymd[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31};
int lymd[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31};
bool islunar(int);
int sum(int, int, int);
bool islunar(int year){
	if((year%4==0&&year%100!=0)||year%400==0){
		return true;
	}else{
		return false;
	}
}
int sum(int y, int m, int d){
	int totalday=0;
	for(int i=1; i<y; i++){
		if(islunar(i)){
			totalday+=366;
		}else{
			totalday+=365;
		}
	}
	for(int i=1; i<m; i++){
		if(islunar(y)){
			totalday+=lymd[i];
		}else{
			totalday+=nymd[i];
		}
	}
	return totalday+d;
}
int main(){
	while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
		int temp(sum(y1, m1, d1)-sum(y2, m2, d2));
		if(temp>=0){
			cout << temp << endl;
		}else{
			cout << -temp << endl; 
		}
	}
	return 0;
}
