// tree.cpp

#include <iostream>
#include <numeric>
#include <iterator>
#include <map>

using namespace std;

typedef struct {

	char name[10];
	int mid_score;
	int end_score;


} Student;


int main()
{
	int num;
	map<int, Student> map;
	
	cout << "How Many People : ";
	cin >> num;
	
	for(int i = 0; i < num ; i++){
		Student student;
	
		cout << "input Name : ";
		cin >> student.name;
		cout << "input mid score : ";
		cin >> student.mid_score;
		cout << "input end score : ";
		cin >> student.end_score;

		map.emplace(i,student);
		cout << "regist student\n\n";S
	}
	cout << "\n=====================================\n\n";
	for(auto i = begin(map); i!= end(map); ++i){
		cout << "Name : " << i->second.name << "\nmid_score : " << i->second.mid_score << "\nend_score : " <<i->second.end_score<< endl <<endl;
	}
		
	return 0;
}
