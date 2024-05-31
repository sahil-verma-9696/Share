public class AccountHolderImp implements AccountHolder {
    // states
    private String name;
    private int accountNo;
    private int balance;

    //constructor
    AccountHolderImp(String name, int accountNo, int balance){
        this.name = name;
        this.accountNo = accountNo;
        this.balance = balance;
    }

    // behaviour
    @Override
    public String getName(){ return this.name; }
    @Override
    public int getAccountNo(){ return this.accountNo; }
    @Override
    public int getBalance(){ return this.balance; }
    @Override 
    public boolean setBalance(int amount) throws LowBalanceException{
        // System.out.println("coming amount : "+amount);

        if((amount + this.balance) < 2000){
            throw new LowBalanceException("Current Balance : "+this.balance+"\nMinimum balance should be 2000");
        }
        this.balance += amount;
        return true;
    }
}
