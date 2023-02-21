#include<iostream>
#include<cmath>
using namespace std;
int daoham(int x,int y){
	double S=0;
     S=y*pow(x,y-1);
	cout<<"Dao ham cua f(x)= "<<x<<"^"<<y<<" la: "<<S;
	return S;}
int main(){
	int x,y;
	cout<<"Nhap x: "<<endl;
	cin>>x;
	cout<<"Nhap y: "<<endl;
	cin>>y;
	daoham(x,y);
	return 0;
}
	
