class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>ans;
        vector<int>ans1;
        for(int i=0;i<arr2.size();i++)
      {  int pow=0;
         int j;
         for( j=0;j<arr1.size();j++)
         {
            if(arr2[i]==arr1[j])
            {  
                pow++;
            }
         }
         for(int k=pow;k>0;k--)
         {
            ans.push_back(arr2[i]);
         }
      }
      for(int i=0;i<arr1.size();i++)
      {  int flag=0;
        for(int j=0;j<arr2.size();j++)
        {    if(arr1[i]==arr2[j])
             { flag++;

             }

        }
        if(flag==0)
        {
            ans1.push_back(arr1[i]);
        }
      }
      sort(ans1.begin(),ans1.end());
      for(int i=0;i<ans1.size();i++)
      {
        ans.push_back(ans1[i]);
      }
      return ans;
        
    }
};