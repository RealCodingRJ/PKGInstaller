#include <iostream>

using namespace std;

template<class T>

class Command {

private:

	T cmd;

public:

	T getCommandName(T nameCommand) {

		cout << "Command Name: " << nameCommand << endl;
		return nameCommand;
	}


};

bool isReady = false;

int main() {

	std::string typeApp;

	Command<std::string> command = Command<std::string>();


	cout << "Enter Kind Of Application: " << endl;
	cin >> typeApp;

	while (!isReady) {


		if (typeApp == "") {
			break;
		}

		if (typeApp == "/React") {

			system("npx nano-react-app myapp");
			command.getCommandName("npx nano-react-app myapp");

			isReady = true;
		}

		if (typeApp == "/Next") {

			system("npx create-next-app myapp");
			command.getCommandName("npx create-next-app myapp");

			isReady = true;
		}

		isReady = true;


	}

}