#!/bin/bash

IFS=$'\t'


let counter=0
name=""

read -p "dsfsgg " z

# echo $z


while read a b
do
# echo $a

if [[ $z -eq $a ]]
then
name=$b
fi

done<NameID.txt


while read c d
do

if [[ $name == $d ]]
then
let counter=$counter+1
fi

done<NameCourse.txt



echo $counter

