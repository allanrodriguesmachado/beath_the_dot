Variable shadowing refers to the situation in which a variable declared in an inner scope has the same name as a
variable declared in an outer scope. As a result, the inner variable "shadows" the outer variable, making it
inaccessible within the inner scope.

Here are the key points to understand about variable shadowing:

1. Nested Scopes: Variable shadowing typically occurs within nested scopes, such as inside a function or a block
   statement.

2. Scope Hierarchy: Each scope has access to its own variables as well as variables declared in higher-level scopes.
   However, if a variable in an inner scope has the same name as a variable in an outer scope, the inner variable takes
   precedence, effectively shadowing the outer variable.

3. Accessing Shadowed Variables: When a variable is shadowed, the inner scope can only access the inner variable, while
   the outer scope can still access its own variable.

4. Implications and Potential Issues: Variable shadowing can lead to confusion and unintended consequences. It can make
   code harder to read and understand, especially when variables are shadowed multiple times within nested scopes.
   Additionally, if the intent was to modify the outer variable but it gets shadowed, it can result in unexpected
   behavior.

Here's an example to illustrate variable shadowing:

```javascript
let x = 10;

function myFunction() {
    let x = 20; // Inner variable shadows the outer variable
    console.log(x); // Output: 20
}

myFunction();
console.log(x); // Output: 10 (Outer variable remains unchanged)
```

In this example, the variable `x` is declared in both the global scope and the function scope. Within the `myFunction`
function, the inner variable `x` shadows the outer variable `x`. As a result, when we log the value of `x`
within `myFunction`, it outputs `20`, which is the value of the inner variable. Outside the function, when we log the
value of `x`, it outputs `10`, indicating that the outer variable remains unaffected by the shadowing.

It's important to be aware of variable shadowing and use it judiciously to avoid confusion and potential bugs in your
code.