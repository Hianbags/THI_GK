#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "\nNhap so nguyen n = ";
	cin >> n;
}
bool chinhphuong(int n){
int i = 0;
	while(i*i <= n){
		if(i*i == n){
			return true;
		}
		++i;
	}
	return false;
}