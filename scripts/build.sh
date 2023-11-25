#!/bin/bash

if [! -d build]; then
  mkdir build
  echo "funchioooonaaaaaa\n\n\n"
fi

bash scripts/clear.sh
cd build
cmake ..
make
cd ..