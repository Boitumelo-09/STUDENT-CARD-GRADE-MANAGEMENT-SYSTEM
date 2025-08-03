#include "StudentList.h"

StudentNode::StudentNode(Student studentInfo, StudentNode* next) {
    this->studentInfo = studentInfo;
    this->next = nullptr;
}

StudentList::StudentList() {
    head = nullptr;
}

StudentList::~StudentList() {
    StudentNode* current = head;
    while (current != nullptr) {
        StudentNode* temp = current;
        current = current->next;
        delete temp;  // Frees memory
    }
}

void StudentList::addStudent(const Student& student) {
    StudentNode* newNode = new StudentNode(student); 

    if (head == nullptr) {
        head = newNode;
    }
    else {
        StudentNode* current = head;
        while (current->next != nullptr) {
            current = current->next; 
        }
        current->next = newNode; 
    }
}
void StudentList::displayAll() const {
    if (head == nullptr) {
        std::cout << "No students in the list.\n";
        return;
    }

    StudentNode* current = head;
    while (current != nullptr) {
        current->data.displayReport(); 
        std::cout << "---------------------\n";
        current = current->next;
    }
}
