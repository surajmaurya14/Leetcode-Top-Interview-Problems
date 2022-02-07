// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         vector<int>::iterator it = nums.begin();
//         vector<int>::iterator next = nums.end();
//         if (nums.size() > 1)
//         {
//             next = it + 1;
//         }

//         while (next != nums.end())
//         {
//             if (*it == *next)
//             {
//                 nums.erase(next);
//             }
//             else
//             {
//                 it++;
//                 next++;
//             }
//         }

//         return nums.size();
//     }
// };

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size(), pos = 1 < size ? 1 : size;
        for (int i = 1; i < size; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[pos++] = nums[i];
            }
        }
        return pos;
    }
};