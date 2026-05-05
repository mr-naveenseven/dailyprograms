#include <vector>
using namespace std;

class Solution {
  public:
    long long sumXOR(vector<int> &arr) {
        // code here
        int len = arr.size();
        int sum = 0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                sum += arr[i] ^ arr[j];
                // cout << (arr[i] ^ arr[j]) << endl;
            }
        }
        return sum;
    }
};