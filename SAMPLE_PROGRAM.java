import java.util.Scanner;
public class SAMPLE_PROGRAM {
    public static void main (String[] args) {
        System.out.print("Enter student name: ");
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.print("Enter average: ");
        String average = scanner.nextLine();
        System.out.print("Final Grade: ");
        int grade = scanner.nextInt();
        System.out.println("===STUDENT GRADE SYSTEM");
        System.out.println("1. Show Student Information");
        System.out.println("2. Show Average");
        System.out.println("3. Show Result");
        System.out.println("4. Exit");
        System.out.print("Enter choice: ");
        int choice = scanner.nextInt();
        switch (choice)
        {
            case 1:
            {
                System.out.println("Student name: " + name);
                break;
            }
            case 2:
            {
                System.out.println("Average: " + average);
                break;
            }
            case 3:
            {
                if (grade >= 90)
                {
                    System.out.println("EXECELLENT");
                }
                else if (grade >= 80)
                {
                    System.out.println("GOOD");
                }
                else if (grade >= 70)
                {
                    System.out.println("NEEDS IMPROVEMENT");
                }
                else
                {
                    System.out.println("FAILED");
                }
                break;
            }
        }
    }
}
