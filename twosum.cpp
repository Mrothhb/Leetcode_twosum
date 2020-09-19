class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> tmp1;
        vector<int> tmp2;
        vector<int> indices;
        copy(nums.begin(), nums.end(), back_inserter(tmp1)); 
        copy(nums.begin(), nums.end(), back_inserter(tmp2)); 
        sort(tmp1.begin(), tmp1.end()); 
        sort(tmp2.begin(), tmp2.end(), greater<int>()); 
        int first_index = 0;
        int second_index = 0;
        int curr = 0;
        std::vector<int>::iterator it;
    
        for(int i = 0; i<nums.size();i++){
            curr = tmp1[i];
            it = find (tmp2.begin(), tmp2.end(), target-curr);
            if (it != tmp2.end()){
                first_index = *it;
                second_index = curr;
                break;
            }
        }
        
        it = find (nums.begin(), nums.end(), first_index);
        indices.push_back(distance(nums.begin(), it));
        nums[distance(nums.begin(),it)] = nums[distance(nums.begin(),it)]+1;
        it = find (nums.begin(), nums.end(), second_index);
        indices.push_back(distance(nums.begin(), it));
        return indices;
    }
};





