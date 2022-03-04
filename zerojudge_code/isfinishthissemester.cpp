#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	string in;
	map<string, bool> a;
	a["Basic_Programming"]=false;
	a["Intro._to_Computer_Networks"]=false;
	a["Probability"]=false;
	a["Biochemistry_(I)"]=false;
	a["Numerical_Analysis"]=false;
	a["Differential_Equation"]=false;
	a["Introduction_to_Nanostructured_Materials"]=false;
	a["Introduction_to_Nanotechnology"]=false;
	a["Human_Information_Behavior"]=false;
	a["Physical_Education"]=false;
	while(cin >> in){
		a[in]=true;
		system("cls");
		for(map<string, bool>::iterator it=a.begin(); it!=a.end(); it++){
			cout << setw(40) << it->first << ":";
			if(it->second){
				cout << " yes" << endl;
			}else{
				cout << "  no" << endl;
			}
		}
		bool temp=true;
		for(map<string, bool>::iterator it=a.begin(); it!=a.end(); it++){
			if(it->second == false){
				temp=false;
				break;
			}
		}
		if(temp){
			break;
		}
	}
	return 0;
} 
