#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,a=0,b=0;
	cin >> n;
	string s;
	cin >>s;
	for(i=0;i<n;i++){
		if(s[i]=='0')
			a++;
		else
			b++;
	}
	cout << abs(b-a);
	return 0;
}
		
