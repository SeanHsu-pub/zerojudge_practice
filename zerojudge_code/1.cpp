#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<cstdlib>
using namespace std;
int main(void){
	int n=0, cases=0;
	while(cin >> n){
	if(cases){
		puts("");
	}
    cases++;
	map<string, int> data;
	vector<char> words;
	while(true){
		char tt;
		cin.get(tt);
		if(tt<=90 && tt>=65){
			tt+=32;
			words.push_back(tt);
			continue;
		}else if(tt>=97 && tt<=122){
			words.push_back(tt);
			continue;
		}else if(words.size()==0){
			continue;
		}else{
		}
		string input(words.begin(), words.end());
		words.clear();
		data[input]++;
		if(input=="endoftext"){
			break;
		}		
	}
	bool b=true;
	for(map<string, int>::iterator it=data.begin(); it!=data.end(); it++){
		if(it->second == n){
			cout << it->first << endl;
			b=false;
		}
	}
	if(b){
		//cout << "There is no such word." << endl;
		puts("There is no such word.");
	}
	}
	return 0;
} 
