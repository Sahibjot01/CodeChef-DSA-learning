#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num,remain,reversedNum = 0;
	    cin>>num;
	    while(num != 0){
	        remain = num%10;
	        reversedNum = reversedNum*10 +remain;
	        num = num/10;
	    }
	    cout<<reversedNum;
	    cout<<endl;
	}
	return 0;
}