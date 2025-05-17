# Control Structures in C++

## 1. `if` Statement
### Purpose:
- Executes a block of code **once** if a condition is true.
- Can include `else if` or `else` for multiple branches.

### Syntax:
```cpp
if (condition) { /* code */ }
else if (condition) { /* code */ }
else { /* code */ }
Example:
cpp
if (age >= 18) {
  cout << "Eligible to vote.";
} else {
  cout << "Not eligible.";
}
```
## 2. while Loop
### Purpose:
 - Repeats a block of code as long as a condition is true.
 - Checks the condition before executing the loop body.

### Syntax:
```cpp
while (condition) { /* code */ }
Example:
cpp
int count = 0;
while (count < 5) {
  cout << count << " ";
  count++;
}
// Output: 0 1 2 3 4
```
## 3. switch Statement
### Purpose:
 - Checks the value of a single variable/expression against multiple constant cases.
 - Useful for replacing multiple if-else checks for equality.

### Syntax:
```
cpp
switch (expression) {
  case value1: /* code */ break;
  case value2: /* code */ break;
  default: /* code */
}
Example:
cpp
int day = 3;
switch (day) {
  case 1: cout << "Monday"; break;
  case 2: cout << "Tuesday"; break;
  default: cout << "Invalid day";
}
// Output: Invalid day
```
### Key Differences
| Feature                | `if`                          | `while`                       | `switch`                      |
|------------------------|-------------------------------|-------------------------------|-------------------------------|
| **Purpose**            | Conditional branching         | Looping                       | Multi-way branching           |
| **Condition Check**    | Once                          | Repeatedly                    | Once (for equality checks)    |
| **Use Case**           | Single/multiple conditions    | Repeat code until condition fails | Compare one value to many cases |
| **Syntax Complexity**  | Simple (`if`, `else if`, `else`) | Simple (`while`)             | Requires `case`, `break`, `default` |

## When to Use Which
### if:
- For simple conditions (e.g., age checks).
- When handling non-equality conditions (e.g., ranges like x > 5 && x < 10).

### while:
- For repeating tasks (e.g., user input validation, game loops).

### switch:
- For equality checks on a single variable (e.g., menu options, day-of-week logic).
- Let me know if you need further clarification! 😊
