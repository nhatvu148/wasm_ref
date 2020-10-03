(module
    (import "env" "memory" (memory 1) )
    (import "env" "table" (table 1 funcref))

    (func $sharedFunc (result i32)
        (local $i i32)
        (local $n i32)
        (local.set $i (i32.const 0))
        i32.const 0
        (local.set $n (i32.load))
        (block $label0
            (loop $label1
                (br_if $label0 (i32.eq (local.get $i) (i32.const 5)))
            
                (local.set $n (i32.add (local.get $n) (i32.const 1)))
                (local.set $i (i32.add (local.get $i) (i32.const 1)))

                (br $label1)
            )
        )
        local.get $n
    )

    (elem (i32.const 0) $sharedFunc)
)