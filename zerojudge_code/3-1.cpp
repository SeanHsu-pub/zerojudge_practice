#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<stack>
using namespace std;
int main(void){
	string n, t;
	while(getline(cin, n)){
		if(n=="."){
			break;
		}
		stack<int> num;
		stack<string> temp;
		stringstream X(n); 
		while(getline(X, t, ' ')){
			temp.push(t);
		}
		while(temp.empty()!=1){
			string tt=temp.top();
			temp.pop();
			if(tt=="+"){
				int a, b, ans;
				if(num.empty()){
					break;
				}
				a=num.top();
				num.pop();
				if(num.empty()){
					break;
				}
				b=num.top();
				num.pop();
				ans=a+b;
				num.push(ans);
			}else if(tt=="-"){
				int a, b, ans;
				if(num.empty()){
					break;
				}
				a=num.top();
				num.pop();
				if(num.empty()){
					break;
				}
				b=num.top();
				num.pop();
				ans=a-b;
				num.push(ans);
			}else if(tt=="*"){
				int a, b, ans;
				if(num.empty()){
					break;
				}
				a=num.top();
				num.pop();
				if(num.empty()){
					break;
				}
				b=num.top();
				num.pop();
				ans=a*b;
				num.push(ans);
			}else if(tt=="/"){
				int a, b, ans;
				if(num.empty()){
					break;
				}
				a=num.top();
				num.pop();
				if(num.empty()){
					break;
				}
				b=num.top();
				num.pop();
				ans=a/b;
				num.push(ans);
			}else if(tt=="%"){
				int a, b, ans;
				if(num.empty()){
					break;
				}
				a=num.top();
				num.pop();
				if(num.empty()){
					break;
				}
				b=num.top();
				num.pop();
				ans=a%b;
				num.push(ans);
			}else{
				num.push(atoi(tt.c_str()));
			}
		}
		if(num.size()!=1){
			cout << "illegal" << endl;
			continue;
		}else{
			cout << num.top() << endl;
		}
	}
	return 0;
}
