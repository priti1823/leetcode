class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n==1)
        {
            ans.push_back(0);
            return ans;
        }
        else if(n%2!=0)
        {    n=n-1;
             n=n/2;
        int b=1;
            int c=-1;
           while(n>0)
           {
            
            ans.push_back(b);
            ans.push_back(c);
            b++;
            c--;
            n--;
           }
           ans.push_back(0);
            
        }
        else if(n%2==0)
           n=n/2;
        {   int b=1;
            int c=-1;
            while(n>0)
            {
            
            ans.push_back(b);
            ans.push_back(c);
            b++;
            c--;
            n--;
            }
        }
        return ans;
        
    }
};