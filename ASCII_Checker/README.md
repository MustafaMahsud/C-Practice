# Character Type Checker

## Objective

Write a C program that reads a single character from the user and determines whether it is:

* An uppercase letter
* A lowercase letter
* A digit
* A special character

## Concepts Practiced

* Character data type (`char`)
* User input using `scanf()`
* Conditional statements (`if`, `else if`, `else`)
* Character comparison using ASCII ranges

## Example

### Input

```text
Enter input: A
```

### Output

```text
You entered a capital letter!
```

### Input

```text
Enter input: m
```

### Output

```text
You entered a small letter!
```

### Input

```text
Enter input: 7
```

### Output

```text
You entered a digit!
```

### Input

```text
Enter input: @
```

### Output

```text
You entered a special character!
```

## How to Compile

```bash
gcc main.c -o character_checker
```

## How to Run

### Windows

```bash
character_checker.exe
```

### Linux/macOS

```bash
./character_checker
```

## File Structure

```text
character-type-checker/
├── main.c
└── README.md
```

## Author

Created by Mustafa Mahsud as part of my C programming learning journey.
