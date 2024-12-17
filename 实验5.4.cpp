#include<iostream>
using namespace std;

class Student {
private:
    int id;
    double score;

public:
    Student(int i, double s) : id(i), score(s) {}
    int getId() const { return id; }

    double getScore() const { return score; }
};
void max(Student* students, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (students[i].getScore() > students[maxIndex].getScore()) {
            maxIndex = i;
        }
    }
    cout << students[maxIndex].getId() << endl;
}

int main() {
    Student students[5] = {
        Student(1, 85.0),
        Student(2, 90.5),
        Student(3, 78.0),
        Student(4, 92.0),
        Student(5, 88.5)
    };

    max(students, 5);

    return 0;
}
