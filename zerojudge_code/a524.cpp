#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if(n==1){
			string s="1";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==2){
			string s="12";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==3){
			string s="123";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==4){
			string s="1234";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==5){
			string s="12345";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==6){
			string s="123456";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else if(n==7){
			string s="1234567";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}else{
			string s="12345678";
    		sort(s.begin(), s.end(), greater<char>());
   			do {
        		cout << s << endl;
    		}while(prev_permutation(s.begin(), s.end()));
		}
	}
	return 0;
}
