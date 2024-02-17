#include<iostream>
#include<map>
#include <stdlib.h> 
#include <conio.h>
#include <windows.h> 
#include "tinyexpr.h"
using namespace std;
int availableusrs = 0;
int userselected = 0;
string inputCharacter = " >";
//const char* users[10] = {"defaultUser", "secondUser", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
//string user = "defaultUser";
class UserClass {
public:
	//usrdata
	string name, color = "color 0F", inputchar = ">", password;
};
void getSysinfo(bool isStart, string username) {
	if (!isStart) {
		SYSTEM_INFO siSysInfo;
		GetSystemInfo(&siSysInfo);
		printf("Hardware information: \n");
		printf("  dwOemId: %u\n", siSysInfo.dwOemId);
		printf("  dwNumberOfProcessors: %u\n",
			siSysInfo.dwNumberOfProcessors);
		printf("  dwPageSize: %u\n", siSysInfo.dwPageSize);
		printf("  dwProcessorType: %u\n", siSysInfo.dwProcessorType);
		printf("  lpMinimumApplicationAddress: %lx\n",
			siSysInfo.lpMinimumApplicationAddress);
		printf("  lpMaximumApplicationAddress: %lx\n",
			siSysInfo.lpMaximumApplicationAddress);
		printf("  dwActiveProcessorMask: %u\n",
			siSysInfo.dwActiveProcessorMask);
		cout << "  wProcessorLevel: " << siSysInfo.wProcessorLevel << "\n";
		cout << "  wProcessorRevision: " << siSysInfo.wProcessorRevision << "\n";
		cout << "  dwAllocationGranularity: " << siSysInfo.dwAllocationGranularity << "\n";
		cout << "  wProcessorArchitecture: " << siSysInfo.wProcessorArchitecture << "\n";
		cout << "  wReserved: " << siSysInfo.wReserved << "\n";
		//cout << "dwProcessorType: " << siSysInfo.dwProcessorType << "\n";
	}
}
void helpinfo(bool isStart, string username) {
	if (!isStart) {
		cout << "sett  Settings comand" << endl;
		cout << "calc  Open calculator" << endl;
		cout << "clear  Clears the screen" << endl;
		cout << "exit  Closes the OS" << endl;
		cout << "restart  Restarts the OS" << endl;
		cout << "pause  Pauses the OS" << endl;
		cout << endl;
	}
	else {
		cout << "function helpinfo() is loaded" << endl;
	}
}
UserClass defaultUser;
UserClass User2;
UserClass User3;
UserClass User4;
UserClass User5;
UserClass User6;
UserClass User7;
UserClass User8;
UserClass User9;
UserClass User10;
UserClass users[10] = { defaultUser, User2, User3, User4, User5, User6, User7, User8, User9, User10 };


void secretlogo(bool isStart, string username) {
	cout << u8"................................................-=+**######**+=-..........................\n";
	cout << u8"............................................:-+*##**************##*+-:....................\n";
	cout << u8"..........................................:+##**********************#*=:..................\n";
	cout << u8"........................................:+##*********************#######=:................\n";
	cout << u8"......................................:=##********************#####**##*##-...............\n";
	cout << u8".....................................:*#**************#*****#%#*******#*#%%-..............\n";
	cout << u8"....................................:##***********#**##*****#%##%%%#**#*%%%-..............\n";
	cout << u8"...................................:##************####********#%%%%%#*#*%%*-..:...........\n";
	cout << u8"..............................:-+**##*****************#*+=******##%%%*###*+=..:...........\n";
	cout << u8"..............................:#****##***************+==++=+*******###***+==..:...........\n";
	cout << u8"..............................:-+++##***************++*+=+*+-+****#*=..***-...............\n";
	cout << u8".................................:=#*****************+=+**+-*####=...-**#-.:..............\n";
	cout << u8"....=+*****++=.................-#***********************=******-...+**#=..................\n";
	cout << u8"..-*#####***####*=:.............-#*******************************=..:=***#=...............\n";
	cout << u8":=#***#############=:..........:##*****************************************#+.............\n";
	cout << u8"-#***##***##****##*#*:........:*#******************************************#+.............\n";
	cout << u8"*#**##***##****##***#*:.......=#***********************##****+=----=+**#***##:............\n";
	cout << u8"######################=......:#*************************#*+=----------=#****#*:...........\n";
	cout << u8"%**#****#*****#****##*#:....:*#*************************#*------------+#*****#*:..........\n";
	cout << u8"###****#*****#*****#**#*:...-#********************#******#+----------=#******##=..........\n";
	cout << u8"+#****#*****#*****#***#%:..:*#***######***********#*******#+---------********#*#:.........\n";
	cout << u8"-#***#*****#*****##**###+:.-#******########*******##*******#*=------+#******##*#*:........\n";
	cout << u8":+###################*#*#-:+#*************###******##*********+----=#***##**=***#-........\n";
	cout << u8".:##*****##*****#****##*##:#****************###*****=+****#***#=---=#***#=---=**#*:.......\n";
	cout << u8"..:#****##*****##****#***###******************##***=------##*##=----+####+----***#-.......\n";
	cout << u8"...:##**#******#*****#***###*******************###*-------*####------+##*=----+**#+.......\n";
	cout << u8"....:*###*****##***#########********************##*--------=*+=---------------=***#:......\n";
	cout << u8".....:=##*#########*#****###*********************##---------------------------=*##%*:.....\n";
	cout << u8".......:*#***##*****#****#*#**********************#***-----==++--------------=*###%=-=+++-\n";
	cout << u8"........:-*#*#******#****#*##********************####+-=+*###+-------------=*#**#####*#+:.\n";
	cout << u8"..........:-+##****##**#######******************##**#**#*##+=+++=---------=##*******##*+=:\n";
	cout << u8".............:=+#######**#***##****************##***##**######*=---------=#*********##*=-:\n";
	cout << u8"................:-=*###**#****##***************%**********#*=------------#*******#*+-:....\n";
	cout << u8".....................-=+**########***********#%********#*=-------------=#****##+-:........\n";
	cout << u8".............................:--=+###********%******##=--==========----*###+-:............\n";
	cout << u8".....................................-=++**#####*****#*----...:...........................\n";
	cout << u8"..............................................=##**##-....................................\n";
	cout << "powered by c++ (if I will make it as an actual OS it will be also powered by C#)\n";
	Sleep(5000);
	system("cls");
	system("cls");
	cout << "bobrOS ver:0.1 made by diasbi" << endl;
}
void clear(bool isStart, string username) {
	if (!isStart) {
		system("cls");
		cout << "bobrOS ver:0.1 made by diasbi" << endl;
	}
	else {
		cout << "function clear() is loaded" << endl;
	}
}

void settings(bool isStart, string username) {
	if (!isStart) {
		cout << "Settings\n-------------------------------------------------\nTo change bacroung and foreground color, press 1 |\nTo change languge, press 2	        	 |\nTo change user info, press 3                     |\nTo exit, press esc	        		 |\n-------------------------------------------------\n";
		int ch;
		ch = _getch();
		if (ch == 27)return;
		if (ch == 49) {
			string bgclr, fgclr;
			cout << "0 - black\n1 - blue\n2 - green\n3 - blue\n4 - red\n5 - purple\n6 - yellow\n7 - white\n8 - grey\n9 - yellow - blue\nA - light green\nB - light blue\nC - light red\nE - light yellow\nF - bright white\n";
			cout << "Enter background color: ";
			cin >> bgclr;
			cout << "Enter foreground color: ";
			cin >> fgclr;
			string chose = bgclr + fgclr;
			string finalclr = "color " + chose;
			users[userselected].color = finalclr;
			system(finalclr.c_str());
		}
		if (ch == 50) {

			cout << "change";
		}
		if (ch == 51) {
			cout << "1 - Change username\n2 - Change input character\n";
			int chd;
			chd = _getch();
			//user = "r";
			//return username;
			if (chd == 49) {
				cout << "Enter new username: ";
				cin >> users[userselected].name;
				username = users[userselected].name;
				cout << "Changed username to " << users[userselected].name;
			}
			if (chd == 50) {
				cout << "Enter new input character: ";
				cin >> users[userselected].inputchar;
				cout << "\nDone!";
			}
		}
		cout << endl;
	}
	else {
		cout << "function settings() is loaded" << endl;
	}
}
void calc(bool isStart, string username) {
	bool runtime = true;
	if (!isStart) {
		string calcStr;
		cout << "c cos()\ns sin()\n+ plus\n- minus\n/ divide \n* multiply\n) - close sin or cos\n";
		//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		//SetConsoleTextAttribute(hConsole, 97);
		cout << "(ESC to exit)\n";
		while (runtime) {
			int ch;
			ch = _getch();
			switch (ch) {
			case 27: return; break;
			case 99: calcStr = calcStr + "cos("; cout << "cos("; break;
			case 115: calcStr = calcStr + "sin("; cout << "sin("; break;
			case 43: calcStr = calcStr + "+"; cout << "+";  break;
			case 45: calcStr = calcStr + "-"; cout << "-"; break;
			case 47: calcStr = calcStr + "/"; cout << "/"; break;
			case 42: calcStr = calcStr + "*"; cout << "*"; break;
			case 41: calcStr = calcStr + ")"; cout << ")"; break;
			case 49: calcStr = calcStr + "1"; cout << "1"; break;
			case 50: calcStr = calcStr + "2"; cout << "2"; break;
			case 51: calcStr = calcStr + "3"; cout << "3"; break;
			case 52: calcStr = calcStr + "4"; cout << "4"; break;
			case 53: calcStr = calcStr + "5"; cout << "5"; break;
			case 54: calcStr = calcStr + "6"; cout << "6"; break;
			case 55: calcStr = calcStr + "7"; cout << "7"; break;
			case 56: calcStr = calcStr + "8"; cout << "8"; break;
			case 57: calcStr = calcStr + "9"; cout << "9"; break;
			case 48: calcStr = calcStr + "0"; cout << "0"; break;
			case 13:
				if (calcStr != "") {
					cout << endl;
					if (!isnan(te_interp(calcStr.c_str(), 0))) {
						cout << "Result: " << te_interp(calcStr.c_str(), 0) << endl;
						break;
					}
					cout << "An error occurred in the calculations" << endl;
					calcStr = ""; break;
				}
				cout << "An empty expression cannot be calculated" << endl;
				break;
			}
		}
	}
	else {
		cout << "function calc() is loaded" << endl;
	}
}
void pause(bool isStart, string username) {
	if (!isStart) {
		system("pause");
	}
	else {
		cout << "function pauses() is loaded" << endl;
	}
}
int selectusrs() {
	system("color 0F");
	int ch = 0;
	int slcusr = 0;
	while (ch != 13) {
		availableusrs = 0;
		cout << "SELECT USER:\n\n";
		for (int usr = 0; usr < 10; usr++) {
			if (users[usr].name != "") {
				cout << users[usr].name;
				if (slcusr == usr) {
					cout << " <";
				}
				//printf("  \nThe Enter character is:  %c", _getch());
				cout << "\n";
				availableusrs++;
			}//13
		}
		if (slcusr == availableusrs) {
			cout << "+add user <\n";
		}
		else { cout << "+add user\n"; }
		
		//cout << availableusrs << "H" << slcusr << "\n";
		ch = _getch();
		if (ch == 80 && slcusr < availableusrs) {
			slcusr++;
		}
		if (ch == 72 && slcusr > 0) {
			slcusr--;
		}
		system("cls");
		//cout << ch;
	}
	if (users[slcusr].password != "") {
		cout << "Enter password for " << users[slcusr].name << "\n";
		int d = 1;
		for (d; d <= 10; d++) {
			string passwordinput;
			char temp = 0;
			while (true) {
				temp = _getch();
				if (temp == 13)
					break;
				if ((int)temp == 8) {
					passwordinput = passwordinput.substr(0, passwordinput.length() - 1);
					system("cls");
					cout << "Enter password for " << users[slcusr].name << "\n";
					for (int pl = 0; pl < passwordinput.length(); pl++) { cout << "*"; }
				}
				else {
					passwordinput = passwordinput + temp;
					cout << "*";
				}
			}
			//cout << passwordinput;
			//cin >> passwordinput;
			if (passwordinput != users[slcusr].password)cout << "\nIncorect password! You have " << 10 - d << " attempt(s) left\n";
			else break;
		}
		if (d >= 10) {
			system("cls");
			selectusrs();
		}
	}
	if (slcusr == availableusrs) {
		//TODO: make function that creates user (with oformlenie) unity kys
	}
	system("cls");
	userselected = slcusr;
	return slcusr;
}
void mkernel(string username) {
	system(users[userselected].color.c_str());
	cout << " _       _       _____ _____ \n"
		"| |_ ___| |_ ___|     |   __|\n"
		"| . | . | . |  _|  |  |__   |\n"
		"|___|___|___|_| |_____|_____|\n";
	cout << "bobrOS ver:0.1 made by diasbi" << endl;
	cout << endl;
	int bgclr = 0;
	int fntclr = 7;
	bool run = true;
	string command;
	typedef void (*FnPtr)(bool, string);
	map<string, FnPtr> Cmnds;
	Cmnds["sett"] = settings;
	Cmnds["calc"] = calc;
	Cmnds["clear"] = clear;
	Cmnds["clr"] = clear;
	Cmnds["help"] = helpinfo;
	Cmnds["pause"] = pause;
	Cmnds["secretbobr"] = secretlogo;
	Cmnds["sysinfo"] = getSysinfo;
	while (run) {
		cout << users[userselected].name << " " << users[userselected].inputchar;
		cin >> command;
		if (command == "logout") { system("cls"); mkernel(users[selectusrs()].name); break; }
		if (command == "exit") { run = false; break; }
		if (command == "kys") { run = false; break; }
		if (command == "restart") { system("cls"); mkernel(users[userselected].name); break; }
		if (Cmnds.count(command)) {
			Cmnds[command](false, users[userselected].name);
		}
		else {
			cout << "There is no executable command with that name: " << command << "\nFor help type 'help'" << endl;
			cout << endl;
		}
	}
}
int main() {
	//Sleep(100);
	cout << " _       _       _____ _____ \n"
			"| |_ ___| |_ ___|     |   __|\n"
			"| . | . | . |  _|  |  |__   |\n"
			"|___|___|___|_| |_____|_____|\n";
	cout << "-------made by diasbi-------" << endl;
	//Sleep(10);
	settings(true, "system");
	//Sleep(75);
	calc(true, "system");
	//Sleep(75);
	clear(true, "system");
	//Sleep(75);
	pause(true, "system");
	//Sleep(75);
	helpinfo(true, "system");
	cout << "usrsclass loaded\n";
	cout << "selectusrs loaded\n";
	cout << "mkernel loaded\n";
	Sleep(10);
	Sleep(10);
	system("cls");
	//string str = "";
	//GetCpu(str);
	users[0].name = "defaultUser";
	users[1].name = "defaultUser2";
	//users[1].password = "secret";
	//users[1].color = "color 70";
	//system("pause");22480
	userselected = selectusrs();
	mkernel(users[userselected].name);
}