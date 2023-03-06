#!/bin/bash

IFS=$'\t'

let count=0
name=""
space="   "
str1="Student "
str2=" is registered in "
str3=" courses"
empty=""


if [[ $2 == "" && ( $1 == "-c" || $1 == "-g" ) ]]
then
echo "No such student"
else
if [ $1 == "-c" ]
then

# Reads the file student.txt (3 fields) -- A = Name B = Student ID C = Course
while read a b c
do

#Checks if the student ID is equal to parameter in this particular line. If true, add 1 to the count.
if [ $b == $2 ]
then
let count=$count+1
name=$a 
#echo $a
fi


done<student.txt

#Checks if count is greater than 0 -- If true, return the number of courses.
if [ $count -gt 0 ]
then
echo $str1$name$str2$count$str3
else
echo "No such student"
fi


elif [ $1 == "-g" ]
then

# Reads the file student.txt (3 fields) -- Used to get student name
while read a b c
do

#Checks if student id is equal to parameter on this particular line.
if [ $b == $2 ]
then
name=$a
fi

done<student.txt

#Displays student name
if [[ $name == $empty ]]
then
echo "No such student"
else
echo $name
fi

# Reads the file grades.txt (3 fields) -- Used to get student's enrolled courses and grades
while read a b c
do

#Checks if student id is equal to parameter on this particular line.
if [ $a == $2 ]
then
echo "$b$space$c"
fi

done<grades.txt
fi
fi
