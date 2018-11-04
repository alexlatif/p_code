#!/bin/sh
IP=`ifconfig | grep "ether" | cut -d ' ' -f2 | awk '($0 != "autoselect") {print}'`
if [[ IP == ""]]; then
    echo "I am lost!"
else
    echo "$IP"
fi
