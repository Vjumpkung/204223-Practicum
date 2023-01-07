if [ $# -ne 1 ] ; then
  echo "Usage: $0 <size>"
  exit 1
else
  max=$1
  in=$(ls -lp | grep -v / | sed 's/[ ]\+/,/g' | cut -f9 -d,)
  for u in $in ; do
    hmm=$(ls -l $u | sed 's/[ ]\+/,/g' | cut -f5 -d,)
    if [ $hmm -ge $max ] ; then
      echo "$(ls -l $u | sed 's/[ ]\+/,/g' | cut -f9 -d,)"
    fi
  done
fi