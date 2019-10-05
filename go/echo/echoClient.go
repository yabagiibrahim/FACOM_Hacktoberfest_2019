package main

import (
	"fmt"
	"net"
	"os"
	"io"
)

func main() {
	conn, err := net.Dial("tcp", "localhost:5555")
	if nil != err {
		fmt.Println(err)
		return
	}
	defer conn.Close()

	go io.Copy(conn, os.Stdin)
	io.Copy(os.Stdout, conn)
}

