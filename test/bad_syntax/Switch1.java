class BadSwitch {
    public static void main(String[] args) {
        System.out.println(new BadSwitchClass().s());
    }
}

class BadSwitchClass {
    public int s() {
        int x;
        int y;
        y = 2;
        x = 5;
        // expression in case is not a constant
        switch(x){
            case 4:
                x = 4;
                break;
            case y:
                x++;
                break;
            default:
                x=0;        
        }
        return x;
    }
}