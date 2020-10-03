let importObject = {
    'env':{
        'memory': new WebAssembly.Memory({initial: 1}),
        'table': new WebAssembly.Table({initial: 1, element: 'anyfunc'})
    }
}

Promise.all([
    WebAssembly.instantiateStreaming(fetch('module1.wasm'), importObject),
    WebAssembly.instantiateStreaming(fetch('module2.wasm'), importObject)
]).then(results => {
    console.log(results[1].instance.exports.getMyNumber())
})
