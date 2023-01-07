TEXT=`grep -Eo ',[0-9]+.[0-9]+.[0-9]+.[0-9]+' $1 | cut -d, -f2`
shift
NUM=$#
for i in `seq 1 $NUM`
do
  COUNT=`echo $TEXT | tr ' ' '\n' | grep ^$1$ | wc -l`
  echo "IP $1 accessed $COUNT time(s)"
  shift
done