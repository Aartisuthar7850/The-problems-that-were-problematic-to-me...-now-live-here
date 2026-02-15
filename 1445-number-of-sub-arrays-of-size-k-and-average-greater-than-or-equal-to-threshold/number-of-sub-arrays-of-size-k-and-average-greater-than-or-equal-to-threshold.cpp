class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int winsum=0,count=0;
        for(int i = 0;i<k;i++){
            winsum+=arr[i];
        }
        if(winsum>=threshold*k){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            winsum = winsum-arr[i-k]+arr[i];
            if(winsum>=threshold*k){
            count++;
        }
        }
        return count;
    }
};