#!/bin/bash

echo -e "You SHOULD input 2 number, I will cross them! \n"
read -p "first number: " firstnu
read -p "second number: " secnu  
total=$(($firstnu*$secnu))

echo -e "\nThe result of $firstnu x $secnu is ==> $total"
