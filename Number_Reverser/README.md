# Reverse a Number in C

## Description
This program reverses the digits of an integer entered by the user. It uses a `while` loop to extract each digit and constructs the reversed number.

## Features
- Accepts an integer as input.
- Reverses the digits of the number.
- Displays the reversed number.
- Uses basic arithmetic operations (`%` and `/`).

## Code Explanation
1. The user enters an integer.
2. The program repeatedly:
   - Extracts the last digit using the modulus operator (`% 10`).
   - Appends the digit to the reversed number.
   - Removes the last digit from the original number using integer division (`/ 10`).
3. The loop continues until the original number becomes `0`.
4. The reversed number is displayed.

## Example

### Input
```
Enter a number: 12345
```

### Output
```
Reversed number: 54321
```

## How to Compile and Run

### Compile
```bash
gcc reverse_number.c -o reverse_number
```

### Run
```bash
./reverse_number
```

## Requirements
- GCC or any C compiler
- C Standard Library (`stdio.h`)

## Algorithm
1. Read an integer from the user.
2. Initialize `new_num` to `0`.
3. While the number is not `0`:
   - Find the last digit using `% 10`.
   - Append it to `new_num`.
   - Remove the last digit from the original number.
4. Print the reversed number.

## Time Complexity
- **O(n)**, where `n` is the number of digits in the input number.

## Space Complexity
- **O(1)**, as the program uses a constant amount of extra memory.

## Author
Your Name