#!/bin/bash

IFS=$'\t'
space="     "

echo "==============="
echo "Needed NOW"
echo "==============="


while read a b c d
do

while read x1 x2
do

if [ $b == $x1 ]
then

if [ $c -lt $x2 ]
then
let value=$x2-$c
echo $b$space$value
fi

fi

done<orders.txt


done<inventory.txt


echo "==============="
echo "Not urgent"
echo "==============="

while read a b c d
do

while read x1 x2
do

let diff=$c-$x2

if [ $b == $x1 ]
then

if [ $diff -gt 0 ] && [ $diff -le 5 ]
then
echo $b
fi

fi

done<orders.txt


done<inventory.txt


