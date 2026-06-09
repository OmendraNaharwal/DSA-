class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxarea = 0;
        for(int i=0;i<=n;i++){
            int h = (i==n) ? 0:heights[i];
            while(!st.empty() && h<heights[st.top()]){
                int height = heights[st.top()];
                st.pop();
                int w = st.empty() ? i:i-st.top()-1;
                maxarea = max(maxarea,height*w);
            }
            st.push(i);
        }
        return maxarea;
    }
};