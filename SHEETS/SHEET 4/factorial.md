# Factorial of a Number

## Definition  
The **factorial** of a number is the product of all integers from **1** up to that number.  
- Factorials are defined **only for positive integers**.  
- The factorial of a **negative number** does not exist.  
- The factorial of **0** is **1**.  
## Example  
The factorial of a positive number \( n \), say **5**, is denoted by \( 5! \) and calculated as:  
```
\[
5! = 1 \times 2 \times 3 \times 4 \times 5 = 120
\]
```
## Mathematical Logic  
For any positive integer \( n \):  
```
\[
n! = 1 \times 2 \times 3 \times \ldots \times n
\]  

Special cases:  
\[
0! = 1 \quad \text{and} \quad 1! = 1
\]
```
## Program Overview  
A program to compute the factorial of a number would:  
1. Prompt the user to enter a **positive integer**.  
2. Compute the factorial using iterative or recursive logic.  
3. Display the result on the screen.  

**Example Execution**:  
```plaintext
Enter a positive integer: 5  
5! = 120  
```
```
#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
```
# Factorial Calculation Program (Using a `for` Loop)

## Overview
This program calculates the factorial of a positive integer entered by the user. Key features:
- **Error handling** for negative numbers.
- Uses a `long` type variable to handle large factorial values.
- Demonstrates loop execution step-by-step.

---

## Features
### 1. Input Validation
- If the user enters a **negative number**, an error message is displayed.

### 2. Factorial Calculation
- Uses a `for` loop to multiply the sequence `1 * 2 * 3 * ... * n`.
- Declares `fact` as `long` to accommodate large values.

---

## Code Example (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long fact = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error! Factorial of a negative number does not exist.";
    } else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact;
    }
    return 0;
}
```
| Loop Condition (i <= 4) | fact *= i (Calculation) | Result (fact)     |
|-------------------------|-------------------------|-------------------|
| `1 <= 4` (True)         | `1 * 1`                 | 1                 |
| `2 <= 4` (True)         | `1 * 2`                 | 2                 |
| `3 <= 4` (True)         | `2 * 3`                 | 6                 |
| `4 <= 4` (True)         | `6 * 4`                 | 24                |
| `5 <= 4` (False)        | Loop terminates.        | Final result: 24  |
