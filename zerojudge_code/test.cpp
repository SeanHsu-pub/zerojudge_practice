#include<iostream>
#include<string>
#include<stack>
//#include<iterator>
#include<vector>
using namespace std;
int main(void){
	//char a, b;
//	a=65;
//	b=97;
//	if(a<97){
//		a+=32;
//	}
//	cout << a << endl << b << endl;

	/*
	vector<int> aa;
	aa.push_back(1);
	//cout << a[0] << endl;
	aa.push_back(43);
	aa.push_back(321);
	int i=0;
	for(vector<int>::iterator it=aa.begin(); it!=aa.end(); it++){
		cout << *it << endl;
		cout << aa[i] << endl;
		i++;
	}
//	for(vector<int>::iterator itt=aa.begin(); itt!=aa.end(); itt++){
//		aa.erase(itt);
//	}
	
	aa.push_back(123);
	aa.push_back(456);
	aa.push_back(789);
	i=0;
	cout << "<<<<<start" << endl;
	for(vector<int>::iterator it=aa.begin(); it<aa.end(); it++){
		cout << *it << endl;
		cout << aa[i] << endl;
		i++;
	}
	cout << "<<<<<end" << endl;
	aa.clear();
	i=0;
	cout << "5534start" << endl;
	aa.push_back(5534);
	for(vector<int>::iterator it=aa.begin(); it!=aa.end(); it++){
		cout << *it << endl;
		//cout << aa[i] << endl;
		i++;
	}
	cout << "5534end" << endl; 
	cout << aa[0] << endl << aa[1] <<endl << aa[2] << endl;
	*/
	
	//////////////////
	
//	vector<string> aa;
//	string a;
//	while(cin >> a){
//		if(a=="0"){
//			break;
//		}
//		aa.push_back(a);
//	}
//	for(vector<string>::iterator it=aa.begin(); it!=aa.end(); it++){
//		cout << *it << endl;
//	}
	
	
	/////////////////
//
//    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
//    vector<int>::iterator it; 
//  
//    it = myvector.begin(); 
//    myvector.erase(it); 
//  
//    // Printing the Vector 
//    for (auto it = myvector.begin(); it != myvector.end(); ++it) 
//        cout << ' ' << *it;
//	

////////////////////

//	int n, a;
//	
//	cout << scanf("%d", &n);
//	cout << endl << n << endl;

//	stack<int> a;
//	a.push(1);
//	cout << a.top() << endl;
//	cout << a.empty() << endl;
//	a.pop();
//	cout << a.empty() << endl;
//	string n;
//	cin >> n;
//	int nn=stoi(n);
//	cout << nn << endl;
	vector<int> a;
	a.push_back(1);
	a.push_back(1234);
	a.push_back(4325);
	wcout << a[0] << endl << a[1] << endl << a[2] << endl;
	wcout << endl;
	for(vector<int>::iterator it=a.begin(); it!=a.end(); it++){
		wcout << *it << endl;
	}
	for(int i=0; i<3; i++){
		cout << a[i] << endl;
	}
	return 0;
}
