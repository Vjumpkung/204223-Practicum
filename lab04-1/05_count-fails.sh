INN=`grep -o $1$ access.log | wc -l`
SUC=`grep -o $1$ success.log | wc -l`
DIF=$((INN-SUC))
echo $DIF