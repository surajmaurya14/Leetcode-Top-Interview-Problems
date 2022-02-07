class Solution
{
public:
    void rotate(vector<int> &nums, int si, int ei)
    {
        int i = si, j = ei;
        while (i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {

        int size = nums.size();
        if (k > size)
        {
            k = k % size;
        }

        rotate(nums, 0, size - 1);
        rotate(nums, 0, k - 1);
        rotate(nums, k, size - 1);
    }
};