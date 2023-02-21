#include<iostream>
using namespace std;
int Primorial(int n){
	int kt=0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			kt=1;
			break;	
			}
		}
		return kt;
	}
int main(){
	int n,dem,S=1;
	cout<<"Enter a positive integer n(n>1): "<<endl;
	cin>>n;
	for(int i=2;;i++){
		if(Primorial(i)==0){
			S=S*i;
			 dem=dem+1;
			}
			if(dem==n)
			break;
			
		}
		cout<<"Primorial ("<<n<<")"<<" returns "<<S;
	}