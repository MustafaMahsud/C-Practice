# Simple Calculator in C

## Description

This project is a simple command-line calculator written in C. It allows the user to perform basic arithmetic operations on two integers using a `switch` statement.

## Features

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`x`)
* Division (`%` in this program)
* Invalid operator detection

## How It Works

1. The user enters an operator (`+`, `-`, `x`, or `%`).
2. The program validates the operator.
3. The user enters two integer values.
4. The selected arithmetic operation is performed.
5. The result is displayed on the screen.

## Example

### Addition

**Input**

```text
Enter the operator you want to perform('+, -, %, x'): +
Enter two numbers: 10,20
```

**Output**

```text
30 is the sum of numbers
```

### Multiplication

**Input**

```text
Enter the operator you want to perform('+, -, %, x'): x
Enter two numbers: 6,7
```

**Output**

```text
42 is the multiplication of numbers
```

### Invalid Operator

**Input**

```text
Enter the operator you want to perform('+, -, %, x'): ^
```

**Output**

```text
Wrong Input!
```

## Concepts Used

* Variables
* User Input (`scanf`)
* Conditional Statements (`if`)
* `switch` Statement
* Arithmetic Operators
* Input Validation

## Technologies

* C Programming Language
* Standard Input/Output Library (`stdio.h`)

## Notes

* The program expects the two numbers to be entered in the format:

  ```text
  10,20
  ```

  because the input format uses `scanf("%d,%d", &num1, &num2);`.

* In this implementation, the `%` character is used to perform **division**. In standard C, division is normally represented by `/`, while `%` is the modulus (remainder) operator.

## Author

Created as a practice project to learn input validation, conditional statements, and the `switch` statement in C.
