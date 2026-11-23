class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>frequency;
        int left=0,maxfruits=0;
        for(int right=0;right<fruits.size();right++){
            frequency[fruits[right]]++;

            if(frequency.size()>2){
                  frequency[fruits[left]]--;
                  if (frequency[fruits[left]] == 0) {
                    frequency.erase(fruits[left]);
                }
            left++;
            }
            if (frequency.size() <= 2) {
                maxfruits = max(
                    maxfruits,
                    right - left + 1
                );
            }
            
        }
        return maxfruits;

    }
};