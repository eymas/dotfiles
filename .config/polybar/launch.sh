if type "xrandr"; then
  for m in $(xrandr --query | grep " connected" | cut -d " " -f1); do
    MONITOR=$m polybar --reload notsobar &
    MONITOR=$m polybar --reload notsobar_2 &
  done
else
  polybar --reload notsobar &
  polybar --reload notsobar_2 &
fi
