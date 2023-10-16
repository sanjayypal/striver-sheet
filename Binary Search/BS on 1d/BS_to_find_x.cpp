int search(vector<int> &nums, int target) {
    int low = 0,high = nums.size()-1,mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(nums[mid]==target)
        return mid;
        else if(target<nums[mid])
        high = mid-1;
        else
        low = mid+1;
    }
    return -1;
}



int searching(vector<int> &nums,int low,int high,int target);
int search(vector<int> &nums, int target) {
    int low = 0,high = nums.size()-1;
    return searching(nums, low, high, target);
}
int searching(vector<int> &nums,int low,int high,int target)
{
    int mid = (low+high)/2;
    if(nums[mid]==target)
    return mid;
    else if(low>high)
    return -1;
    else if (target<nums[mid])
    return searching(nums,low,high-1,target);
    else
    return searching(nums, low+1, high, target);
}