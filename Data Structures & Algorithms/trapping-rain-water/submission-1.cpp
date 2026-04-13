class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();
        if(n==0)
        {
            return 0;
        }
        
        // vector<int>prefix(n,0);
        // vector<int>suffix(n,0);


        int l=0;
        int r=n-1;


        // prefix[0]=height[0];
        // suffix[n-1]=height[n-1];
        // for(int i=1;i<n;i++)
        // {
        //       prefix[i]=max(prefix[i-1],height[i]);
        // }
        // for(int i=n-2;i>=0;i--)
        // {
        //     suffix[i]=max(suffix[i+1],height[i]);
        // }
        int tot=0;
        // for(int i=0;i<n;i++)
        // {
            
        //     tot+=min(prefix[i],suffix[i])-height[i];
        // }

            int left_max=height[l];
            int right_max=height[r];
        while(l<r)
        {
            if(left_max<right_max)
            {
                l++;
                left_max=max(left_max,height[l]);
                tot+=left_max-height[l];

            }
          else 
            {
                r--;
                right_max=max(right_max,height[r]);
                tot+=right_max-height[r];

            }
        }
        return tot;




        
    }
};
