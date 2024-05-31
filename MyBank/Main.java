import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) {

        Manager m1 = new ManagerImp();
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        try {
            while (true) {
                System.out.println("-----  Welcome My Bank  -----");
                System.out.println("1. Balance Enquiry");
                System.out.println("2. Withdraw");
                System.out.println("3. Deposit");
                System.out.println("4. Exit");

                System.out.print("Choose an option: ");
                int choice = Integer.parseInt(reader.readLine());

                if (choice == 4) {
                    System.out.println("You are exit from program Thank YOU ");
                    break;
                }
                System.out.print("Enter the account No : ");
                int account = Integer.parseInt(reader.readLine());

                switch (choice) {
                    case 1:
                        m1.balanceEnquiry(account);
                        break;

                    case 2:
                        System.out.print("Enter the amount : ");
                        int withdrawAmount = Integer.parseInt(reader.readLine());

                        if (m1.withdraw(account, withdrawAmount)) {
                            System.out.println("Withdraw successfull Thank You ");
                        } else {
                            System.out.println("Withdraw Fail Sorry ");
                        }
                        break;

                    case 3:
                        System.out.print("Enter the amount : ");
                        int depositeAmount = Integer.parseInt(reader.readLine());

                        if (m1.deposite(account, depositeAmount)) {
                            System.out.println("Depostion successfull Thank You ");
                        } else {
                            System.out.println("Depostion Fail Sorry ");
                        }
                        break;
                        
                    default:
                        System.out.println("Invalid Input");
                        break;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
