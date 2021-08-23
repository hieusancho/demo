#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int &n){
	cout<<"a)";
	cout<<"nhap so phan tu: ";
	cin>>n;
	for(int i0;i<n;i++){
		cout<<"a["<<i<<"]["<<j<<"]";
		cin>>a[i][j];
	}
}
void xuat(int a[],int n){
	cout<<"b)";
	cout<<"mang vua nhap la: "<<endl;
	for(int i0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void xoa(int a[],int n){
	cout<<"c)"
	int k;
	cout<<"nhap vi tri can xoa ";
	cin>>k;
	for(int i=k-1;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void xoa3(int a[],int n){
	cout<<"d)";
	for(int i=0;i<n;i++){
		if(a[i]%==0){
			for(int j=i;j<n;j++){
				a[j]=a[j+1];
			}
			i--;
			n--;
		}
	}
}
void demsopt(int a[],int n){
	
}
