package LinkedQueue;

public class Node{
	
    private int value;
    private Node next;
    private Node previous;

    public Node(int element){
        this.value = element;
    }

    public String toString(){
        return String.format("%d",this.value);
    }
    
    public int getValue() {
    	return this.value;
    }
    public Node getNext() {
    	return this.next;
    }
	public Node getPrevious() {
		return this.previous;
	}
	
	public void setValue(int value) {
		this.value = value;
	}
	
	public void setNext(Node next) {
		this.next = next;
	}
	
	public void setPrevious(Node previous) {
		this.previous = previous;
	}
}

