#include <iostream>
using namespace std;
int main(){
	int A[999];
    int n;
    do{
        cout << "\nNhap so phan tu cua mang: ";
        cin >> n;
    }while(n < 1);
    int a[n];
    for(int i = 0; i < n;i++){
        do{
            cout << "\nNhap a[" << i << "] = ";
            cin >> a[i];
        }while(a[i] < 0);}
    for(int i = 0;i < 999; i++) A[i] = 0;
    for(int i = 0; i < n;i++){
        A[a[i]]++;
    }
    for(int i = 0;i < 999; i++){
        if(A[i] >= 2){
            cout<<i<<" ";
        }
    }
}