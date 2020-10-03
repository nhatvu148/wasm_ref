const express = require('express');
const app = express();

app.use(express.static(__dirname + '/'));

express.static.mime.types['.wasm'] = 'application/wasm';

port = 8000
app.listen(port, () => {console.log(`Server running on port ${port}`)});