#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int Circle(int &R){
	double S,pi=3.14;
	S=pow(R,2)*pi;
	cout<<"Area of Circle is: "<<S;
	return S;
}
int main(){
	int R;
	cout<<"Enter radius: "<<endl;
	cin>>R;
	Circle(R);
	return 0;
}
