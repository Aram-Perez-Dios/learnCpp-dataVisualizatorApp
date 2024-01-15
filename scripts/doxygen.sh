#!/bin/bash

rm -rf build/* docs/html docs/latex

cd docs
doxygen
cd ..