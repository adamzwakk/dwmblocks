//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"🔈", "amixer sget Master | awk -F\"[][]\" '/dB/ { print $2 }'",	0,		10},

	{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
	{"🔋", "cat /sys/class/power_supply/BAT*/capacity | awk '{ total += $1; count++ } END { print total/count }'",	15, 0},

	//{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{"🕛","date +'%H:%M'",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
