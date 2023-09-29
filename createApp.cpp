#include <iostream>

using namespace std;

int main(){
	cout << "begin creating...\n";
	system("mkdir app");
	system("mkdir app/controlers");
	system("mkdir app/models");
	system("mkdir app/templates");
	system("mkdir app/static");
	system("touch app/__init__.py");
	system("touch app/controlers/__init__.py");
	system("touch app/models/__init__.py");
	system("touch app/templates/__init__.py");
	system("touch app/static/__init__.py");
	cout << "MODEL MVC CREATE\n";
	return 0;
}
