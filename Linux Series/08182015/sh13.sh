#!/bin/bash

while [ "$yn" != "yes" -a "$yn" != "YES" ]
do
    read -p "Please input yes/Yes to stop this program: " yn
done

echo "OK! you input the correct answer."
