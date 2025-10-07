#include <iostream>
#include <vector>

// The function is now void. Its only job is to modify 'ctr'.
void countSubsets(const std::vector<int>& nums, int id, int& ctr, int sum) {
    // Base Case 1: A valid subset is found.
    if (sum == 0) {
        ctr++;
        return;
    }

    // Base Case 2: Stop if index is out of bounds or target is unreachable.
    if (id >= nums.size() || sum < 0) {
        return;
    }

    // --- Recursive Steps ---

    // Path 1: "Pick" the current element (nums[id]).
    // (We don't actually need the temp vector if we are only counting)
    countSubsets(nums, id + 1, ctr, sum - nums[id]);
    
    // Path 2: "Don't Pick" the current element.
    countSubsets(nums, id + 1, ctr, sum);
}

int findSubsetCount(std::vector<int>& nums, int k) {
    int countMe = 0;
    // Call the void function which will update countMe by reference.
    countSubsets(nums, 0, countMe, k);
    // After the recursion is complete, return the final count.
    return countMe;
}

int main() {
    std::vector<int> v = {3, 1, 2, 4};
    // For target 5, the subsets are {1, 4} and {3, 2}. The count should be 2.
    std::cout << "Occurence is: " << findSubsetCount(v, 5) << std::endl;
    return 0;
}