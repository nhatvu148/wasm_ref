(module
    (table 3 funcref)
    (func $constant (result i32)
    i32.const 100)
    (func $constant1 (result i32)
    i32.const 200)
    (func $add (param i32) (param i32) (result i32)
    local.get 0
    local.get 1
    i32.add)
    (elem (i32.const 0) $constant $constant1 $add)

    (type $returnsInt (func (result i32)))
    (type $returnsIntWithParams (func (param i32 i32) (result i32)))

    (func (export "callFromTableByIndex") (param $i i32) (result i32)
        (if (result i32)
            (i32.lt_s
                (local.get $i)
                (i32.const 2)
            )
            (then
                local.get $i
                call_indirect (type $returnsInt)    
            )

            (else
                (call_indirect (type $returnsIntWithParams) (i32.const  15) (i32.const  16) (local.get $i))
            
            )
        
        )
    )

)