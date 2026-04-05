public class Lasagna {
    public int expectedMinutesInOven(){
        return 40;
    }
    public int remainingMinutesInOven(int m){
        return 40 - m;
    }
    public int preparationTimeInMinutes(int l){
        return 2 * l;
    }
    public int totalTimeInMinutes(int l, int m){
        return 2 * l + m;
    }
}
