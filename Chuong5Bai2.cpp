#include<iostream>
using namespace std;

int main(){
	int i,n,a,uoc=0; 
	cout<<"Nhap n: ";
	cin>>n; 
	cout<<"Nhung so nguyen to tu 1 den "<< n <<" la: "<<endl;
	for(int i=1;i <=n ;i++){            
		for(int a=1 ; a <= i ;a++){     
			if (i%a==0){                
				uoc++; 
			} 
		} 
		if (uoc==2){             
		    
			cout<<i<<"\t"; 
		}
        uoc=0;}
        	cout<<endl;
return 0;        	
} 
