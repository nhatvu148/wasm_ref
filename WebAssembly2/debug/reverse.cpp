#include <emscripten.h>

extern "C"{
    int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
        return a + b;
    }

    int EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
        if(n <= 0) return 0;
        int a = 1, b = 2;
        while (n > 1) {
            b += a;
            a = b - a;
            n--;
        }
        return a;
    }

}