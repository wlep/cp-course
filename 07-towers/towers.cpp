#include <iostream>
#include <vector>

using namespace std;

template<typename T>
vector<T> get_input_sequence(size_t n) {
    vector<T> sequence(n);

    for(size_t i = 0; i < n; ++i) 
        cin >> sequence[i];
    return sequence;
}

int height [1001];

int main() {
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> numbers = get_input_sequence<int>(n);

    for (int i = 0; i < n; ++i)
        height[numbers[i]]++;
 
    int maxHeight = 0;
    int counter = 0;
    for (int i = 0; i < 1001; ++i) {
        maxHeight = max(maxHeight, height[i]);
        if (height[i] > 0)
            counter++;
    }

    cout << maxHeight << " " << counter << endl;

    return 0;
}