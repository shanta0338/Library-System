# Personal Library Management System

A console-based library management system written in C that provides an interactive interface for browsing books, research papers, journals, newspapers, and movies.

## Features

- **Secure Login**: Password-protected access with a 4-digit PIN
- **Interactive Menu System**: Easy-to-navigate menu with multiple categories
- **Colorful Interface**: ANSI color codes for enhanced visual experience
- **Multiple Categories**:
  - Books collection with descriptions
  - Research papers on various topics
  - Academic journals
  - Newspaper listings
  - Movie collection with streaming option
  - About section

## System Requirements

- **Operating System**: Windows (uses `conio.h` and `system("cls")`)
- **Compiler**: GCC or any C compiler supporting standard libraries
- **Dependencies**: 
  - `stdio.h` - Standard input/output
  - `stdlib.h` - Standard library functions
  - `unistd.h` - UNIX standard library (for sleep function)
  - `conio.h` - Console input/output (Windows specific)

## Installation & Compilation

1. **Clone or download** the source code
2. **Compile** using GCC:
   ```bash
   gcc main.c -o library_system
   ```
3. **Run** the executable:
   ```bash
   ./library_system
   ```

## Usage

### Login
- Enter the 4-digit password: `1183`
- System will verify credentials and grant access

### Navigation
The main menu offers 6 options:
1. **List of Books** - Browse 10 curated books with descriptions
2. **Research Papers** - Access 7 research topics
3. **Journals** - View 4 academic journals
4. **Newspapers** - Browse 3 newspaper listings
5. **About** - Information about the system
6. **Movies** - Browse movie collection with streaming option

### Special Features
- **Auto-clearing screen** after each selection
- **Animated text** with sleep delays for better UX
- **Color-coded output** for different sections
- **Loop-back menu** system for continuous browsing
- **Secure logout** option (press 0)

## Content Overview

### Books Collection
- Steve Jobs Biography
- 12 Rules for Life
- Atomic Habits
- Leaders Eat Last
- Start with Why
- Psychology of Money
- Theory of Everything
- Deep Work
- The Infinite Game
- The Alchemist

### Research Papers
- Coronavirus research
- Alcohol studies
- AI & Machine Learning
- Inflation analysis
- Quantum Computing
- Smoking research

### Academic Journals
- Science Magazine
- Nature
- International Journal of Computer Vision
- ACM Computer Survey

### Movies
- John Wick series
- DC movies collection
- Marvel Cinematic Universe films

## User ID Information

- **System ID**: 222-35-1183
- **Password**: 1183
- **Version**: Library Version 23.3
- **Developer**: Student of Daffodil International University

## Technical Details

### Key Functions
- `login()` - Handles authentication
- `library()` - Main menu navigation
- `book()` - Books listing
- `research()` - Research papers
- `journals()` - Academic journals
- `newspaper()` - Newspaper listings
- `about()` - System information
- `movies()` - Movie collection with streaming

### Security Features
- Password verification system
- Session timeout on invalid credentials
- Access control with user identification

## Troubleshooting

### Common Issues
1. **Compilation errors**: Ensure all required headers are available
2. **Screen clearing issues**: `system("cls")` is Windows-specific
3. **Sleep function**: May need adjustment for different systems
4. **Color codes**: ANSI codes may not work on all terminals

### Platform Compatibility
- **Windows**: Full compatibility
- **Linux/Mac**: May require modifications to `conio.h` dependencies and `system("cls")` calls

## Future Enhancements

- [ ] File-based data storage
- [ ] Multiple user support
- [ ] Search functionality
- [ ] Add/remove content features
- [ ] Cross-platform compatibility
- [ ] Database integration

