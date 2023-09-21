// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int num1=0;
//         int num2=0;
//         for(int i=0;i<nums1.size();i++){
//             num1=num1*10+nums1[i];
//         }
//          for(int i=0;i<nums2.size();i++){
//             num2=num2*10+nums2[i];
//         }
        
//         string s1=to_string(num1);
//         string s2=to_string(num2);
        
//         string s=s1+s2;
//         int p=stoi(s);
//         vector<double>v;
//         double a=0.0;
//         while(p){
//             v.push_back(p%10);
//             p=p/10;
//         }
//         sort(v.begin(),v.end());
        
//         int n=v.size();
        
//         if(n%2!=0&&n>1){
//             return v[(n-1)/2];
//         }
//         else if(n==1){
//             return v[0];
//         }
//         else if(n==2){
//             return (v[0]+v[1])/2;
//         }
        
//         else if(n%2==0&&n>2){
//            a=(v[n]/2+v[n-2]/2)/2;
//         }
//         return a;
//     }
// };

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }
        
        while (i < nums1.size()) merged.push_back(nums1[i++]);
        while (j < nums2.size()) merged.push_back(nums2[j++]);
        
        int mid = merged.size() / 2;
        if (merged.size() % 2 == 0) {
            return (merged[mid-1] + merged[mid]) / 2.0;
        } else {
            return merged[mid];
        }
    }
};