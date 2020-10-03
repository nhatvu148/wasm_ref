#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std;

int main() {

    srand(time(NULL));

    auto start = chrono::high_resolution_clock::now();
    vector<int> arr(10000000);
    for(int i=0; i < 10000000; i++) {
        arr[i] = rand() % 1000000;
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Array generated in " << duration << " ms" <<endl;

    
    start = chrono::high_resolution_clock::now();
    
    sort(arr.begin(), arr.end());

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Array sorted in " << duration << " ms" <<endl;

    
}