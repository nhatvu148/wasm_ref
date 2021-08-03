# wasm_ref
# Build WASM QT: https://doc.qt.io/qt-5/wasm.html
-   cd emsdk
-   source ./emsdk_env.sh
-   cd /Users/nhatvu148/qt_wasm
-   /Users/nhatvu148/Qt/5.15.1/wasm_32/bin/qmake
-   make
-   emrun --browser chrome --port 8000 qt_wasm.html
-   OR:
-   serve

# References:
-   https://young.github.io/intro-to-web-assembly/
-   https://wasdk.github.io/WasmFiddle/
-   https://webassembly.studio/
-   https://mbebenita.github.io/WasmExplorer/
-   https://webassembly.github.io/wabt/demo/wat2wasm/
-   https://www.webassemblygames.com/
