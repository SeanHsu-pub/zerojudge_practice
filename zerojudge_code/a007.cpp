#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <math.h>
#define endl "\n"
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		
		int temp=sqrt(n);
		temp++;
		bool is=false;
		if(n!=2&&n%2==0){
			is=true; 
		}else if(n!=3&&n%3==0){
			is=true; 
		}else if(n!=5&&n%5==0){
			is=true; 
		}else if(n!=7&&n%7==0){
			is=true; 
		}else{
			for(int i=11; i<=temp; i+=6){
				if(n%i == 0){
					is=true;
					break;
				}
			}
		}
		
		if(is){
			cout << "非質數" << endl; 
		}else{
			cout << "質數" << endl; 
		}
	}
	return 0;
}
