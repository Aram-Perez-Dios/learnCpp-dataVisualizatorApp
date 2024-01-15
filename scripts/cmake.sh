#!/bin/bash

[ ! -d "build" ] && mkdir "build"

rm -rf build/*

cd build
cmake ..
cd ..