#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--){
	    int G;
	    int game[10];
	    cin>>G;
	    while(G--){
	        int N,Q,I,count=0;
	        cin>>I>>N>>Q;
	        
	        for(int i = 0; i<N; i++){
	            game[i] = I;
	        }
	        if(N%2 != 0){
	            (game[0]==1)?(game[0] = 2):(game[0] = 1);
	        }
	        for(int i = 1; i<N; i++){
	            (game[i-1]==1)?(game[i] = 2):(game[i] = 1);
	        }
	        for(int i = 0; i<N; i++){
	            if(Q==game[i]){
	                count++;
	            }
	        }
	        std::cout << count << std::endl;
	        
	        
	    }
	}
	return 0;
}
