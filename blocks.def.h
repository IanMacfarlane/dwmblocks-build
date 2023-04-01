//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "fanspeed", 5, 0},
	{"", "cputemp", 5, 0},
	{"", "vpnstatus",	10, 0},
	{"", "date '+ %I:%M %p | %a %b %d '",					5,		0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
