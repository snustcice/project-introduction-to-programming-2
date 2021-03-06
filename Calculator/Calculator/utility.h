#include "calculator.h"

class Utility : public Calculator
{
private:
	int xPos;
	int yPos;	//cursor's position in x/y in console
public:
	Utility(void) : xPos(0), yPos(0) {};
	Utility(int xpos, int ypos);
	//only Utility method
	void SetPos(int xpos, int ypos);	//set cursor value
	void RefreshConsole(void);			//erase everything in console and print two lines(basic UI)
	void WaitforSec(double seconds);	//wait console in seconds
	void PrintTitle(void);				//print title "CALCULATOR"
	int InstantReadKey(void);			//read keyboard input without buffer(instantly input value)
	void ExitCalc(void);				//show "terminated" string and terminate whole program
	void ExitCalc(string error);		//when the program terminated with error message
	void PrintConsole(string contents);
	void PrintConsole(double value);
	void PrintConsole(char ch);
	virtual void PrintGuide(string setting);	//basic guide : explain program
	virtual void PrintModes(string setting);	//basic mode : calculation || matrix || Base_N
	virtual int SelectMode(string setting);
};