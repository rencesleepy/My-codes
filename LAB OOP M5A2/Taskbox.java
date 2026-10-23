/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package campus.tasks;

/**
 *
 * @author lawre
 */
public class Taskbox<T> {
    private T item;
    
    public Taskbox(T item) {
        this.item = item;
    }
    
    public T getItem() {
        return item;
    }
}
