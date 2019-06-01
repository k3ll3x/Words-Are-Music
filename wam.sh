#!/bin/bash
while :
do
	read string
	./a.out $string | aplay &
done
