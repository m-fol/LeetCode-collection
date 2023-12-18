/*3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.
  
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
  
Example 2:
  
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
  
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> charIndexMap;
        int maxLength = 0;
        int startIdx = 0;

        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];

            if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= startIdx) {
                // If the character is repeated and its index is after or equal to the startIdx,
                // update the startIdx to the next index of the repeated character.
                startIdx = charIndexMap[currentChar] + 1;
            }

            charIndexMap[currentChar] = i;

            int currentLength = i - startIdx + 1;
            maxLength = std::max(maxLength, currentLength);
        }

        return maxLength;
    }
};

