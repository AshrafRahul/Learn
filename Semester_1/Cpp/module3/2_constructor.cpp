#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double cgpa;

        Student(int roll, int cls, double cgpa) {
            this->roll = roll;
            this->cls = cls;
            this->cgpa = cgpa;

            // (*this).roll = roll;
            // (*this).cls = cls;
            // (*this).cgpa = cgpa;

            // roll = r;
            // cls = c;
            // cgpa = g;
        }  
};

int main() {
    Student Rahul(29, 15, 3.89);
    cout << Rahul.roll << " " << Rahul.cls << " " << Rahul.cgpa;

    return 0;
}
