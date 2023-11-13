#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "\nNhap so nguyen n = ";
	cin >> n;
	cout<<"\n----------------------------------\n";
	if(hoanthien(n) )
        cout<<n<<" là số hoàn hảo.";
    else
        cout<<n<<" không phải là số hoàn hảo.";
	 cout<<"\n----------------------------------\n";
	if (chinhphuong(n))
		cout<<n<<" là số chính phương.";
    else
        cout<<n<<" không phải là số chính phương.";
	
}
