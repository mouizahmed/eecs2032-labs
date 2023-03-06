#!/bin/bash

IFS=$'\t'

miss1=" is in file A.txt but not in B.txt"
miss2=" is in file B.txt but not in A.txt"

while read a b c d
do

while read x1 x2 x3
do


if [[ $1 == "-I" ]]
then

if [[ ($c == "I") && ($b -gt $x2) && ($b -lt $x3) && ($x1 == $d) ]]
then
echo $a
fi


elif [[ $1 == "-G" ]]
then

if [[ ($c == "G") && ($b -gt $x2) && ($b -lt $x3) && ($x1 == $d) ]]
then
echo $a
fi

fi



done<B.txt


done<A.txt



if [[ $1 == "-check" ]]
then

#Check if key in A.txt is in B.txt

while read i n j k
do

if grep -qF $k B.txt
then
:
else
echo $k$miss1
fi


done<A.txt


while read x6 x7 x8
do

if grep -qF $x6 A.txt
then
:
else
echo $x6$miss2
fi


done<B.txt

fi
