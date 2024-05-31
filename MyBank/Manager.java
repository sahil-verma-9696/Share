public interface Manager {
    void balanceEnquiry(int accountNo);
    boolean withdraw(int accountNo, int amount);
    boolean deposite(int accountNo, int amount);
}
