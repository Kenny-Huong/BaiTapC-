#include <iostream>
using namespace std;

int main(){
	float i, n, S=0;	
	cout << "Nhap n: ";
	cin >> n;	  
	do{
	  if(n<1){
	    cout << "Sai cu phap!";
	    break;
           	 } 	 
      }
	while(n<1);
		for(i=1;i<=n;i++){
			S+=1.0/i;
		}
	cout<<"Tong cua 1 + 1/2 + 1/3 + ... + 1/n la : "<<S<<endl;	  
return 0;			
}
