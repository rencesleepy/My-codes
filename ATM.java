import java.util.Scanner;
public class ATM {
    public static void main(String[] args) {
        System.out.print("Enter your balance: ");
        Scanner scn = new Scanner(System.in);
        Double balance = scn.nextDouble();
        do { 
            System.out.println("==================");
            System.out.println("ATM SYSTEM");
            String menu[] = {
                "Check balance" , 
                "Deposit" , 
                "Withdraw" , 
                "Exit"
            };
            for (int i=0; i < 4; i++) {
                System.out.println("[" + (i + 1) + "] " + menu[i]);
            }
            System.out.print("Enter choice: ");
            Scanner scanner = new Scanner(System.in);
            int choice = scanner.nextInt();
            switch (choice)
            {
                case 1:
                {
                    System.out.println("CHECK BALANCE");
                    System.out.println("Current Amount: " + balance);
                    break;
                }
                case 2:
                {
                    System.out.println("DEPOSIT");
                    System.out.print("Enter deposit amount: ");
                    double deposit = scanner.nextDouble();
                    balance = balance + deposit;
                    System.out.println("Desposit successful");
                    System.out.println("New balance: " + balance);
                    break;
                }
                case 3:
                {
                    System.out.println("WITHDRAW");
                    System.out.print("Enter withdraw amount: ");
                    double withdraw = scanner.nextDouble();
                    if (withdraw <= balance)
                    {
                        balance = balance - withdraw;
                        System.out.println("Withdraw successful");
                        System.out.println("New balance: " + balance);
                    }
                    else
                    {
                        System.out.println("INVALID: Amount excedeed to current balance");
                    }

                    break;
                }
                case 4:
                {
                    System.out.println("EXITING THE PROGRAM");
                    return;
                }
                default:
                {
                    System.out.println("INVALID");
                }
            }   
        } while (true);
    }
}
