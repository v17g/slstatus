/* See LICENSE file for copyright and license details. */

const unsigned int interval = 1000;

static const char unknown_str[] = "--";

#define MAXLEN 2048

static const struct arg args[] = {
	{ run_command, " 󰃞 %s |", "brightnessctl info | grep 'Current brightness:' | awk '{ print $NF }' | sed -e 's/^.//' -e 's/.$//'" },
	{ run_command, " 󰖀 %s |", "pamixer --get-volume-human" },
	{ ram_used,  " 󰍛 %s |", NULL },
	{ wifi_essid, " 󰀂 %s |", "wlp0s20f3" },
	{ ipv4, " 󰒄 %s |", "tun0" },
	{ battery_perc, " 󱊥 %s%% |", "BAT0" },
	{ keymap, " 󰗊 %s |", NULL },
	{ datetime, " 󰦖 %s ", "%H:%M" }
};
