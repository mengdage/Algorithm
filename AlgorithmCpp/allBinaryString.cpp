#include <iostream>
#include <vector>

void vprint(std::vector<int> &v);
void getNext(std::vector<int> &v, int r);
bool bound(std::vector<int> &v, int r);
void generateAllBinaryString(int len);


const int invalid = -1;
int main(){
	int length;
	std::cin>>length;
	generateAllBinaryString(length);
	return 0;
}

void generateAllBinaryString(int len){
	//initialize an vector with len -1's
	std::vector<int> bs(len,invalid);

	auto itr = bs.begin();

	/*
	do{

	}while(itr != vector.cbegin());
	*/

	int r = 0;
	while(r >= 0){
		getNext(bs, r);

		if(bs[r] == invalid){
			--r;
		}
		else if(r == len-1){
			//print the binary string
			vprint(bs);
		}
		else{
			++r;
		}
	}
}

void getNext(std::vector<int> &v, int r){
	++v[r];
	while(v[r] <2){
		if(bound(v, r)){
			//std::cout << v[r] <<std::endl;
			return;
		}
		else{
			++v[r];
		}
	}

	v[r] = invalid;
}

void vprint(std::vector<int> &v){
	for(std::vector<int>::const_iterator itr = v.cbegin(); itr != v.cend(); itr++){
		std::cout << *itr << " " ;
	}
	std::cout << std::endl;

}

bool bound(std::vector<int> &v, int r){
	return true;
	/*
	if(v[r]%2==0) return true;
	return false;
	*/
}

