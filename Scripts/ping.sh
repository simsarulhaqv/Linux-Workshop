#!/bin/bash

subnet="192.168.40."  # give meaningful variable names
pc_list=$(seq 11 85)

for i in ${pc_list}
do
	system=${subnet}${i}
	ping -c1 ${sytstem} > /dev/null 2>&1
	if [ $? -eq 0 ]; then
		echo ${system} is ON
	else
		echo ${system} is OFF
	fi
done
