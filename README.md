# Library System

A console-based Library Management System developed in C that provides an interactive menu-driven interface for accessing books, research papers, journals, newspapers, and entertainment content. The application uses a simple authentication system and terminal-based navigation to simulate a personal digital library.

## Features

* User login authentication
* Interactive menu system
* Book collection section
* Research paper topics section
* Journal collection section
* Newspaper information section
* About section
* Movie collection section
* Console animations and coloured terminal output
* Session logout functionality

## Technologies Used

* C Programming Language
* Standard C Libraries
* Console-based User Interface

Libraries used:

```c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
```

## System Workflow

```text
Start Program
      ↓
 Login Authentication
      ↓
 Library Main Menu
      ↓
 ┌────────────────────┐
 │ 1. Books           │
 │ 2. Research Papers │
 │ 3. Journals        │
 │ 4. Newspapers      │
 │ 5. About           │
 │ 6. Movies          │
 │ 0. Logout          │
 └────────────────────┘
      ↓
 Display Selected Content
      ↓
 Return to Main Menu
```

## Installation and Execution

### Clone the repository

```bash
git clone https://github.com/shanta0338/Library-System.git
```

### Navigate to project directory

```bash
cd Library-System
```

### Compile the program

Using GCC:

```bash
gcc library.c -o library
```

### Run the application

Windows:

```bash
library.exe
```

Linux:

```bash
./library
```

## Default Login Credentials

Password:

```text
1183
```

## Project Structure

```text
Library-System/
│
├── library.c
├── README.md
```

## Sample Functionalities

### Books

* Steve Jobs
* Atomic Habits
* Deep Work
* The Alchemist
* Psychology of Money
* Start With Why

### Research Topics

* Coronavirus
* Artificial Intelligence and Machine Learning
* Quantum Computing
* Inflation
* Smoking

### Journals

* Science
* Nature
* International Journal of Computer Vision
* ACM Computing Surveys

### Newspapers

* The Daily Star
* The Daily Ittefaq
* Prothom Alo

### Movies

* John Wick Series
* DC Movies
* Marvel Movies

## Future Improvements

* Add file handling for permanent storage
* Add book borrowing and return functionality
* Add user registration system
* Add search functionality
* Add database integration
* Add graphical user interface
* Add recommendation system
* Improve security with encrypted passwords

## Author

Shanta
BSc in Software Engineering
Daffodil International University

## License

This project is open source and available under the MIT License.
