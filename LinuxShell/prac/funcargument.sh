function print(){
    echo "Choice ${1}"
}

echo "This program will print your selections!"

case ${1} in
    "one")
	print 1
	;;
    "two")
	print 2
	;;
    "three")
	print 3
	;;
    *)
	echo "Usage ${0} {one|two|three}"
	;;
esac
