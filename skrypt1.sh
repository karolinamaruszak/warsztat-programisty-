#!/bin/bash
cut -f1 -d : /etc/passwd > plik.txt
najwiekszy="root"
najmniejszy="root"
while read tekst; 
do
    if [ ${#tekst} -gt ${#najwiekszy} ]
    then
    najwiekszy=$tekst
    fi
    if [ ${#tekst} -lt ${#najmniejszy} ]
    then
    najmniejszy=$tekst
    fi
done < plik.txt
echo "Najdluzsza nazwa: $najwiekszy  Najkrotsza nazwa $najmniejszy "
rm -r plik.txt
