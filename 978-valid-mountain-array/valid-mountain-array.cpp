class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        int flag=0;
        int flag1=0;
        if(arr.size()==1)
        {
            return false;
        }
        while(i<arr.size()-1)
        {
            if(arr[i]<arr[i+1])
            {   i++;
                flag++;
                if(flag1!=0)
                {
                    return false;
                }

            }
            else if(arr[i]==arr[i+1])
            {
                return false;
            }
            
            else if(arr[i]>arr[i+1])
            {
                i++;
                flag1++;
            }
            
           
        }
        if(flag==0)
            {
                return false;
            }
        
         if(flag1==0)
            {
                return false;
            }
            return true;
    }
};