/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (41.81%)
 * Likes:    1242
 * Dislikes: 2090
 * Total Accepted:    526.3K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const auto length = digits.size();
        if (digits.back() < 9)
        {
            ++digits.back();
        }
        else
        {
            for (int i = length - 1; i >= 0; i--)
            {
                if (digits[i] != 9)
                {
                    ++digits[i];
                    return digits;
                }
                digits[i] = 0;
            }
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
        
    }
};
// @lc code=end

