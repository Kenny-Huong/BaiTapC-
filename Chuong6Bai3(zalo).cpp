#include<iostream.h>
#include<stdio.h>
#include<string.h> 
int main(){
	int n,x=0,y=0;
	cout<<"do dai cua sau s: ";
	cin>>n; 
	int dem=n+1; 
	char s[dem];
	cout<<"nhap ki tu cho sau: ";
	fflush(stdin); 
	cin.getline(s,dem); 
	cout<<"so ki tu trong sau la:"<<strlen(s)<<"\n"; 
	cout<<"dao sau:"<<strrev(s)<<"\n";
	for(int i=0;i<n;i++){
		if (s[i]=='a'){
			x++; 
		} 
		if (s[i]=='b'){
			y++; 
		} 
	} 
	cout<<"so ki tu a trong sau la: "<<x;
	cout<<"\nso ki tu b trong mang la: "<<y<<endl; 
} 
