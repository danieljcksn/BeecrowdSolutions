#include <bits/stdc++.h>

using namespace std;

int inv = 0;
vector<int> merge(vector<int> a, vector<int> b){
    vector<int> merged;

    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            merged.push_back(a[i]);
            i++;
        }else{
            inv += (int)a.size() - i;
            merged.push_back(b[j]);
            j++;
        }
    }

    while(i < a.size()){
        merged.push_back(a[i]);
        i++;
    } 
    while(j < b.size()){
        merged.push_back(b[j]);
        j++;
    } 

    return merged;
}

vector<int> mergeSort(vector<int> arr){
    if(arr.size() <= 1)
        return arr;
    
    vector<int> a, b;
    int mid = (arr.size())/2;

    for(int i = 0; i < mid; ++i)
        a.push_back(arr[i]);
    
    for(int j = mid; j < arr.size(); ++j)
        b.push_back(arr[j]);

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;

	while(cin >> n){
		vector<int> start(n), end(n);

		for(int i=0; i<n; ++i){
			cin >> start[i];
		}

		for(int i=0; i<n; ++i){
			cin >> end[i];
		}

		int ans = 0;

		inv = 0;

		map<int, int> mp;

		for(int i=0; i<n; ++i){
			mp[start[i]] = i+1;
		}

		vector<int> arr(n);
		for(int i=0; i<n; ++i) arr[i] = i+1;

		for(int i=0; i<n; ++i) end[i] = mp[end[i]];

		mergeSort(end);

		cout << inv << '\n';
	}

}
