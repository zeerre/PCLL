function printit(){
    echo "Your choice is ${1}" # 这个 $1 必须要参考底下指令的下达
}
echo "This program will print your selection !"
case ${1} in
    "one")
	printit 1 # 请注意， printit 指令后面还有接参数！
	;;
    "two")
	printit 2
	;;
    "three")
	printit 3
	;;
    *)
	echo "Usage ${0} {one|two|three}"
	;;
esac
