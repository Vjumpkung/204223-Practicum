LINE=`grep ^$1*: /etc/passwd`
USER=`echo $LINE | cut -d: -f1`
USERID=`echo $LINE | cut -d: -f3`
FULLNAME=`echo $LINE | cut -d: -f5 | grep -P -o '[A-Za-z\ ]+'`
HOME=`echo $LINE | cut -d: -f6`
echo "Username: $USER"
echo "User ID: $USERID"
echo "Full name: $FULLNAME"
echo "Home directory: $HOME"