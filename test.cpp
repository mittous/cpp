#include <iostream>
#include <vector>

// void merge(std::vector<int>& arr, int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     std::vector<int> L(n1);
//     std::vector<int> R(n2);


//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];


//     int i = 0;
//     int j = 0;
//     int k = left;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }

//     std::cout << "L: ";
//     for (int i = 0; i < n1; i++)
//         std::cout << L[i] << " ";
//     std::cout << std::endl << "R: ";
//     for (int j = 0; j < n2; j++)
//         std::cout << R[j] << " ";
//     std::cout << std::endl;
// }

// void insertionSort(std::vector<int>& arr, int left, int right) {
//     for (int i = left + 1; i <= right; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= left && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// void mergeInsertionSort(std::vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         if (right - left + 1 <= 5) {
//             insertionSort(arr, left, right);
//         } 
//         else {
//             mergeInsertionSort(arr, left, mid);
//             mergeInsertionSort(arr, mid + 1, right);
//             merge(arr, left, mid, right);
//         }
//     }
// }

// void printArray(const std::vector<int>& arr) {
//     for (int num : arr)
//         std::cout << num << " ";
//     std::cout << std::endl;
// }

// int main() {
//     std::vector<int> arr = {9, 2, 7, 1, 5, 3, 8, 6, 4};
//     int n = arr.size();

//     std::cout << "Original array: ";
//     printArray(arr);

//     mergeInsertionSort(arr, 0, n - 1);

//     std::cout << "Sorted array: ";
//     printArray(arr);

//     return 0;
// }
















// #include <iostream>
// #include <string>




// int main ()
// {
//     std::string str = "1.5";
//     std::cout << isdigit(str[0]) << std::endl;
// }

// // int main ()
// // {
    
// //        try {
// //         double a  = "hello";
// //         // double a = std::stod(str);  // Convert string to double

// //         std::cout << "Value: " << a << std::endl;
// //     }
// //     catch (const std::exception& e) {
// //         std::cout << "Exception: " << e.what() << std::endl;
// //     }
// // }



#include <algorithm>
#include <deque>
template<typename SourceContainer, typename DestinationContainer>
void copyContainer(const SourceContainer& source, DestinationContainer& destination) {
    std::copy(source.begin(), source.end(), std::back_inserter(destination));
}

int main() {
    std::deque<int> source;
    std::deque<int> destination;

    source.push_back(3);
    source.push_back(5);
    source.push_back(2);
    source.push_back(4);
    source.push_back(1);

    copyContainer(source, destination);
    for (int num : destination)
        std::cout << num << " ";

    return 0;
}