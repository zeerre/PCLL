package main

import "fmt"

func main() {
	fmt.Println("vim-go")
	fmt.Println(add(3, 5))
}

func add(a int, b int) int {
	return a + b
}
