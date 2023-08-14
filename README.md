# Time Slot Conflict Checker



This program is designed to efficiently check for conflicts between multiple time slots. Whether you're managing a busy schedule or coordinating events, this C++ tool will help you identify overlapping time ranges.

## Table of Contents

- [Introduction](#introduction)
- [Input](#input)
- [Output](#output)
- [Examples](#examples)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)


## Introduction

When dealing with a series of events or appointments, it's crucial to ensure that no time slots overlap. This program takes in multiple time ranges and determines whether there are any conflicts in the schedule.

## Input

The program expects input in the following format:
- Four or more lines, each representing a time slot in the format "HH:MM - HH:MM".

## Output

The program provides one of two outputs:
- If there are no conflicts between the given time slots, it will output "OK".
- If there are conflicting time slots, it will output "Conflicted".

## Examples

Example 1:
```
Input:
09:00-10:00
10:00-12:00
13:00-18:30
18:31-19:00

Output:
OK
```

Example 2:
```
Input:
10:00-15:00
16:00-18:33
18:18-18:59
20:00-21:25

Output:
Conflicted
```

## Getting Started

To run the program on your local machine, follow these steps:

1. Clone this repository:

```
git clone https://github.com/aghdasim/Time-Slot-Conflict-Checker.git
```

2. Compile the C++ program:

```
g++ main.cpp -o conflict_checker
```

## Usage

Run the compiled program and provide the time slot information as input. The program will analyze the provided time slots and give you an output indicating whether there are any conflicts.

Example usage:

```
./conflict_checker
Please enter the time slots for your schedule: (please use HH:MM-HH:MM format)
09:00-10:00
10:00-12:00
13:00-18:30
18:31-19:00

Output:
OK
```

## Contributing

Contributions are welcome! If you encounter any issues or have ideas for improvements, please open an issue or create a pull request in this repository. Your collaboration is highly appreciated.

