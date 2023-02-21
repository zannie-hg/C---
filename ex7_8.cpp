#include<iostream>
using namespace std;
void nhapmang(int A[], int n)
{
	for(int i=0; i<n; i++){
	cout<<"Nhap A["<<i<<"]= ";
	cin>>A[i];}
}
void xuatmang(int A[], int n)
{
	for(int i=0; i<n; i++){
	cout<<A[i]<<" ";}
}
void chen(int A[], int &n,int vtrch, int socch)
{
	for(int i=n;i>vtrch;i--)
	{
		A[i]=A[i-1];
	}
	A[vtrch] = socch;
    n++;
}
int main(){
	int A[100];
	int n;
	int vtrch,socch;
	cout<<"__Nhap so luong phan tu__"<<endl;
	cin>>n;
	nhapmang(A,n);
	cout<<"__Xuat mang vua nhap__\n";
	xuatmang(A,n);
	cout<<"Nhap vi tri can chen: ";
	cin>>vtrch;
	cout<<"\nNhap so can chen: ";
	cin>>socch;
	chen(A,n,vtrch,socch);
	xuatmang(A,n);
	return 0;
}