#include "Student.cpp"
#include "Teacher.cpp"
#include<iostream>

int main() {
	Student s("Khanh", 20201234, 23, "Ha Noi", 9.1 , 9.2 );
	s.display();
	Teacher t("Hung", 35, "hanoi", 20000000);
	t.display();
	cout << s.getName();
	return 0;
}