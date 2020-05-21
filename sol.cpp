#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], b[100], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i] == b[j]){
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}
