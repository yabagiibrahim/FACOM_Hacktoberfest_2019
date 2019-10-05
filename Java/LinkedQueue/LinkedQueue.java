package LinkedQueue;

import java.util.Scanner;

public class LinkedQueue {
	private Node node;

    public void add(int element){
        if(isEmpty()){
            this.node = new Node(element);
        }
        else{
            add(this.node,element);
        }
    }

    private void add(Node node, int element){

        if(node.getNext() == null){
            Node newNode = new Node(element);
            node.setNext(newNode);
            node.getNext().setPrevious(node);
        }
        else{
            add(node.getNext(), element);
        }
    }

    public void remove(){
        if(isEmpty())
            System.out.println("empty");
        else
            remove(this.node);

    }

    private void remove(Node node){
        if(node.getNext() != null) {
            node.getNext().setPrevious(null);
            this.node = node.getNext();
        }
        else{
            this.node = null;
        }
    }

    public void print(){
        if(isEmpty())
            System.out.println("empty");
        else{
            String saida = print(node);
            System.out.println(saida);
        }
    }

    public void element(){
        if(isEmpty())
            System.out.println("empty");
        else
            System.out.println(this.node.getValue());
    }

    public int search(int element){
        if(isEmpty())
            return -1;
        else if(this.node.getValue() == element)
            return 0;
        else
            return search(this.node, element);
    }

    private int search(Node node,int element){
        if(node.getValue() == element)
            return 0;
        else if(node.getNext() == null)
            return -1;
        else
            return 1 + search(node.getNext(), element);
    }

    private String print(Node node){
        if(node.getNext() == null) {
            return node.toString();
        }
        else
            return node.toString() + " " + print(node.getNext());

    }

    private boolean isEmpty(){
        return node == null;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        LinkedQueue fila = new LinkedQueue();
        
        menu();
        String[] operacao;
        do{
        	System.out.print("option ->  ");
            operacao = sc.nextLine().split(" ");
            switch (operacao[0]){
                case "add":
                    fila.add(Integer.parseInt(operacao[1]));
                    break;

                case "remove":
                    fila.remove();
                    break;
                case "print":
                    fila.print();
                    break;
                case "element":
                    fila.element();
                    break;
                case "search":
                    System.out.println(fila.search(Integer.parseInt(operacao[1])));
                    break;

            }

        }while(!"end".equals(operacao[0]));
        
        sc.close();
    }
    
    public static void menu() {
    	System.out.println("Menu:");
    	System.out.println();
    	System.out.println("add value. ex.: add 3");
    	System.out.println();
    	System.out.println("remove (removes the first element in the queue)");
    	System.out.println();
    	System.out.println("print (prints all the elements in the queue)");
    	System.out.println();
    	System.out.println("element (print the element on the top)");
    	System.out.println();
    	System.out.println("search element. ex.: search 5");
    	System.out.println();
    }
    	
}




