#include <iostream>
#include <string> 
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
	string sum;

	cin >> sum;

	vector<int> v;
 
	for(int i = 0; i < sum.length(); i+=2 ){
		stringstream intTicket(string(1, sum[i]));
		
		int j;

		intTicket >> j;
			
		v.push_back(j);
	}
	v.resize(sum.length()/2 + 1);
	v.shrink_to_fit();

	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){

		if(i!= v.size() -1){
			cout << v[i] << "+";
		}
		else{
			cout << v[i];
		}
	}

}

