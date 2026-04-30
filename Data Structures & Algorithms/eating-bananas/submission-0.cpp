class Solution {
public:
int func(vector<int>& piles, int h)
{
    int count_hour=0;
    for(int i=0;i<piles.size();i++)
    {
        count_hour+=ceil(double(piles[i])/double(h));
    }
    return count_hour;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            high=max(piles[i],high);
        }
        int low=1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int hours=func(piles,mid);
            if(hours<=h)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }   
            return low;
     
    }
};
