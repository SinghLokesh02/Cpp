#include"File1.cpp"
#include"File2.cpp"


int main()
{
    // Creating object of Student class from File1
    cout << "Student 1 Details: " << endl;
    Student s1;
    s1.Set_data1("John", 25,34);
    s1.display();

    // Creating object of Student class from File2
    cout << "\nStudent 2 Details: " << endl;
    Student s2;
    s2.Set_data("Ravi", 30);
    s2.display();

    return 0;
}