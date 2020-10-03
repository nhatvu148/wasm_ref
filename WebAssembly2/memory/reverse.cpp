#include <emscripten.h>

extern "C"{
    EMSCRIPTEN_KEEPALIVE
    int reverse(int *arr, int len) {
        int sum = 0;
            for(int i = 0; i < len / 2; i++) {
                int tmp = arr[i];
                arr[i] = arr[len - i - 1];
                arr[len - i - 1] = tmp;
            }
            return sum;
        }
}
