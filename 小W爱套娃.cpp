#include<iostream>
#include<algorithm>
const int N=5005;
long long a[N];
int n;
using namespace std;
int main() {
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int max_len=0,len=1;
	for(int i=1; i<n; i++) {
		if(a[i-1]==a[i]) {
			len++;
		} else len=1;
		if(max_len<len)
			max_len=len;
	}
	cout<<max_len;

}
