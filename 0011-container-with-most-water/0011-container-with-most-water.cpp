class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int left=0,right=n-1;
        int minHeight,currArea,maxArea=0;
        
        while(left<right){
            
            minHeight=min(height[left],height[right]);
            currArea=minHeight*(right-left);
            maxArea=max(maxArea,currArea);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }return maxArea;
    }
};