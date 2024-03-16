package java;
class Node{
    int data;
    Node next;

    void TraverseLinkedList(Node ptr){
        while (ptr != null)
        {
            System.out.println("Value is: " + ptr.data);
            ptr = ptr.next;
        }
    };

    Node insertAtFirst(Node head,int data){
    Node ptr = new Node();
    ptr.next = head;
    ptr.data = data;
    return ptr;
};
};


public class insert{
    public static void main(String[] args) {
    Node head,second;
    head = new Node();
    second = new Node();


    head.data = 10;
    head.next = second;
    second.data = 12;
    second.next = null;


    head.TraverseLinkedList(head);
    head = head.insertAtFirst(head, 8);
    head.TraverseLinkedList(head);

    }
}