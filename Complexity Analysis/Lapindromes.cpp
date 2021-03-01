#include <iostream>
#include<map>
#include<string>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                string str, a, b;
                int len,flag =1 ;
                std::map<char, int> freq1,freq2 ;
                cin >> str;
                len = str.length();
                if (len % 2 == 0) { // string is even
                        for (int i = 0; i < len / 2; i++) {
                                a += str[i];
                        }
                        for (int i = len / 2; i <= len; i++) {
                                b += str[i];
                        }

                } else { //string is odd
                        for (int i = 0; i < len / 2; i++) {
                                a += str[i];
                        }
                        for (int i = (len / 2) + 1; i <= len; i++) {
                                b += str[i];
                        }
                }
                //checking frequency
                for(int i = 0; i<a.length(); i++){
                    freq1[a[i]] +=1;
                    freq2[b[i]] +=1;
                }
                for(int i = 0; i<a.length(); i++){
                    if(freq1[a[i]] != freq2[a[i]]){
                        flag = 0;
                        std::cout << "NO" << std::endl;
                        break;
                    }
                
                }
                if(flag != 0){
                  std::cout << "YES" << std::endl;  
                }
                

        }

        return 0;
}