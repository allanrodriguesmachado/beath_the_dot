Certainly! Here are some examples to illustrate the concepts of mutability and immutability in JavaScript:

1. Mutability:

```javascript
let mutableVariable = "Hello";
mutableVariable = "World";
console.log(mutableVariable); // Output: World
```

In this example, the variable `mutableVariable` is mutable, and its value can be changed. It is initially assigned the
value `"Hello"`, but it is reassigned to `"World"`, demonstrating mutability.

2. Immutability (Primitive Types):

```javascript
const immutableVariable = 10;
// immutableVariable = 20; // Error: Assignment to constant variable.
console.log(immutableVariable); // Output: 10
```

In this example, the variable `immutableVariable` is declared with `const`, making it immutable. Any attempt to reassign
a new value to it will result in an error. The value `10` remains unchanged.

3. Immutability (Reference Types):

```javascript
const immutableArray = [1, 2, 3];
immutableArray.push(4);
console.log(immutableArray); // Output: [1, 2, 3, 4]
```

In this example, the variable `immutableArray` is declared with `const`, but since it holds a reference to an array, the
array itself can be modified using methods like `push()`. Although the variable remains unchanged, the array's content
is mutable.

4. Deep Immutability:

```javascript
const immutableObject = Object.freeze({name: "John", age: 30});
// immutableObject.name = "Jane"; // Error: Cannot assign to read-only property.
console.log(immutableObject); // Output: { name: "John", age: 30 }
```

In this example, `Object.freeze()` is used to achieve deep immutability. The `immutableObject` is an object whose
properties are also immutable. Any attempt to modify the properties will result in an error.

These examples demonstrate the concepts of mutability and immutability in different scenarios using both primitive and
reference types.