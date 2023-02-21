#include<iostream>
using namespace std;
int main(){
	int n,A[n];
	int max,min;
	cout<<"Nhap so phan tu cua mang: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap A["<<i<<"]= ";
		cin>>A[i];
		}
	for(int i=0;i<n;i++){
	if(A[i]>max){
	   max=A[i];}
	if(A[i]<min){
	   min=A[i];}}
	double S=(double)(max+min)/2;
	cout<<"__Gia tri trung binh cua phan tu lon nhat va nho nhat la: "<<S;
	return 0;
}