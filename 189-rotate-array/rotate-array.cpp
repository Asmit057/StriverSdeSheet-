class Solution {
public:
void reverse1(vector<int>& nums,int start, int end)
{
    while(start <end)
    {
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        // to do in 1extra space we have to swapping kind of thing
        // swap for 0 to k=3 and then reverse from k to end
        //         while(i<k && i<(n-i-1))
        // {
        //     swap(nums[i],nums[n-i-1]);
        //     i++;
        // }   this logic is incorrect bcz if the array size is large
        // and the value of the k is small then it does not reverse the
        // rest elements and when we apply reverse in the last then it reverses the undesired elements so better to reverse all the elements in the 
        // begining;
        
        int n= nums.size();
        int i=0;
         k= k%n;
   
         if(k>0){
  reverse(nums.begin(),nums.end());
      reverse1(nums,0,k-1);
      reverse1(nums,k,n-1);
        }
    }
};