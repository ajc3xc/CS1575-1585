#!/bin/bash
echo "Starting program"

sleep 10 & #example background process
echo "Executing  first program after wait"
wait
g++ fibonacci.cpp -o fibonacci
./fibonacci
rm fibonacci
echo "Program finished"

sleep 10 &
echo "starting second program after wait"
wait
g++ hello.cpp -o hello
./hello
rm hello
echo "Program finished"
