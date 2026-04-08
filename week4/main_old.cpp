//main.cpp
//중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
//마지막 평균 결과 점수를 계산하기.
#include <algorithm> // sort()
#include <ios>
#include <iostream>
#include <iomanip> //setprecision()
#include <vector>
#include <string>

using namespace std;

int main(void) {
	//학생의 이름을 묻고 읽음
	cout << "first name: ";
		string name;
		cin >> name;
		cout << "Hello, " << name << "!" << endl;

	 //중간고사와 기말고사 점수를 묻고 읽음
		cout << "midterm + Final grades: ";
		double midterm, final;
		cin >> midterm >> final;

		//과제 점수를 묻고 읽음
		cout << "Enter all HW grades, then EOF: ";
		vector<double> homework;

		//new함수() read_hw() 제작

	//종합 점수를 계산해 생성
		double final_grade = 0; // NEW 계산하는 함수 grade()
		streamsize prec = cout.precision();
		cout << "Final grade: " << setprecision(3) <<
			final_grade << setprecision(prec) << endl;


	return 0;
}