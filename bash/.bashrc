#
# ~/.bashrc
#

# If not running interactively, exit immediately
[[ $- != *i* ]] && return

# Provide access to X server for all local users
xhost +local:root > /dev/null 2>&1

# Source config files
for file in /home/bryson/.bash/*;
do
	[ -f "$file" ] && . "$file"
done
