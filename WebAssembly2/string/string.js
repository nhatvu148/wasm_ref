let memory = new WebAssembly.Memory({initial: 1});

function logString(offset, length) {
    let bytes = new Uint8Array(memory.buffer, offset, length);
    let string = new TextDecoder('utf8').decode(bytes);
    console.log(string);
}

const importObject = {
    'env': {
        'memory': memory,
        'print': logString
    }
}
WebAssembly.instantiateStreaming(fetch('string.wasm'), importObject).then(result => {
    console.log(result);
    result.instance.exports.printHello();
})