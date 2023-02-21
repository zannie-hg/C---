#include<iostream>
using namespace std;
int CandyParcel(int a,int b,int c){
	int a1 = a*2;
	int b1 = b*5;
	if(a1+b1 == c){
		cout<<"___CandyParcel("<<a<<" ,"<<b<<" ,"<<c<<")"<<" returns "<<a;
	}else{
		cout<<"___CandyParcel("<<a<<" ,"<<b<<" ,"<<c<<")"<<" returns -1";
	}
}
int main(){
	int a,b,c;
	cout<<"Enter the number of small candies available"<<endl;
	cin>>a;
	cout<<"Enter the large number of candies available"<<endl;
	cin>>b;
	cout<<"Enter the desired quantity of the final parcel order."<<endl;
	cin>>c;
	CandyParcel(a,b,c);
	return 0;
	
}