# Leap Year Checker in C

## Description

This program determines whether a given year is a leap year according to the Gregorian calendar.

A leap year is:

* Divisible by **4**, and
* Not divisible by **100**, unless it is also divisible by **400**.

## Features

* Accepts a year as user input.
* Checks whether the year is a leap year.
* Displays the appropriate message.

## How It Works

The program performs the following checks:

1. If the year is divisible by 4:

   * If the year is divisible by 100:

     * If the year is also divisible by 400, it is a leap year.
     * Otherwise, it is not a leap year.
   * If the year is not divisible by 100, it is a leap year.
2. If the year is not divisible by 4, it is not a leap year.

## Example

**Input:**

```
Enter the year you want to check: 2024
```

**Output:**

```
2024 is a leap year!
```

**Input:**

```
Enter the year you want to check: 1900
```

**Output:**

```
1900 is not a leap year!
```

**Input:**

```
Enter the year you want to check: 2000
```

**Output:**

```
2000 is a leap year!
```

## Technologies Used

* C Programming Language
* Standard Input/Output Library (`stdio.h`)

## Author

Created as a practice project to understand conditional statements (`if`, `else`) and nested decision-making in C.
