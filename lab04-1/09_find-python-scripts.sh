#!/bin/bash

TEXT=`ls -l | tr -s ' ' | cut -d' ' -f1,9 | tr ' ' ':'`
for i in $TEXT
do
    perm=`echo $i | cut -d':' -f1`
    filn=`echo $i | cut -d':' -f2`
    if echo $perm | grep -q -v '^d'
    then
        if echo $perm | grep -q x
        then
            if head -1 $filn | grep -q "/bin/python"
            then
                echo $filn
            fi
        fi
    fi
done