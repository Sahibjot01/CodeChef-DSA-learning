#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int num;
	    cin>>num;
	    int k,numOfZeroes=0;
	    for(int i = 1; i<num; i++){
	        if(pow(5,i)>num ){
	            k = i-1;
	            break;
	        }
	    }
	    for(int i = 1; i<=k; i++){
	        numOfZeroes += floor(num/pow(5,i));
	    }
	   std::cout << numOfZeroes << std::endl;
	}
	return 0;
}
