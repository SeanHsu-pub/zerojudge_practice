#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main(void){
	string aa;
	vector<char> a;
	vector<char> b;
	while(cin >> aa){
		for(int i=0; i<aa.length(); i++){
			if(((int)aa[i]>=97&&(int)aa[i]<=122)){
				a.push_back(aa[i]);
			}else if(((int)aa[i]>=65 && (int)aa[i]<=90)){
				a.push_back((char)(aa[i]+32));
			}
		}
		
		for(vector<char>::reverse_iterator rit=a.rbegin(); rit!=a.rend(); ++rit){
			b.push_back(*rit);
		}
		bool is=true;
		for(int i=0; i<a.size(); i++){
			if(a[i]!=b[i]){
				is=false;
				break;
			}
		}
		if(is){
			cout << "yes !" << endl; 
		}else{
			cout << "no..." << endl;
		}
	}
	return 0;
}
