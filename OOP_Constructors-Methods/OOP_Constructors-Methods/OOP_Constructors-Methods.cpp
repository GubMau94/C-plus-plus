#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
public:
	string name;
	string ownerName;
	int subscribersNumb;
	list<string> publicVideosName;

	//Constructor
	YouTubeChannel(string Name, string owner) {
		name = Name;
		ownerName = owner;
		subscribersNumb = 0;
	}

	//Method
	void GetInfo() {
		cout << "Name: " << name << endl;
		cout << "Owner name: " << ownerName << endl;
		cout << "Number of subscribers: " << subscribersNumb << endl;
		cout << "Videos: " << endl;
		for (string videoNames : publicVideosName) {
			cout << videoNames << endl;
		}
		cout << "\n";
	}
};


int main()
{
	//OOP WITHOUT CONSTRUCTORS AND METHODS

	/*YouTubeChannel ytChannel;
	ytChannel.name = "TrainingCamp";
	ytChannel.ownerName = "Mauri";
	ytChannel.subscribersNumb = 1234;
	ytChannel.publicVideosName = { "Video1", "Video2", "Video3" };

	cout << "Name: " << ytChannel.name << endl;
	cout << "Owner name: " << ytChannel.ownerName << endl;
	cout << "Number of subscribers: " << ytChannel.subscribersNumb << endl;
	cout << "Videos: " << endl;
	for (string videoNames : ytChannel.publicVideosName) {
		cout << videoNames << endl;
	}
	cout << endl;

	YouTubeChannel ytChannel2;
	ytChannel2.name = "ExerciseCamp";
	ytChannel2.ownerName = "Tom";
	ytChannel2.subscribersNumb = 12234;
	ytChannel2.publicVideosName = { "ExVideo1", "ExVideo2", "ExVideo3", "Ect..."};

	cout << "Name: " << ytChannel2.name << endl;
	cout << "Owner name: " << ytChannel2.ownerName << endl;
	cout << "Number of subscribers: " << ytChannel2.subscribersNumb << endl;
	cout << "Videos: " << endl;
	for (string videoNames : ytChannel2.publicVideosName) {
		cout << videoNames << endl;
	}
	cout << endl;*/

	//******************************************************************************************


	//OOP WITH CONSTRUCTORS AND METHODS


	YouTubeChannel ytChannel("TrainingCamp", "Mauri");
	YouTubeChannel ytChannel2("ExerciseCamp", "Tom");

	ytChannel.publicVideosName.push_back("Video1");
	ytChannel.publicVideosName.push_back("Video2");
	ytChannel.publicVideosName.push_back("Video3");

	ytChannel.GetInfo();
	ytChannel2.GetInfo();

	//******************************************************************************************


	system("pause>0");

}

