#include <iostream>
#include <vector>
#include <string>
using std::vector;

bool bound(int a);
bool validValue(int a);
void getNext(vector<int> &f, int r);
void vprint(vector<int> &v, vector<int> &falgs);
void subset(vector<int> &v);

const int invalid = -1;
int main(){
	vector<int> v;
	int input;
	while(std::cin >> input){
		v.push_back(input);
		for(int i = 0; i < v.size(); i++){
			std::cout <<v[i] <<" ";
		}
		std::cout << std::endl;
	}
	char c;
	std::cin >> c;
	std::cin >> c;
	std::cout << "c: "<<c <<std::endl;
	/*
	for(int i = 1; i <5; i++){
		v.push_back(i);
	}
	*/
	subset(v);
	return 0;
}

void subset(vector<int> &v){
	vector<int>::size_type len = v.size();

	// The flags contains the indicators which indicates 
	// the corresponding value in the v is in the subset.
	// 0: not exist; 1: exist; invalid.
	vector<int> flags(len, invalid);

	int r = 0;
	while(r>=0){
		getNext(flags, r);

		if(flags[r] == invalid){
			--r;
		}
		else if(r == len-1){
			vprint(v, flags);
			//std::cin.get();
		}
		else {
			++r;
		}

	}
}

void getNext(vector<int> &f, int r){
	++f[r];
	while(validValue(f[r])){
		if(bound(f[r])){
			return;
		}
		++f[r];
	}

	f[r] = invalid;

}

bool validValue(int a){
	if(a == 0 || a == 1){
		return true;
	}
	else{
		return false;
	}
}

bool bound(int a){
	return true;
}

void vprint(vector<int> &v, vector<int> &flags){
	int len = flags.size();
	for(vector<int>::size_type i = 0; i < len; i++){
		if(flags[i] == 1){
			std::cout << v[i] <<" ";
		}

	}
	std::cout << std::endl;
}
