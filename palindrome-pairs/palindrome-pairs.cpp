#include <string>
#include <vector>

using namespace std;

class Solution {
  public:
    bool checkpalindrome(string str){
        int len = str.length();
        for(int i=0,j=len-1;i<len,j>=0;i++,j--){
            if(str[i] != str[j]){
                return false;
            }
        }
        return true;
    }
  
    bool palindromePair(vector<string>& arr) {
        // Code here
        int len = arr.size();
        
        if(len==1){
            return false;
        }
        
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                if(i!=j) {
                    // cout << arr[i] << " " << arr[j];
                    if(checkpalindrome(arr[i]+arr[j])){
                        return true;
                    } else if(checkpalindrome(arr[j]+arr[i])){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};
