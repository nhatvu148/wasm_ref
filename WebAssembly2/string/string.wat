(module
    (import "env" "memory" (memory 1)) ;; at least one page
    (import "env" "print" (func $print (param i32 i32)))
    (data (i32.const 0) "Helloooooo World")
    (func (export "printHello")
        i32.const 0
        i32.const 16
        call $print
    )
)