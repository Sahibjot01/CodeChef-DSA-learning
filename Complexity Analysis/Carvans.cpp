#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
	int n,count=1,minSpeed;
	scanf("%d",&n);
	int carSpeed[n];
	for(int i = 0; i<n; i++){
	    scanf("%d",&carSpeed[i]);
	}
	minSpeed = carSpeed[0];
	for(int i = 1; i<n; i++){
	    if((carSpeed[i-1] > carSpeed[i]) && (minSpeed > carSpeed[i]))
	        count++;
	   minSpeed = min(minSpeed,carSpeed[i]);
	   
	 
	    
	}
	 
	cout<<count<<endl;
    }
	return 0;
}
