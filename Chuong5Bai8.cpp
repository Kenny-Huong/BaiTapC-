#include<iostream>
using namespace std; 

int timucln(int a,int b){
	int ucln;     
	while(a != b){  
		if (a > b){  
			a -= b;   
		} 
		else{
			b -= a;   
		}     
	} return a; 
} 
int main(){
	int p, q, a;
	cout << "Nhap p: ";
	cin >> p;
	cout << "Nhap q: ";
	cin >> q; 
    cout << "Uoc chung lon nhat cua p va q la: "<< timucln(q,p) <<endl;
	cout<<"Boi chung nho nhat la: "<< (p*q)/timucln(p,q) <<endl;   
return 0;	
}

