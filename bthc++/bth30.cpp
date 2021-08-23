#include<bits/stdc++.h>
using namespace std;
int kiemtra(int n){
   if(n<2&&n>0)
   		return 0;
	else{
   		for(int i=2;i<=n/2;i++){
   			if(n%i==0)
   				return 0;	
		}
	}   	
    return 1;
}
int main(){
	int n;
	cout << "Nhap n = ";
    cin >> n;
	int tong=0;
	for(int i=2;i<n;i++){
		if(kiemtra(i)==1){
		tong+=i;
		}
	}
	cout<<"\n tong cac so nguyen to la: "<<tong;
	return 0;
}
