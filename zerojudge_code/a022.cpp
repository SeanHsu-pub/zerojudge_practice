#include<bits/stdc++.h>
using namespace std;
int main(void){
	char a;
	stack<char> s;
	queue<char> q;
	while(cin >> a){
		q.push(a);
		s.push(a);
	}
	bool is=true;
	int size=q.size();
	for(int i=0; i<size; i++){
		if(q.front()!=s.top()){
			is=false;
			break;
		}
		q.pop();
		s.pop();
	}
	if(is){
		cout << "yes";
	}else{
		cout << "no";
	}
	return 0;
}
