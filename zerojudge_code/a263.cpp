#include<bits/stdc++.h>
//test data ¹L¤£¤F 
using namespace std;
int main(){
	int md[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y1, y2, m1, m2, d1, d2;
	while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
		int lunar=0;
		if(y1>y2){
			for(int i=y2; i<=y1; i++){
				if(((i%4==0 && i%100!=0)||i%400==0)&&i%4000!=0){
					if(i==0){
						continue;
					}
					lunar++;
				}
			}
			if((m2<=2&&m1<=2)||(m2>2&&m1>2)){
				lunar--;
			}else if(m2>2&&m1<=2){
				lunar-=2;
			}
		}else{
			for(int i=y1; i<=y2; i++){
				if(((i%4==0 && i%100!=0)||i%400==0)&&i%4000!=0){
					if(i==0){
						continue;
					}
					lunar++;
				}
			}
			if((m1<=2&&m2<=2)||(m1>2&&m2>2)){
				lunar--;
			}else if(m1>2&&m2<=2){
				lunar-=2;
			}
		}
		int totalday1=0, totalday2=0;
		totalday1=(y1-1)*365;
		for(int i=1; i<m1; i++){
			totalday1+=md[i];
		}
		totalday1+=d1;
		if(m1==2&&d1==29){
			totalday1--;
		}
		totalday2=(y2-1)*365;
		for(int i=1; i<m2; i++){
			totalday2+=md[i];
		}
		totalday2+=d2;
		if(m2==2&&d2==29){
			totalday2--;
		}
		if(y1>y2){
			totalday1+=lunar;
		}else{
			totalday2+=lunar;
		}
		int temp=0;
		temp=totalday1-totalday2;
		if(temp>0){
			cout << temp << endl;
		}else{
			cout << -temp << endl; 
		}
	}
	return 0;
}
