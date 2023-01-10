#!/bin/bash


echo "$1: $(wget -q -O - $2 | grep -o $1 | wc -l)"