#include <iostream>
#include <string>
using namespace std;

class DormitoryStudent {
public:
	void warn() { cout << "©ö??¢®¨¬?¢¯?!\n"; }
};
class UndergraduateStudent {
public:
	void warn() { cout << "?¨¢??¡Æ©¡¡Æ?!\n"; }
};
class UndergraduateDormitoryStudent : public DormitoryStudent, public UndergraduateStudent {

};

int main()
{
	UndergraduateDormitoryStudent uds;
	uds.DormitoryStudent::warn();
	uds.UndergraduateStudent::warn();
	return 0;

}