#include <emscripten/emscripten.h>
#include <iostream>

using namespace std;

extern "C" {

  int EMSCRIPTEN_KEEPALIVE add(int x, int y) {
    return x + y;
  }

  int main() {
    cout << add(1,2) << endl;
  }
}