package campus.tasks;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author lawre
 */
public class TaskDemo {
    public static void main (String[] args) {
        Taskbox <String> task = new Taskbox<>("Submit Module 5 Lab");
        Taskbox <Integer> minutes = new Taskbox<>(45);   
        
        Priority priority = Priority.MEDIUM;  
        String action = switch (priority) {
        case HIGH -> "DO FIRST";
        case MEDIUM -> "SCHEDULE";
        case LOW -> "OPTIONAL"; 
    };
        
        System.out.println("Task: " + task.getItem());
        System.out.println("Estimated minutes: " + minutes.getItem());
        System.out.println("Priority: " + priority);
        System.out.println("Action: " + action);
    }
}
