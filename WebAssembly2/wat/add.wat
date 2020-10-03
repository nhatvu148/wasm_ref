(module
  (func $add (param $num1 i32) (param $num2 i32) (result i32)
    local.get $num1
    local.get $num2
    i32.add)

  (export "add" (func $add))
)
