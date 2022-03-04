#include<bits/stdc++.h>
using namespace std;
int main(void){
	string a;
	map<int, int> ta, tb;
	while(cin >> a){
		int special;
		if(a=="0:0"){
			break;
		}
		for(int i=0; i<a.length(); i++){
			if(a[i]==':'){
				special=i;
				break;
			}
		}
		int idx=0, num=0;
		for(int i=0; i<special; i++){
			idx+=(int)(a[i]-48);
			idx*=10;
		}
		idx/=10;
		for(int i=special+1; i<a.length(); i++){
			num+=(int)(a[i]-48);
			num*=10;
		}
		num/=10;
		ta[idx]=num;
	}
	for(map<int, int>::iterator it=ta.begin(); it!=ta.end(); it++){
		//cout << setw(10) << it->first << setw(10) << it->second << endl;
	}
	while(cin >> a){
		int special;
		if(a=="0:0"){
			break;
		}
		for(int i=0; i<a.length(); i++){
			if(a[i]==':'){
				special=i;
				break;
			}
		}
		int idx=0, num=0;
		for(int i=0; i<special; i++){
			idx+=(int)(a[i]-48);
			idx*=10;
		}
		idx/=10;
		for(int i=special+1; i<a.length(); i++){
			num+=(int)(a[i]-48);
			num*=10;
		}
		num/=10;
		tb[idx]=num;
	}
	for(map<int, int>::iterator it=tb.begin(); it!=tb.end(); it++){
		//cout << setw(10) << it->first << setw(10) << it->second << endl;
	}
	int total=0;
	for(map<int, int>::iterator ita=ta.begin(); ita!=ta.end(); ita++){
		for(map<int, int>::iterator itb=tb.begin(); itb!=tb.end(); itb++){
			if(ita->first == itb->first){
				total+=(itb->second * ita->second);
			}
		}
	}
	cout << total;
	return 0;
}
