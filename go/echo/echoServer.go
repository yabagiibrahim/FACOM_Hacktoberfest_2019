package main

import (
	"net"
	"fmt"
	"os"
	"io"
)

func main() {
	listener, err := net.Listen("tcp", "localhost:5555")
	if nil != err {
		fmt.Println(err)
		os.Exit(1)
	}

	defer listener.Close()

	for {
		conn, err := listener.Accept()
		defer conn.Close()
		if nil == err {
			go io.Copy(conn, conn)
		}
	}
}
