// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon */  /* Command */ 													/* Update Interval */ /* Update Signal */
	{ "", 			"date '+%H:%M %d-%m-%y'", 										  			10, 	0 },
	{ "ip: ", 		"$HOME/.local/bin/get-ip", 			120, 	0 },
	{ "ram: ", 	    "$HOME/.local/bin/used-ram-percentage | tr -d '\n' && echo %",											60, 	0 },
	{ "vpn: ", 		"pgrep -x 'openvpn' > /dev/null && echo yes || echo no",					10, 	0 },
	{ "docker: ", 	"systemctl is-active docker > /dev/null && echo running || echo stopped",					10, 	0 },
	{ "battery: ", 	"$HOME/.local/bin/battery | tr -d '\n' && echo %",											60, 	0 },
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
