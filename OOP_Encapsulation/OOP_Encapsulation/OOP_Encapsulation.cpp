#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
private:
	string name;
	string ownerName;
	int subscribersNumb;
	list<string> publicVideosName;
public:
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

	//Subscribe method
	void Subsrcibe() {
		subscribersNumb++;
	}
	//Unsubscribe method
	void Unsubsrcibe() {
		if(subscribersNumb > 0)
			subscribersNumb--;
	}
	//Public video
	void PublicNewVideo(string title) {
		publicVideosName.push_back(title);
	}
};


int main()
{

	YouTubeChannel ytChannel("TrainingCamp", "Mauri");

	ytChannel.PublicNewVideo("Video1");
	ytChannel.PublicNewVideo("Video2");
	ytChannel.PublicNewVideo("Video3");

	ytChannel.Subsrcibe();
	ytChannel.Subsrcibe();
	ytChannel.Subsrcibe();
	ytChannel.Unsubsrcibe();

	ytChannel.GetInfo();

	system("pause>0");

}

