#!/bin/bash

EXECUTABLE_NAME="visualizator.exe"
TESTS_EXECUTABLE_NAME="tests.exe"

[ -e $EXECUTABLE_NAME ] && rm $EXECUTABLE_NAME
[ -e $TESTS_EXECUTABLE_NAME ] && rm $TESTS_EXECUTABLE_NAME

cd build

if [[ -z $1 ]];
then make $1
else make
fi

cd ..