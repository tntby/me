#include <iostream> 
using namespace std;
	const int maxn =1111;
	int a[maxn] ;
	int main(){
	int n;
	cin >>n;
	for(int i=1; i<= n; i++){
		cin >>a[i];
	}
	for(int i=1; i<=n; i++){
		cout <<a[1]<<" ";
	}
	return 0;
}  
