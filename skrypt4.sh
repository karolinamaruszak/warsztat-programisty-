#!/bin/bash
for FILE in $(ls ~)
do
    if [ ! -s $FILE ]; then
    rm $FILE
    fi
done
