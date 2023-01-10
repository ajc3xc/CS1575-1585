#!/bin/bash

filename="hello.cpp"
lowercase="world"
a=$(echo "$filename" | sed  's/.cpp//')
b=$(echo "$lowercase" | tr '[:lower:]' '[:upper:]')

echo "$a, $b"
