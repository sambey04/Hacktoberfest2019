#include <iostream>

using namespace std;

int main(){
	int num,sum = 0,digit,temp;
	int factorials[10];
	for(int i = 0 ; i < 10; i++){
		int fact = 1;
		for(int j = 1;j <= i ; j++){
			fact *= j;
		}
		factorials[i] = fact;
	}
	cout << "Enter num: ";
	cin >> num;
	temp = num;
	while(temp> 0){
		digit = temp%10;
		sum += factorials[digit];
		temp = temp/10;
	}
	cout << "Sum: "<<sum << endl;
	(num == sum)?(cout << "Yes"<<endl):(cout <<"No"<<endl);
	return 0;
}