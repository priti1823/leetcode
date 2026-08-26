class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int pow=0;
        while(pow<bits.size())
        {
            if(pow<bits.size()-1 && bits[pow]==0)
            {
                pow++;
            }
            else if(bits[pow]==1)
            {
                pow=pow+2;
            }
            else if(bits[pow]==0 && pow==bits.size()-1)
            {
                return true;
            }
        }
        return false;
        
    }
};