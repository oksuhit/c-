#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	int cth_num;
	if(a<2){
		cout << "plz enter a>=2 " << endl;
	}
	else if(b>1000){
		cout << " plz enter b<=1000 " << endl;
	}
	else if(c<1 & c>1000){
		cout << "plz enter c in rage 1<= c <=1000" <<endl;
	}
	while(a>=2 && c>0 && c<=1000 && b<=1000){
		for(int i=2; c>0 ; i++){
			if(i % a == 0 || i % b ==0){
				c--;
				cth_num = i;
			}
		}

		int lcm;
		for(int i=1; i<= a*b; ++i){
			if(i % a == 0 && i % b == 0){
				lcm=i;
				break;
			}
		}
		int step;
		if(cth_num % a == 0 && cth_num % b == 0){
			step = lcm;
		}
		else if(cth_num % a == 0){
			step = a;
		}
		else{
			step = b;
		}
		for(int i = cth_num; i>=0; i = i-step){
			cout << i << " ";
		}


	}
}