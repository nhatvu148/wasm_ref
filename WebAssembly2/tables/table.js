WebAssembly.instantiateStreaming(fetch('table.wasm')).then(result => {
    console.log(result.instance.exports.callFromTableByIndex(0))
    console.log(result.instance.exports.callFromTableByIndex(1))
    console.log(result.instance.exports.callFromTableByIndex(2))
})