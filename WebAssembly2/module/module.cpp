#include <iostream>
#include <emscripten.h>

using namespace std;
extern "C" {
    int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
        return a + b;
    }

    void EMSCRIPTEN_KEEPALIVE sayHello() {
        cout<< "Hello world"<<endl;
    }
    long long EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
        if(n <= 0) return 0;
        long long a = 1, b = 2;
        while (n > 1) {
            b += a;
            a = b - a;
            n--;
        }
        return a;
    }

    int EMSCRIPTEN_KEEPALIVE sumArray (int* arr, int len) {
        int sum = 0;
        for(int i=0;i<len;i++){
            sum +=arr[i];
        }
        return sum;
    }

}