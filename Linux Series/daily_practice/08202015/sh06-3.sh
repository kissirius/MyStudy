#!/bin/bash 

read -p "Please input(Y/N): " yn

if [ "$yn" == "Y" -o "$yn" == 'y' ]; then
    echo "OK, continue!" 
    exit 0
elif [ "$yn" == "N" -o "$yn" == 'n' ]; then
    echo "Oh, interrupt!" 
    exit 0
else
    echo "I don't konw what your choice is " && exit 0
fi
