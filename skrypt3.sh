#!/bin/bash
p=0;
for FILE in $(ls ~);
do
    if [ ! -r $FILE ];
    then 
       p=`expr $p + 1`
    
    fi
done
     echo $p
