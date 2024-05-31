public class ManagerImp implements Manager {

    private AccountHolderImp[] accountHolders = {
            new AccountHolderImp("upbhogta1", 150, 2000),
            new AccountHolderImp("upbhogta2", 151, 2000),
            new AccountHolderImp("upbhogta3", 152, 2000),
    };

    AccountHolder findAccount(int accountNo) {
        for (AccountHolder i : accountHolders) {
            if (i.getAccountNo() == accountNo) {
                return i;
            }
        }
        System.out.println("Account " + accountNo + " not found");
        return null;
    }

    @Override
    public void balanceEnquiry(int accountNo) {
        AccountHolder currentAccountHolder = findAccount(accountNo);
        if (currentAccountHolder != null) {
            System.out.println("Holder Name : " + currentAccountHolder.getName());
            System.out.println("Account No : " + currentAccountHolder.getAccountNo());
            System.out.println("Current Balance is : " + currentAccountHolder.getBalance());
        }
    }

    @Override
    public boolean withdraw(int accountNo, int amount) {

        AccountHolder currentAccountHolder = findAccount(accountNo);

        if (currentAccountHolder != null) {
            try {
                currentAccountHolder.setBalance(-1*amount);
                return true;
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        } else {
            return false;
        }
    }

    @Override
    public boolean deposite(int accountNo, int amount) {

        AccountHolder currentAccountHolder = findAccount(accountNo);

        if(currentAccountHolder != null){
            try {
                // System.out.println("M coming amoutn : "+amount);
                currentAccountHolder.setBalance(amount);
                return true;
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        }else{
            return false;
        }
    }
}
