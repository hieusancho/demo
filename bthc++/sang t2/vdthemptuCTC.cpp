#include<iostream>
using namespace std;
void nhap(int a[][100],int hang ,int cot){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout<<"moi nhap a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void xuat(int a[][100],int hang ,int cot){
	cout<<"Mang vua nhap la: "<<endl;
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void them(int a[][100],int hang ,int cot){
	cout<<"\n them mot hang la: ";
	for(int j=0;j<cot;j++){
		cout<<"them a["<<hang<<"]["<<j<<"]: ";
		cin>>a[hang][j];
	}
	hang++;
	cout<<"mang vua them la: "<<endl;
	xuat(a,hang,cot);
}                                                                                                    
int main(){
	int a[100][100],hang,cot;
	cout<<"nhap hang: ";
	cin>>hang;
	cout<<"nhap cot: ";
	cin>>cot;
	nhap(a,hang,cot);
	xuat(a,hang,cot);
	them(a,hang,cot);
	return 0;
}
