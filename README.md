# FizzBuzz Program

This is a simple C++ console application that implements the classic FizzBuzz problem with some enhancements.

## Features

- Prompts the user to enter one or more positive integers.
- For each entered number, prints:
  - "FizzBuzz" if the number is divisible by both 3 and 5,
  - "Fizz" if divisible by 3,
  - "Buzz" if divisible by 5,
  - or the number itself otherwise.
- Counts and displays the total occurrences of "Fizz", "Buzz", and "FizzBuzz".
- Writes all results and statistics to a file named `fizzbuzz.txt`.

## How to Build

1. Open the project in Visual Studio 2022.
2. Build the solution (default C++14 standard is sufficient).

## How to Run

1. Run the compiled executable.
2. Enter a positive integer when prompted.
3. Choose whether to enter more numbers.
4. After finishing, check the `fizzbuzz.txt` file in your build output directory (e.g., `Debug` or `Release`).

## Notes

- The output file will be created in the same directory as the executable.
- Only positive integers are accepted as input.
