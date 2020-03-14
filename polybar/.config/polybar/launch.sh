#!/usr/bin/env bash

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch bars
polybar -c $HOME/.config/polybar/config -r default &
polybar -c $HOME/.config/polybar/config -r secondary &


echo "Bars launched..."
