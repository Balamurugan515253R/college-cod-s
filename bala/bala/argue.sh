#!/bin/bash
echo "entre arg1"
read one
echo "entre arg2"
read two
echo "first argument is-->$one"
echo "second argument is-->$two"
sum=$(($one+$two))
echo "sum=$sum"

