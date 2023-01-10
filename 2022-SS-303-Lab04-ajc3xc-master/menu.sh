#!/bin/bash


input=""
for file in *.*
do
	echo "v) View $file"
	echo "e) Edit $file"
	echo "c) Compile $file"
	echo "x) Execute $file"
	echo "q) Quit"
	read input

	case $input in
		v)
			less $file
			;;
		e)
			mousepad $file
			;;
		c)
			g++ $file
			;;
		x)
			sudo chmod +x $file
			./$file
			;;
		q)
			exit
			;;
		*)
			echo "Invalid Response. Skipping file!"
	esac
done