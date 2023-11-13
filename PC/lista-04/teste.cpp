#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5,2,4,1,3};
    // Find the index of the largest element
    auto maxElement = std::max_element(vec.begin(), vec.end());
    int indexOfMax = std::distance(vec.begin(), maxElement);

    // Swap the largest element with the middle element
    int middleIndex = vec.size() / 2;
    std::swap(vec[indexOfMax], vec[middleIndex]);

    // Print the modified vector
    for (int num : vec) {
        std::cout << num << " ";
    }

    return 0;
}
