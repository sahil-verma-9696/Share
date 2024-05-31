public interface AccountHolder {
    int getAccountNo();
    String getName();
    int getBalance();

    boolean setBalance(int cash) throws LowBalanceException;
}
