// Program to prevent heap based object creation.
// Make the operator new and new[] as private

#include <iostream>
using namespace std;
class PreventObject
{
private:

public:
	PreventObject()
	{
		cout << "Object Created \n";
	}
};
int main()
{
	PreventObject  obj;	//valid
	PreventObject* ptr = new PreventObject();	//valid

	return 0;
}