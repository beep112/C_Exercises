public class CarsAssemble {
    private static final int CARS_PRODUCED_PER_HOUR = 221;
    public double productionRatePerHour(int speed) {
        if (speed >= 1 && speed <= 4) {
            return CARS_PRODUCED_PER_HOUR * speed * 1.0;
        } else if (speed >= 5 && speed <= 8) {
            return CARS_PRODUCED_PER_HOUR * speed * 0.9;
        } else if (speed == 9) { 
            return CARS_PRODUCED_PER_HOUR * speed * 0.8;
        } else if (speed == 10) {
            return CARS_PRODUCED_PER_HOUR * speed * 0.77;
        } else {
            return 0;
        }
    }

    public int workingItemsPerMinute(int speed) {
        return (int) productionRatePerHour(speed) / 60;
    }
}
