#include<bits/stdc++.h>
//#include<conio.h>
#include<windows.h>
//#include<limits.h>
using namespace std;
int main(){
	//clock_t  b, e;
	int in;
	bool a[68]={};
	
	while(cin >> in){
		a[in-1]=true;
		system("cls");
		for(int i=1; i<=68; i++){
			cout << setw(3) << i << ":";
			if(a[i-1]){
				cout << " ok";
			}else{
				cout << "   ";
			}
			if(i%17==0){
				cout << endl;
			}
		}
		if(in==68){
			break;
		}
	}
	
	//int k=0;
	/*while(1){
		system("cls");
		int key;
		
		for(int i=1; i<=68; i++){
			cout << setw(3) << i << ":";
			if(a[i-1]){
				cout << " ok";
			}else{
				cout << "   ";
			}
			if(i%17==0){
				cout << endl;
			}
		}
		if(key==68){
			break;
		}
		if(cin >> key){
			//key=_kbhit();
			//key=getint();
			a[key-1]=true;
		}
		//cout << endl << k << endl;
		//k++;
		Sleep(1000);
	}
	*/
	return 0;
} 
