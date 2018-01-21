#!/bin/bash
liczba=$1

while [ $liczba -ne 0 ]; do
    reszta=$(( $liczba % 10 ))
        liczba=$(( $liczba / 10 ))
        wynik=$(( $wynik * 10 + $reszta ))
done
if [ $wynik -eq $liczba ]
then
    echo "Palindrom"
else
    echo "To nie palindrom"
fi
