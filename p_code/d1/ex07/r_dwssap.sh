#!/bin/sh

cat /etc/passwd | grep -v '#' | cut -d ':' -f1 |  awk '{if(NR%2==0)print}' | rev | sort -r | sed -n ''"$FT_LINE1"','"$FT_LINE2"'p' | tr '\n' ',' | sed "s/$/./"