#include <iostream>
#include <emscripten.h>

using namespace std;
extern "C" {
    void EMSCRIPTEN_KEEPALIVE printHello() {
        // emscripten_run_script("alert('hello')");
        int returned = EM_ASM_INT({
            alert('hello');
            console.log('my number is', $0);
            console.log('my second number is', $1);
            return $0 +$1 + 3;
        }, 13, 100);
        cout<<returned<<endl;
    }

    EM_JS(void, sayHi, (), {
        document.getElementById('hi').innerText = 'HI';

    })

    int main() {
        printHello();
        sayHi();
        return 0;
    }
}