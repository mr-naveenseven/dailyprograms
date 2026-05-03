class Solution {
  public:
    int findPosition(int n) {
        if(n==1){
            return 1;
        }
        if(n<=0){
            return -1;
        }
        // code here
        int index =0;
        int count =0;
        int i=0;
        while(n>0){
            i++;
            int r = n%2;
            if(r==1){
                index=i;
                count++;
            }
            if(count>1){
                return -1;
            }
            n = n/2;
        }
        // if(n==1){
        //     index++;
        //     count++;
        // }
        // if(count==1){
        //     return index;
        // }
        return index;
    }
}; 
