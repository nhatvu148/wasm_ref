# wasm_ref
# Build WASM QT:
cd emsdk
source ./emsdk_env.sh
cd /Users/nhatvu148/qt_wasm
/Users/nhatvu148/Qt/5.15.1/wasm_32/bin/qmake
make
emrun --browser chrome --port 8000 qt_wasm.html
