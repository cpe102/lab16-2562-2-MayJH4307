#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char * &p,int n){
	p = new char[n];
	char x = 'A';
	for(int i=0;i<n;i++){
		p[i] = x;
		x++;
	}
	
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
