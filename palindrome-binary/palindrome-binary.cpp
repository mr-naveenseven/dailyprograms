#include <vector>
using namespace std;

class Solution {
    vector<int> createbinary(int n){
        vector<int> binary;
        while(n>0){
            binary.push_back(n&1);
            n >>= 1;
        }
        return binary;
    }
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        auto binary = createbinary(n);
        int len = binary.size();
        for(int i=0;i<len;i++){
            // cout << binary[i] << binary[len-i-1] << endl;
            if(binary[i] != binary[len-i-1]){
                return false;
            }
        }
        
        return true;
    }
};