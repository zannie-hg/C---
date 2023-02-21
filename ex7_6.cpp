#include<iostream>
using namespace std;
int main(){
	int n,A[n];
	double S1=0;
	double dem1=0, dem2=0;
	double S2=0;
	cout<<"Nhap so phan tu cua mang: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap A["<<i<<"]= ";
		cin>>A[i];
		}
	for(int i=0;i<n;i++){
	if(A[i]%2==0){
		S1+=A[i];
		dem1+=1;}
	if(A[i]%2 != 0){
		S2+=A[i];
		dem2+=1;}}
	cout<<"Trung binh cong cac so(gia tri) chan cua mang: "<<S1/dem1;
    cout<<"\nTrung binh cong cac so(gia tri) le cua mang: "<<S2/dem2;
}