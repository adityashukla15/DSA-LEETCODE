## 01. First Occurence

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/implement-strstr/1)

### Problem Description

**Task:** Given two strings txt and pat, return the 0-based index of the first occurrence of the substring pat in txt. If pat is not found, return -1.Examples :Input: txt = "GeeksForGeeks", pat = "Fr"

#### Examples

##### Example 1

- **Output:**
```text
-1
```
- **Explanation:** "gr" is not present in the string "GeeksForGeeks" as substring.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n^2)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-11 14:06:44
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
   int firstOccurence(string &txt, string &pat)
   {
       int n = txt.length();
       int m = pat.length();

       // Iterate through txt
       for (int i = 0; i <= n - m; i++)
       {

           // Check for substring match
           int j;
           for (j = 0; j < m; j++)
           {

               // Mismatch found
               if (txt[i + j] != pat[j])
               {
                   break;
               }
           }

           // If we completed the inner loop, we found a match
           if (j == m)
           {

               // Return starting index
               return i;
           }
       }

       // No match found
       return -1;
   }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-11 14:03:46
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
   int firstOccurence(string &txt, string &pat)
   {
       int n = txt.length();
       int m = pat.length();

       // Iterate through txt
       for (int i = 0; i <= n - m; i++)
       {

           // Check for substring match
           int j;
           for (j = 0; j < m; j++)
           {

               // Mismatch found
               if (txt[i + j] != pat[j])
               {
                   break;
               }
           }

           // If we completed the inner loop, we found a match
           if (j == m)
           {

               // Return starting index
               return i;
           }
       }

       // No match found
       return -1;
   }
};
```

*Generated on: 10/11/2026, 2:34:45 PM*