#include <iostream>
#include <string>

using namespace std;

string Ask();
void Respond(string answer);


int main()
{
	Respond(Ask());
}

string Ask()
{
	string answer;
	cout << "Name something you own." << endl;
	cin >> answer;
	return answer;
}

void Respond(string answer)
{
	cout << "Your " << answer << " is awesome!" << endl;
}