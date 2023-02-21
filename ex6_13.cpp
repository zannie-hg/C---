#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
 
int main()
{
    int num1,num2;
 
    cout<<"Nhap so thu nhat: ";
    cin>>num1;
    cout<<"Nhap so thu hai: ";
    cin>>num2;
   
    cout<<"__Truoc khi hoan doi"<<"\nSo thu nhat = " <<num1<<"\nSo thu hai = "<<num2;
 
    swap(&num1,&num2);
 
    cout<<"\n__Sau khi doi: \n"<<"So thu nhat = " <<num1<<"\nSo thu hai = "<<num2;
 
}