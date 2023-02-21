#include<iostream>
using namespace std;
void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}
void Xoa(int a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--; 
}
void Xoa_Phan_Tu_Trung(int a[], int &n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--; 
			}
		}
	}
}
int main()
{

	int a[100]; 
	int n; 
	cout << "\nNhap so luong phan tu mang: ";
	cin >> n;
	cout << "___NHAP MANG___\n";
	Nhap_Mang(a, n);
	cout << "\___XUAT MANG___\n";
	Xuat_Mang(a, n);
	Xoa_Phan_Tu_Trung(a, n);
	cout << "___MANG SAU KHI XOA PHAN TU TRUNG___";
	Xuat_Mang(a, n);
	return 0;
}
