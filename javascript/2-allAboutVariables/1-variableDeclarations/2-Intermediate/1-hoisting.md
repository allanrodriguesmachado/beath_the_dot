Hoisting is a behavior in JavaScript where variable and function declarations are moved to the top of their containing
scope during the compilation phase, before the code is executed. This means that you can use variables and functions
before they are actually declared in your code.

When it comes to hoisting variable declarations, it's important to understand how it works with variables declared using
the `var` keyword. Here are the key points to consider:

1. Hoisting Variable Declarations:
    - When you declare a variable using `var`, the declaration is hoisted to the top of its scope during the compilation
      phase.
    - This means that you can access and use the variable before its actual declaration in the code.
    - However, the assignment (initialization) of the variable remains in its original place and is not hoisted. So, the
      variable will be initialized with the value `undefined` until its assignment is reached during the normal code
      execution.

Here's an example to illustrate the hoisting of variable declarations:

```javascript
console.log(x); // Output: undefined
var x = 10;
console.log(x); // Output: 10
```

In the above example, even though the variable `x` is accessed before its declaration, it doesn't throw an error. This
is because the declaration is hoisted to the top, and at the point of access, the variable exists but has the
value `undefined`.

It's important to note that hoisting only moves the declaration, not the initialization or assignment. So, if you try to
access a variable before it's declared, it will still result in a `ReferenceError`:

```javascript
console.log(x); // Output: ReferenceError: x is not defined
```

To avoid confusion and potential issues related to hoisting, it's recommended to declare all variables at the top of
their scope. This helps in improving code readability and avoiding accidental re-declarations or unintentional usage of
variables before they are assigned values.

In summary, hoisting with `var` declarations allows you to access and use variables before their actual declarations,
but the assignments are not hoisted, leading to variables being initialized with the value `undefined` until their
assignments are reached in the code execution.