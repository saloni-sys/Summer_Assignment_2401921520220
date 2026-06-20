class Solution {
public:

    vector<int> nextSmallerElements(const vector<int>& arr) {
        int n=arr.size();
        vector<int>nse(n);
        stack<int>st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }

            if(st.empty()) nse[i]=n;
            else

            nse[i]=st.top();
             
             st.push(i);
        }
     

        return nse;
    }


        vector<int> previousSmallerElements(const vector<int>& arr) {
        int n=arr.size();
        vector<int>pse(n);
        stack<int>st;

        for(int i = 0; i<n; i++){
            while(!st.empty()&&st.top()>=arr[i]){
                st.pop();
            }

            if(st.empty()) pse[i]=-1;
            else

            pse[i]=st.top();
             
             st.push(arr[i]);
        }
     

        return pse;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nse = nextSmallerElements(heights);
        vector<int> pse = previousSmallerElements(heights);

        int max_ar=0;

        for(int i=0;i<n;i++){
            max_ar=max(max_ar,heights[i]*(nse[i]-pse[i]-1));
        }
         return max_ar;
    }
};
