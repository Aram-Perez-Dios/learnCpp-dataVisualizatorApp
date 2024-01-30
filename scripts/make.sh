#!/bin/bash

cd build

if [[ $1 != "" ]];
then make $1
else make
fi

cd ..