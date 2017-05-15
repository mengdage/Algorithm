#include <iostream>
#include <vector>
using std::vector;

void vprint(vector<int> &v, vector<int> &orders);
bool validValue(vector<int> &orders, int r);
bool bound(vector<int> &orders, int r);
void getNext(vector<int> &orders, int r);
void perm(vector<int> &v);

const int invalid = -1;
int main(){
	vector<int> v;
	int input;
	while(std::cin >> input){
		v.push_back(input);
	}

	perm(v);
	return 0;
}

void perm(vector<int> &v){
	vector<int>::size_type len = v.size();

	vector<int> orders(len, invalid);

	int r = 0;
	while(r >= 0){
		getNext(orders, r);

		if(orders[r] == invalid){
			--r;
		}
		else if(r == len-1){
			vprint(v, orders);
		}
		else{
			++r;
		}
	}
}

void getNext(vector<int> &orders, int r){
	++orders[r];
	while(validValue(orders, r)){
		if(bound(orders, r)){
			return;
		}
		++orders[r];
	}

	orders[r] = invalid;
}
bool validValue(vector<int> &orders, int r){
	int len = orders.size();
	if(orders[r] >= 0 && orders[r]<len){
		return true;
	}
	else{
		return false;
	}
}
bool bound(vector<int> &orders, int r){
	for(int i = 0; i < r; i++){
		if(orders[i] == orders[r]){
			return false;
		}
	}
	return true;
}

void vprint(vector<int> &v, vector<int> &orders){
	for(int i = 0; i < orders.size(); i++){
		std::cout << v[orders[i]] << " ";
	}
	std::cout << std::endl;
}
