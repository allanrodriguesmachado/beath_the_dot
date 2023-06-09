Scoping refers to the visibility and accessibility of variables within a particular context or portion of code.
Closures, on the other hand, are a powerful concept in JavaScript that allow variables to be accessed even after their
enclosing scope has finished executing. Here's an overview of scoping and closures:

1. Lexical Scoping: JavaScript uses lexical scoping, which means that variable accessibility is determined by the
   position of variables in the source code. Variables are accessible from their current scope and any nested inner
   scopes.

2. Function Scope: Variables declared within a function using the `var` keyword have function scope. They are accessible
   within the function and any nested functions defined within it.

3. Block Scope: Variables declared with `let` and `const` have block scope, which means they are accessible within the
   block where they are defined (e.g., inside loops or conditional statements). Block scope was introduced in ECMAScript
   2015 (ES6).

4. Global Scope: Variables declared outside of any function or block have global scope, making them accessible
   throughout the entire program.

5. Closure: A closure is created when a function is defined within another function and it retains access to the
   variables of its outer (enclosing) function, even after the outer function has finished executing. The inner
   function "closes over" the variables it needs, forming a closure.

Closures are particularly useful for creating private variables and encapsulating data. Here's an example to illustrate
closures:

```javascript
function outerFunction() {
    var outerVariable = 'I am from the outer function';

    function innerFunction() {
        console.log(outerVariable); // Accessing the outer variable within the inner function
    }

    return innerFunction;
}

var closure = outerFunction(); // outerFunction has finished executing, but closure retains access to the outer variable

closure(); // Output: "I am from the outer function"
```

In this example, the inner function `innerFunction` is defined within the `outerFunction`. Even after
the `outerFunction` has finished executing and returned, the `closure` variable still retains access to
the `outerVariable`. When we invoke `closure()`, it logs the value of the `outerVariable` from the outer function,
demonstrating the concept of closures.

Closures are powerful because they enable functions to remember and access variables from their original scope, even
when they are executed in a different context or scope. They are commonly used in JavaScript for tasks such as
encapsulation, data privacy, and creating function factories.