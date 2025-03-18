#include <iostream>
using namespace std;

int main() {
    int arr[100];
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique_elements[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            unique_elements[k] = arr[i];
            k++;
        }
    }

    // Print the array without duplicates
    for (int i = 0; i < k; i++) {
        std::cout << unique_elements[i] << " ";
    }

    return 0;
}