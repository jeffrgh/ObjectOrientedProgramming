#include <iostream>
#include <vector>

// Class to hold the pair data with encapsulation
class NumberPair {
private:
    int first;
    int second;

public:
    // Constructor to initialize the pair
    NumberPair(int f, int s) {
        first = f;
        second = s;
    }

    // Getter method for the first number (const ensures we don't modify it)
    int getFirst() const {
        return first;
    }

    // Getter method for the second number
    int getSecond() const {
        return second;
    }
};

// Helper function to manually sort the vector (Bubble Sort)
// We still need to sort because we are using the Two Pointer technique
void manualSort(std::vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

std::vector<NumberPair> twoSumUnique(std::vector<int> nums, int target) {
    std::vector<NumberPair> result;
    
    // Step 1: Sort manually
    manualSort(nums);

    int left = 0;
    int right = nums.size() - 1;

    // Step 2: Two Pointers approach
    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            // Create an object using the Constructor and add to vector
            // In C++11 and later, 'emplace_back' is slightly more efficient, 
            // but 'push_back' works universally.
            result.push_back(NumberPair(nums[left], nums[right]));

            // Skip duplicates to ensure uniqueness
            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;

            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 5, 1, 5, 2, 4, 2}; 
    int target = 6;

    std::vector<NumberPair> output = twoSumUnique(nums, target);

    std::cout << "Unique pairs summing to " << target << ":\n";
    
    // Iterate through the objects and use Getters to access data
    for (size_t i = 0; i < output.size(); i++) {
        std::cout << "(" << output[i].getFirst() << ", " << output[i].getSecond() << ")\n";
    }

    return 0;
}