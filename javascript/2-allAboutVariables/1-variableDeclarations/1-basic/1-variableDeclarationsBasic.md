## Variable Declarations

#### en-US

1. Variable Declaration Keywords:

- JavaScript provides three keywords for variable declaration: `var`, `let`, and `const`. Understanding their
  differences is crucial for effectively declaring and using variables.

    - `var`:
        - Historically used for variable declaration in JavaScript.
        - Variables declared with `var` have function scope or global scope, but not block scope.
        - Hoisting: Variables declared with `var` are hoisted to the top of their scope, allowing them to be accessed
          before they are declared.
        - Variable reassignment: Variables declared with `var` can be reassigned multiple times within their scope.

    - `let`:
        - Introduced in ES6 to address some limitations of `var`.
        - Variables declared with `let` have block scope, meaning they are only accessible within the block in which
          they are defined.
        - Hoisting: Variables declared with `let` are hoisted to the top of their block, but they are not initialized
          until the declaration is encountered.
        - Variable reassignment: Variables declared with `let` can be reassigned within their block scope.

    - `const`:
        - Also introduced in ES6, `const` is used for declaring constants.
        - Variables declared with `const` have block scope.
        - Hoisting: Like `let`, variables declared with `const` are hoisted to the top of their block, but they are not
          initialized until the declaration is encountered.
        - Variable reassignment: Variables declared with `const` cannot be reassigned once they are assigned a value.
          However, for objects and arrays, the properties or elements can still be modified.

    - Key Differences:
        - `var` has function scope, while `let` and `const` have block scope.
        - `var` and `let` variables can be reassigned, while `const` variables are read-only after assignment.
        - Variables declared with `var` are hoisted to the top of their scope, while `let` and `const` variables are
          hoisted but not initialized until the declaration is encountered.

    - Best Practices:
        - Prefer using `let` and `const` over `var` for better scoping and avoiding potential issues.
        - Use `let` when you need to reassign a variable.
        - Use `const` for values that shouldn't be changed.

Understanding the differences between `var`, `let`, and `const` is essential for writing clean and predictable
JavaScript code. It helps you choose the appropriate keyword based on the desired scope, mutability, and reassignment
requirements of your variables.

#### Basic Examples:

1. `var`

```javascript
var x = 10;
console.log(x); // Output: 10
```
This basic example demonstrates the usage of `var` to declare a variable `x` with the initial value of `10`. The value is then printed to the console.

---

2. `let`:
```javascript
let y = 20;
console.log(y); // Output: 20
```
Here, `let` is used to declare a variable `y` with an initial value of `20`. The value is then printed to the console.

---

3. `const`:
```javascript
const z = 30;
console.log(z); // Output: 30
```
In this example, `const` is used to declare a constant variable `z` with an initial value of `30`. The value is printed to the console.

This basic example demonstrates the usage of `var` to declare a variable `x` with the initial value of `10`. The value
is then printed to the console.


Intermediate Examples:

1. `var` with Function Scope:
```javascript
var x = 10;

function example() {
    var x = 20;
    console.log(x); // Output: 20
}

example();
console.log(x); // Output: 10
```
Here, `var` demonstrates function scope. The `x` variable is declared globally, and within the `example()` function, a new `x` variable is declared, which has a separate scope from the global `x` variable.


2. `let` with Block Scope:
```javascript
function example() {
    let y = 30;

    if (true) {
        let y = 40;
        console.log(y); // Output: 40
    }

    console.log(y); // Output: 30
}

example();
```
In this example, `let` showcases block scope. The `y` variable is declared globally, but within the `if` block, a new `y` variable is declared with a separate scope.

3`const` with Object Freezing:
```javascript
const person = {
name: 'John',
age: 30
};

Object.freeze(person);
person.name = 'Jane';
console.log(person.name); // Output: John
```
Here, `const` is used to declare a constant object `person`. By applying `Object.freeze()`, the object becomes immutable, and any attempts to modify its properties will have no effect.


#### pt-BR

#

```js

````

### Ir Para [Variaveis](/2Variaveis/1Variaveis.md) 🚀

#

@allanrodriguesmachado
