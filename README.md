# 🎓 Student Card-Grade Management System

A fully functional **C++ console application** for managing student records using **Object-Oriented Programming (OOP)** principles and a **singly linked list**.
Designed for beginner-to-intermediate C++ learners, this project demonstrates **classes, structs, getters/setters, dynamic memory allocation, and file I/O** — all wrapped in a clean console interface.

---

## 📌 Features

* **Add Student** — Store student number, name, and final mark.
* **View Students** — Display all students in a well-formatted list.
* **Search Student** — Find a student by their student number.
* **Edit Student** — Update existing student details.
* **Delete Student** — Remove a student record safely from the linked list.
* **Clear Console & Padding** — Custom formatting functions for a neat UI.
* **Data Validation** — Prevents invalid input entries.
* **Dynamic Memory Management** — Avoids memory leaks.
* **Linked List Implementation** — Nodes store student data and pointers to the next node.

---

## 🛠 Technologies Used

* **C++17**
* **Singly Linked List**
* **Object-Oriented Programming**
* **Standard Template Library (STL)** (where applicable)
* **File I/O** *(optional extension)*

---

## 📂 Project Structure

```
📁 StudentCardGradeManagementSystem
│── main.cpp                 # Entry point
│── StudentNode.h            # Struct definition for student node
│── StudentList.h            # Class definition
│── StudentList.cpp          # Class implementation
│── utils.h / utils.cpp      # Helper functions (clearScreen, padding, etc.)
│── README.md                # Project documentation
```

---

## 🚀 Getting Started

### 1️⃣ Clone the repository

```bash
git clone https://github.com/<your-username>/student-card-grade-management-system.git
cd student-card-grade-management-system
```

### 2️⃣ Compile the project

Using g++:

```bash
g++ main.cpp StudentList.cpp utils.cpp -o StudentCardSystem
```

Using MinGW (Windows):

```bash
g++ main.cpp StudentList.cpp utils.cpp -o StudentCardSystem.exe
```

### 3️⃣ Run the program

```bash
./StudentCardSystem
```

or on Windows:

```bash
StudentCardSystem.exe
```

---

## 📸 Example Output

```
::::::::::::::: STUDENT LIST :::::::::::::::
STUDENT NO   |   NAME          |   MARK
--------------------------------------------
2023001      |   John Doe      |   78
2023002      |   Alice Smith   |   85
--------------------------------------------
```

---

## 🧠 Learning Goals

This project teaches you how to:

* Build a **linked list** from scratch.
* Separate **class declarations** and **implementations** into `.h` and `.cpp` files.
* Apply **getters and setters** for encapsulation.
* Create **search, edit, and delete** functions with pointer manipulation.
* Use **custom console formatting** for professional-looking output.

---

## 📌 Future Improvements

* Save and load student data from a file (persistence).
* Sort students by mark or name.
* Add GPA calculation.
* Implement menu navigation with arrow keys.

---

## 👨‍💻 Author

**GlitcLord (Boitumelo Clement Mkhondo)**
*The Master of C++ OOP and Linked List Wizardry.*

---
