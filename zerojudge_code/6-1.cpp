#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include<math.h>
#include<algorithm>
using namespace std;
int main(void){
	int n=0;
	cin >> n;
	while(n){
		int t=0;
		double tt, longga=0, longgb=0, longg=0;
		cin >> t;
		
		int temp=t;
		vector<double> a;
		while(temp){
			cin >> tt;
			a.push_back(tt);
			temp--;
		}
		sort(a.begin(), a.end());
		for(vector<double>::iterator it=a.begin(); it!=a.end(); it++){
			cout << *it << endl;
		}
		if(t==8){
			double a8[8]={};
			double b8[8]={};
			a8[0]=a[4-1];
			a8[1]=a[6-1];
			a8[2]=a[2-1];
			a8[3]=a[8-1];
			a8[4]=a[1-1];
			a8[5]=a[7-1];
			a8[6]=a[3-1];
			a8[7]=a[5-1];
			
			b8[0]=a[t-1-(4-1)];
			b8[1]=a[t-1-(6-1)];
			b8[2]=a[t-1-(2-1)];
			b8[3]=a[t-1-(8-1)];
			b8[4]=a[t-1-(1-1)];
			b8[5]=a[t-1-(7-1)];
			b8[6]=a[t-1-(3-1)];
			b8[7]=a[t-1-(5-1)];
			
			longga+=a8[0];
			longga+=a8[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a8[i]*a8[i+1]);
				longga+=abc;
			}
			
			longgb+=b8[0];
			longgb+=b8[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b8[i]*b8[i+1]);
				longgb+=abc;
			}
			
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
			
		}else if(t==7){
			double a7[7]={};
			double b7[7]={};
			a7[0]=a[4-1];
			a7[1]=a[5-1];
			a7[2]=a[2-1];
			a7[3]=a[7-1];
			a7[4]=a[1-1];
			a7[5]=a[6-1];
			a7[6]=a[3-1];
			
			b7[0]=a[t-1-(4-1)];
			b7[1]=a[t-1-(5-1)];
			b7[2]=a[t-1-(2-1)];
			b7[3]=a[t-1-(7-1)];
			b7[4]=a[t-1-(1-1)];
			b7[5]=a[t-1-(6-1)];
			b7[6]=a[t-1-(3-1)];
			
			longga+=a7[0];
			longga+=a7[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a7[i]*a7[i+1]);
				longga+=abc;
			}
			
			longgb+=b7[0];
			longgb+=b7[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b7[i]*b7[i+1]);
				longgb+=abc;
			}
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}else if(t==6){
			double a6[6]={};
			double b6[6]={};
			a6[0]=a[4-1];
			a6[1]=a[2-1];
			a6[2]=a[6-1];
			a6[3]=a[1-1];
			a6[4]=a[5-1];
			a6[5]=a[3-1];
			
			b6[0]=a[t-1-(4-1)];
			b6[1]=a[t-1-(2-1)];
			b6[2]=a[t-1-(6-1)];
			b6[3]=a[t-1-(1-1)];
			b6[4]=a[t-1-(5-1)];
			b6[5]=a[t-1-(3-1)];
			
			longga+=a6[0];
			longga+=a6[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a6[i]*a6[i+1]);
				longga+=abc;
			}
			
			longgb+=b6[0];
			longgb+=b6[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b6[i]*b6[i+1]);
				longgb+=abc;
			}
			
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}else if(t==5){
			double a5[5]={};
			double b5[5]={};
			a5[0]=a[3-1];
			a5[1]=a[2-1];
			a5[2]=a[5-1];
			a5[3]=a[1-1];
			a5[4]=a[4-1];
			
			b5[0]=a[t-1-(3-1)];
			b5[1]=a[t-1-(2-1)];
			b5[2]=a[t-1-(5-1)];
			b5[3]=a[t-1-(1-1)];
			b5[4]=a[t-1-(4-1)];
			
			longga+=a5[0];
			longga+=a5[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a5[i]*a5[i+1]);
				longga+=abc;
			}
			
			longgb+=b5[0];
			longgb+=b5[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b5[i]*b5[i+1]);
				longgb+=abc;
			}
			
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}else if(t==4){
			double a4[4]={};
			double b4[4]={};
			a4[0]=a[2-1];
			a4[1]=a[4-1];
			a4[2]=a[1-1];
			a4[3]=a[3-1];
			
			b4[0]=a[t-1-(2-1)];
			b4[1]=a[t-1-(4-1)];
			b4[2]=a[t-1-(1-1)];
			b4[3]=a[t-1-(3-1)];
			
			longga+=a4[0];
			longga+=a4[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a4[i]*a4[i+1]);
				longga+=abc;
			}
			
			longgb+=b4[0];
			longgb+=b4[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b4[i]*b4[i+1]);
				longgb+=abc;
			}
			
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}else if(t==3){
			double a3[3]={};
			double b3[3]={};
			a3[0]=a[2-1];
			a3[1]=a[3-1];
			a3[2]=a[1-1];
			
			b3[0]=a[t-1-(2-1)];
			b3[1]=a[t-1-(3-1)];
			b3[2]=a[t-1-(1-1)];
			
			longga+=a3[0];
			longga+=a3[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a3[i]*a3[i+1]);
				longga+=abc;
			}
			
			longgb+=b3[0];
			longgb+=b3[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*b3[i]*b3[i+1]);
				longgb+=abc;
			}
			
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}else if(t==2){
			double a2[2]={};
			a2[0]=a[1-1];
			a2[1]=a[2-1];
			
			longg+=a2[0];
			longg+=a2[t-1];
			for(int i=0; i<t-1; i++){
				double abc;
				abc=sqrt(4*a2[i]*a2[i+1]);
				longg+=abc;
			}
			if(longga>longgb){
				longg=longgb;
			}else{
				longg=longga;
			}
		}
		/*
		longg+=a[0];
		longg+=a[t-1];
		for(int i=0; i<t-1; i++){
			double abc;
			abc=sqrt(4*a[i]*a[i+1]);
			longg+=abc;
		}
		*/
		printf("%.3f\n", longg);
		a.clear();
		n--;
	}
	return 0;
}
