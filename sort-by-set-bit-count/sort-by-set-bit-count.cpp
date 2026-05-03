#include <vector>
#include <map>

using namespace std;

class Solution {
    
  public:
    // function to count set bits in binary representation of a number
    int countsetbits(int n){
        int count=0;
        while(n>0){
            count += (n&1);
            n >>= 1;
        }
        return count;
    }
    
    vector<int> sortBySetBitCount(vector<int>& arr) {
        // code here
        map<int,vector<int>, greater<int>> tempMap;
        for(int x: arr){
            tempMap[countsetbits(x)].push_back(x);
        }
        vector<int> result;
        for(auto i: tempMap){
            for(auto ele: i.second){
                result.push_back(ele);
            }
        }
        return result;
    }
};