#include<iostream>
using namespace std;
void nhap(int a[],int n){
	cout<<"moi nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	cout<<"mang vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int a[100],n;
	cout<<"moi nhap so phan tu: ";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}
