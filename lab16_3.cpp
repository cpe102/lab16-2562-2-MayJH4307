#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int n){
	vector<int> x(n);
	int a;
	for(int i=0;i<n;i++){
		a = rand()%10;
		x[i] = a;
	}
	return x;
	
}

void showVector(vector<int> b){
	for(int i =0;i<b.size();i++){
		cout << "[ " << b[i] << " ]" ;
	}
}

int dotProduct(vector<int> a,vector<int> b){
	int sum=0;
	for(int i=0 ; i<a.size() ; i++){
		sum += a[i]*b[i];
	}
	return sum;
}