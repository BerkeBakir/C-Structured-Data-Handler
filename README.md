# C-Structured-Data-Handler

A robust, console-driven record management engine developed in C. This project demonstrates foundational software engineering principles including structured data modeling, linear searching algorithms, and manual memory index management.

## 🛠️ Engineering Highlights
- **Custom Data Structures:** Utilizes `struct` definitions to encapsulate complex student profiles, maintaining high data cohesion.
- **Record Shifting Logic:** Implements an efficient deletion mechanism by shifting subsequent records in memory to ensure continuous data storage (Array Compression).
- **Multi-Criteria Querying:** Features multiple search entry points (Roll ID, String-based Name Matching, and Relational Course IDs) using iterative search logic.
- **State Management:** Tracks global system state (current index vs. maximum capacity) to prevent buffer overflows and ensure safe data entry.

## 🔑 Core Functionalities
- **Creation (CRUD):** Validates and registers new entities into the static database.
- **Search Engine:** 
  - *Roll Number Lookup:* Direct integer comparison.
  - *String Search:* Case-sensitive string matching via `strcmp`.
  - *Relational Filter:* Identifies all records associated with a specific course ID.
- **Update Logic:** Field-specific record modification without compromising the entire data block.
- **Deletion:** Logical removal of records followed by array compression to maintain memory order.

## 🚀 Technical Specifications
- **Language:** C (Standard C11/C17)
- **Data Model:** Array of Structs (Static memory allocation)
- **Search Complexity:** O(n) for linear scans.
- **System Logic:** Modular function design for high maintainability and clean code standards.

## 📂 Installation and Usage
### Prerequisites
Ensure you have a standard C compiler (GCC, Clang, or MSVC) installed on your system.

### Compilation
Use the following command to build the optimized binary:
```bash
gcc -o record_manager main.c
