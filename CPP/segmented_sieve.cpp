#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#define BLOCK 10000

using namespace std;

void findPrimesTillrootN(vector<int> & prime,int max){
	int total_num = floor(sqrt(max)) + 1;
	bool numbers_till_rootN[total_num];
	memset(numbers_till_rootN,true,sizeof(numbers_till_rootN));
	numbers_till_rootN[0] = numbers_till_rootN[1] = false;
	for(int i = 2; i*i < total_num; i++){
		if(numbers_till_rootN[i]){
			for(int j = i*i ; j < total_num ; j+= i){
				numbers_till_rootN[j] = false;
			}
		}
	}
	for(int i = 2; i < total_num; i++){
		if(numbers_till_rootN[i]){
			prime.push_back(i);
		}
				
	}
}

void segmentedSieve(const vector<int> & prime,int n){
	bool segment[BLOCK];
	for(int k = 0; k*BLOCK <= n ; k++){
		int start_num = k*BLOCK;
		memset(segment,true,sizeof(segment));
		for(int p = 0 ; p < prime.size();p++){
			int firstMultipleInRange = (start_num%prime[p])?((start_num/prime[p])*prime[p] + prime[p]):((start_num/prime[p])*prime[p]);
			for(int j = firstMultipleInRange - start_num; j < BLOCK; j+= prime[p]){
				if(j + start_num != prime[p])
					segment[j] = false;
			}
		}
		if(k == 0)
			segment[0] = segment[1] = false;
		for(int i = 0; i < BLOCK && i+start_num <= n; i++){
			if(segment[i])
				cout << i + start_num << endl;
		}
	}
}

/*Simple sieve may fail when the number is very large because such a large array cannot be constructed
  Segmented sieve is beneficial when we have to find all prime numbers between 2 large numbers
  We can find all the prime numbers till a large number too using this method as long as the root of the number is less than 10^6
*/  

int main(){
	int till_num = 10000;  // Find all prime numbers till this number
	vector<int> prime_till_rootN;
	findPrimesTillrootN(prime_till_rootN,till_num);
	segmentedSieve(prime_till_rootN,till_num);
	return 0;
}