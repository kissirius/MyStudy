#!/bin/bash 

echo -e "I will use 'touch' command to create 3 files."
read -p "Please input your filename: " fileuser

filename=${fileuser:-"filename"}

data1=`date --date='2 days ago' +%Y%m%d`
data2=`date --date='1 days ago' +%Y%m%d`
data3=`date +%Y%m%d`

file1=${filename}${data1}
file2=${filename}${data2}
file3=${filename}${data3}

touch "$file1"
touch "$file2"
touch "$file3"
