//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"\uf1eb ", "/opt/dwmblocks/inet wlp2s0",  5,  0},
	{"\uf240 ",  "/opt/dwmblocks/bat CMB1",     5,  0},
	{"\uf073 ",       "/opt/dwmblocks/date",        10,  0},
	{"\uf017 ",       "/opt/dwmblocks/time",        10,  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
