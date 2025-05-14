#include <iostream>
#include <map>

using namespace std;

enum Commands {
	REACT,
	NEXT,
};

template<class T>

// Template like Generic in Java or Any Language that is OOP

class Command {

private:
	
	//Private Constructor
	T cmd;


public:

	// Public Construcutors
	
	T getCommandName(T nameCommand) {

		cout << "Command Name: " << nameCommand << endl;
		return nameCommand;
	}


};

bool isReady = false;

std::map<Commands, string> getTypeProject = { {
	REACT, "/React",
},
{
	NEXT, "/Next"
};

string Type(Commands command) {
	return getTypeProject[command];
}

int main() {

	std::string typeApp;

	Command<std::string> command = Command<std::string>();


	cout << "Enter Kind Of Application: " << endl;
	cin >> typeApp;



	Commands commandOne = REACT;
	Commands commandTwo = NEXT;


	while (!isReady) {


		if (typeApp == "") {
			break;
		}

		if (typeApp == Type(commandOne)) {

			system("npx nano-react-app myapp");
			command.getCommandName("npx nano-react-app myapp");

			isReady = true;
		}

		if (typeApp == Type(commandTwo)) {

			std::string cmd = Type(commandTwo);

			system("npx create-next-app myapp");

			command.getCommandName("npx create-next-app myapp");

			isReady = true;
		}

		isReady = true;


	}

}