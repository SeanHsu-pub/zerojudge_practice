#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<sstream>
#include<stack>
using namespace std;
int add(int a, int b){
	return a+b;
}
int subtract(int a, int b){
	return a-b;
}
int multiple(int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}
int mod(int a, int b){
	return a%b;
}
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
			//cout << t << endl;
			temp.push(t);
		}
		while(temp.empty()!=1){
			string tt=temp.top();
			temp.pop();
			if(tt=="+"){
				//cout << "++++++++++" << endl; 
				int a, b, ans;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				a=num.top();
				num.pop();
				//cout << "pop " << a << " from num." << endl;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				b=num.top();
				num.pop();
				//cout << "pop " << b << " from num." << endl;
				ans=add(a, b);
				num.push(ans);
				//cout << "push " << ans << "into num." << endl;
			}else if(tt=="-"){
				//cout << "----------" << endl;
				int a, b, ans;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				a=num.top();
				num.pop();
				//cout << "pop " << a << " from num." << endl;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				b=num.top();
				num.pop();
				//cout << "pop " << b << " from num." << endl;
				ans=subtract(a, b);
				num.push(ans);
				//cout << "push " << ans << "into num." << endl;
			}else if(tt=="*"){
				//cout << "**********" << endl;
				int a, b, ans;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				a=num.top();
				num.pop();
				//cout << "pop " << a << " from num." << endl;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				b=num.top();
				num.pop();
				//cout << "pop " << b << " from num." << endl;
				ans=multiple(a, b);
				num.push(ans);
				//cout << "push " << ans << "into num." << endl;
			}else if(tt=="/"){
				//cout << "//////////" << endl;
				int a, b, ans;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				a=num.top();
				num.pop();
				//cout << "pop " << a << " from num." << endl;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				b=num.top();
				num.pop();
				//cout << "pop " << b << " from num." << endl;
				ans=divide(a, b);
				num.push(ans);
				//cout << "push " << ans << "into num." << endl;
			}else if(tt=="%"){
				//cout << "%%%%%%%%%%" << endl;
				int a, b, ans;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				a=num.top();
				num.pop();
				//cout << "pop " << a << " from num." << endl;
				if(num.empty()){
					//cout << "illegal" << endl;
					break;
				}
				b=num.top();
				num.pop();
				//cout << "pop " << b << " from num." << endl;
				ans=mod(a, b);
				num.push(ans);
				//cout << "push " << ans << "into num." << endl;
			}else{
				//num.push(stoi(tt));
				num.push(atoi(tt.c_str()));
				//cout << "push " << tt << " into num." << endl;
			}
			
		}
		
		if(num.size()!=1){
			cout << "illegal" << endl;
			continue;
		}else{
			cout << num.top() << endl;
		}
//		if(nn>=48 && nn<=57){
//			number.push_back(numbervalue(nn));
//		}else{
//			
//		}
	}
	return 0;
}
