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
	
}
bool hoanthien(int a){
    int sum = 0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0) 
            sum+=i;
    }
    if(sum==a) return true; 
    return false;
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
}

