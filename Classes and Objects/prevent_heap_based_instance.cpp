// Program to prevent heap based object creation.
// Make the operator new and new[] as private

#include <iostream>
using namespace std;
class PreventObject
{
private:
	void* operator new(size_t size);
public:
	PreventObject()
	{
		cout << "Object Created \n";
	}
};
int main()
{
	PreventObject  obj;	//valid
	PreventObject* ptr = new PreventObject();	//invalid

	return 0;
}