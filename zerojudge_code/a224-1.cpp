#include<iostream>
#include<map>
#include<iterator>

using namespace std;
int main(void){
	string aa;
	//vector<char> a;
	//vector<char> b;
	
	while(cin >> aa){
		map<int, int> a;
		for(int i=0; i<aa.length(); i++){
			if(((int)aa[i]>=97 && (int)aa[i]<=122)){
				a[(int)aa[i]]+=1;
			}else if(((int)aa[i]>=65 && (int)aa[i]<=90)){
				a[(int)(aa[i]+32)]+=1;
			}
		}
		/*
		for(vector<char>::reverse_iterator rit=a.rbegin(); rit!=a.rend(); ++rit){
			b.push_back(*rit);
		}
		*/
		//bool is=true;
		/*
		for(int i=0; i<a.size(); i++){
			if(a[i]!=b[i]){
				is=false;
				break;
			}
		}
		*/
		int odd=0;
		for(map<int, int>::iterator it=a.begin(); it!=a.end(); it++){
			if(it->second%2){
				odd++;
			}
		}
		if(odd<=1){
			cout << "yes !" << endl; 
		}else{
			cout << "no..." << endl;
		}
	}
	return 0;
}
