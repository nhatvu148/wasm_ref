#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    srand(time(NULL));
    vector<int> arr(100);
    for(int i=0; i < 100; i++) {
        arr[i] = rand() % 100;
    }
    
}