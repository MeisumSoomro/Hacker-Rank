#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

// Pre-implemented function that we're testing
int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // Return an empty array
        return vector<int>();
    }
};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // Return an array with at least 2 unique elements
        return vector<int>{1, 2, 3};
    }

    static int get_expected_result() {
        // Return index of minimum value (0 since 1 is minimum)
        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // Return array where minimum value occurs exactly twice
        return vector<int>{1, 3, 1};
    }

    static int get_expected_result() {
        // Return the expected index (first occurrence of minimum)
        return 0;
    }
};

void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
        assert(false);
    } catch (invalid_argument& e) {
        return;
    }
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);
    
    set<int> unique_elements(seq.begin(), seq.end());
    assert(unique_elements.size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    auto result = minimum_index(seq);
    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    assert(result == expected_result);
    
    // Check that there are exactly two minimums
    int min_value = *min_element(seq.begin(), seq.end());
    int count_min = count(seq.begin(), seq.end(), min_value);
    assert(count_min == 2);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}
