#!/bin/bash
while [ -d "$2" ]
do
	cp $zrodlo $2
	shift
done
