#include "algorithms/algorithms.h"
#include <iostream>
#include <stdlib.h>
#include <chrono>

using namespace std::chrono;

int main() {
    const int n = 1024; // number of elements
    std::cout << "Run 1, size: " << n << std::endl; // Run 1

    int arr[n]; // array of elements

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
    #pragma region sorting
    auto start = high_resolution_clock::now(); // start time
    bubbleSort(arr, n); // bubble sort
    auto stop = high_resolution_clock::now(); // stop time
    auto duration = duration_cast<microseconds>(stop - start); // duration
    std::cout << "bubbleSort: " << duration.count() << " microseconds" << std::endl; // print duration

    for (int i = 0; i < n; i++) { // reset array
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    insertionSort(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "insertionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    selectionSort(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "selectionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "mergeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    gnomeSort(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "gnomeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    quickSort(arr, 0, n - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "quickSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    start = high_resolution_clock::now();
    heapSort(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "heapSort: " << duration.count() << " microseconds" << std::endl;
    #pragma endregion
    // Run 1
    
    
    const int n2 = 2048; // number of elements (2nd run)
    std::cout << "\nRun 2, size: " << n2 << std::endl; // Run 2

    int arr2[n2]; // array of elements (2nd run)

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }
    #pragma region sorting
    start = high_resolution_clock::now();
    bubbleSort(arr2, n2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "bubbleSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    insertionSort(arr2, n2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "insertionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    selectionSort(arr2, n2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "selectionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    mergeSort(arr2, 0, n2 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "mergeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    gnomeSort(arr2, n2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "gnomeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    quickSort(arr2, 0, n2 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "quickSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % n2;
    }

    start = high_resolution_clock::now();
    heapSort(arr2, n2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "heapSort: " << duration.count() << " microseconds" << std::endl;
    #pragma endregion
    // Run 2

    const int n3 = 4096; // number of elements (3rd run)
    std::cout << "\nRun 3, size: " << n3 << std::endl; // Run 3

    int arr3[n3]; // array of elements (3rd run)

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }
    #pragma region sorting
    start = high_resolution_clock::now();
    bubbleSort(arr3, n3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "bubbleSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    insertionSort(arr3, n3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "insertionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    selectionSort(arr3, n3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "selectionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    mergeSort(arr3, 0, n3 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "mergeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    gnomeSort(arr3, n3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "gnomeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    quickSort(arr3, 0, n3 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "quickSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n3; i++) {
        arr3[i] = rand() % n3;
    }

    start = high_resolution_clock::now();
    heapSort(arr3, n3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "heapSort: " << duration.count() << " microseconds" << std::endl;
    #pragma endregion
    // Run 3

    const int n4 = 8192; // number of elements (4th run)
    std::cout << "\nRun 4, size: " << n4 << std::endl; // Run 4

    int arr4[n4]; // array of elements (4th run)

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }
    #pragma region sorting
    start = high_resolution_clock::now();
    bubbleSort(arr4, n4);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "bubbleSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    insertionSort(arr4, n4);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "insertionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    selectionSort(arr4, n4);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "selectionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    mergeSort(arr4, 0, n4 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "mergeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    gnomeSort(arr4, n4);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "gnomeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    quickSort(arr4, 0, n4 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "quickSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n4; i++) {
        arr4[i] = rand() % n4;
    }

    start = high_resolution_clock::now();
    heapSort(arr4, n4);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "heapSort: " << duration.count() << " microseconds" << std::endl;
    #pragma endregion
    // Run 4

    const int n5 = 16384; // number of elements (5th run)
    std::cout << "\nRun 5, size: " << n5 << std::endl; // Run 5

    int arr5[n5]; // array of elements (5th run)

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }
    #pragma region sorting
    start = high_resolution_clock::now();
    bubbleSort(arr5, n5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "bubbleSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    insertionSort(arr5, n5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "insertionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    selectionSort(arr5, n5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "selectionSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    mergeSort(arr5, 0, n5 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "mergeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    gnomeSort(arr5, n5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "gnomeSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    quickSort(arr5, 0, n5 - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "quickSort: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < n5; i++) {
        arr5[i] = rand() % n5;
    }

    start = high_resolution_clock::now();
    heapSort(arr5, n5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "heapSort: " << duration.count() << " microseconds" << std::endl;
    #pragma endregion
    // Run 5

    return 0;
}