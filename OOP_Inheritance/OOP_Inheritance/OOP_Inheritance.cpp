#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
private:
	string name;
	int subscribersNumb;
	list<string> publicVideosName;
protected:
	string ownerName;
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
		if (subscribersNumb > 0)
			subscribersNumb--;
	}
	//Public video
	void PublicNewVideo(string title) {
		publicVideosName.push_back(title);
	}
};

class CookingYouTubeChannel: public YouTubeChannel {
public:
	CookingYouTubeChannel(string Name, string owner) :YouTubeChannel(Name, owner) {

	}
	void Practice() {
		cout << ownerName << " is doing a lot of practice" << endl;
	}
};


int main()
{
	CookingYouTubeChannel cookingYtChannel("Tom's kitchen", "Tom");
	CookingYouTubeChannel cookingYtChannel2("Ken's kitchen", "Ken");
	cookingYtChannel.PublicNewVideo("Cooking video");
	cookingYtChannel.GetInfo();

	cookingYtChannel.Practice();
	cookingYtChannel2.Practice();

	system("pause>0");
}

