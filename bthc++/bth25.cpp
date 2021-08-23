#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[50],x[1],y[1];
	int i;
	cout<<"nhap chuoi ky tu: ";
	cin>>a;
	cout<<"nhap ky tu x: ";
	cin>>x[0];
	cout<<"nhap ky tu y: ";
	cin>>y[0];
	int l= strlen(a);
	cout<<"ky tu "<<x[0]<<" xuat hien o vi tri: ";
	for(i=0;i<l;i++)
		if(a[i]==x[0])
			cout<<" "<<i+1;
		cout<<endl;
		cout<<"chuoi sau khi thay ky tu "<<x[0]<<"bang ky tu "<<y[0]<<endl;
		for(i=0;i<l;i++)
			if(a[i]==x[0])
				a[i]=y[0];
		for(i=0;i<l;i++){
			cout<<" "<<a[i];
		}
		return 0;		
}
