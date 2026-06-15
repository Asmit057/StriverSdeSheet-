class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n = piles.size();
      int k =1;
      int kmax = INT_MIN;
      int result =INT_MAX;
      for(int i=0; i<n; i++)
      {
        kmax = max(kmax,piles[i]);
      }  

       while(k<=kmax)
       {
           int mid = (k+kmax)/2;
        long long minH=0;
        for(int i=0; i<n; i++)
        {
            if(mid!=0){
            double x = double(piles[i])/mid;
        minH += ceil(x);}
       // cout<<minH<<" ";
        }
       if(minH<= h)
       {
           result =  mid;
           kmax = mid-1;
       }    
       else{
           k=mid+1;
       }
    }
    return result;
    }
    // let k tells the speed 
};