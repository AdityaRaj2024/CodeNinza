/*
 * 16-05-2023
 * Example of Abstract class
 */
abstract class Loan {
    // public abstract double InRt();
}

class GoldLoan extends Loan {
    public double InRt() {
        return 10.5;
    }
}

class HomeLoan extends Loan {
    public double InRt() {
        return 8.5;
    }
}

class VehicleLoan extends Loan {
    public double InRt() {
        return 15.5;
    }
}

class LoanAbs {
    public static void main(String[] args) {
        VehicleLoan vl = new VehicleLoan();
        HomeLoan hl = new HomeLoan();
        GoldLoan gl = new GoldLoan();
        System.out.println("Interest Rate on Vehicle is " + vl.InRt());
        System.out.println("Interest Rate on Home is " + hl.InRt());
        System.out.println("Interest Rate on Gold is " + gl.InRt());
    }
}