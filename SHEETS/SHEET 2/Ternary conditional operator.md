# Ternary Conditional Operator

In computer programming, the **ternary conditional operator** is a ternary operator that is part of the syntax for basic conditional expressions in several programming languages. It is commonly referred to as:  
- **Conditional operator**  
- **Conditional expression**  
- **Ternary if**  
- **Inline if** (abbreviated `iif`).  

## Syntax and Usage  
An expression of the form `a ? b : c` evaluates to `b` if the value of `a` is `true`, and otherwise to `c`. It can be read aloud as **"if `a` then `b` otherwise `c`**.  

### Variations in Syntax  
- **Common syntax**: `a ? b : c` (used in C, C++, Java, JavaScript, etc.).  
- **Raku**: `a ?? b !! c` (avoids confusion with infix operators `?` and `!`).  
- **Visual Basic .NET**: `If(a, b, c)`.  

## Historical Context  
The operator originates from **CPL**, where the equivalent syntax for `e1 ? e2 : e3` was written as `e1 → e2, e3`[^1][^2].  

## Terminology  
Although many ternary operators are possible, the conditional operator is so common (and other ternary operators so rare) that it is often referred to as **"the ternary operator"**.  
