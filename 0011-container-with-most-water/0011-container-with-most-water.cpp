class Solution {
public:
    int maxArea(vector<int>& height) {
      int i = 0 ;
      int j = height.size()-1;
      int maxarea = INT_MIN;
      while(i < j ){
        int h = min(height[i],height[j]);
        int width = j - i;
        maxarea = max(h*width,maxarea);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
      }
      return maxarea;
        
    }
};