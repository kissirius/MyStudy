#!/bin/bash

read -p "Please input (Y/N): " yn

if [ "$yn" == "Y" -o "$yn" == "y" ]; then 
    echo "Ok, continue" 
    exit 0
fi

if [ "$yn" == "N" -o "$yn" == "n" ]; then
    echo "Oh, interrupt!"
    exit 0
fi

echo "I don't know what your choice is" && exit 0
