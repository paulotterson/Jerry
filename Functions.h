#pragma once
class Functions
{
	{
		int usr_in;
		//This sets up the fateful story of Jerry
		std::cout << "Jerry wakes up in a field unaware of how he got there.\n";
		//This provides options on what Jerrry should do. 
		std::cout << "Should he go North or East?\n";
		std::cout << "Press 1 for North or 2 for East.\n";
		cin >> usr_in;
		cout << "User Entered " << usr_in << endl;
		if (usr_in == 1) {
			std::cout << "Jerry starts moving North and runs into a talking cat!\n";
			std::cout << "Press 3 to pet the cat or 4 to talk to the cat.\n";
			cin >> usr_in;
			cout << "User Entered " << usr_in << endl;
			if (usr_in == 3) {
				std::cout << "Jerry tried to pet the cat but was scratched and the cat cussed him out! Jerry later died of an infection.\n";
			}
			if (usr_in == 4) {
				std::cout << "Jerry talked to the cat and followed him to safety.\n";
			}
		}
		if (usr_in == 2) {
			std::cout << "Jerry starts moving East and finds a Cow laying in the grass.\n";
			std::cout << "Press 5 to hang out with the cow or 6 to collect steaks.\n";
			cin >> usr_in;
			cout << "User Entered " << usr_in << endl;
			if (usr_in == 5) {
				std::cout << "Jerry laid in the grass with the cow and forgot all about his worries.\n";
			}
			if (usr_in == 6) {
				std::cout << "Jerry succesfully harvested steaks from the cow and had the worlds best barbecue in the field.\n";
			}

		}

	}

};

