package assignment.pkg7a;

//@author Joash M
//Done in 30 mins

public class Assignment7a {

    public enum TrafficLights {
        //Declarations
        RED(30), GREEN(55), YELLOW(5), WALK(30), DONT_WALK(55);
        
        //Instance fields for the duration in seconds
        private final int duration;
        
        //Constructor
        private TrafficLights(int durationSeconds) {
            duration = durationSeconds;
        }
        
        //Accessor for the duration
        public int getDuration()
            {return duration;}
    }

    
    public static void main(String[] args) {
        TrafficLights[] signals = TrafficLights.values();
        
        for (TrafficLights signal : signals){
            System.out.println ("Name: " + signal.name() + "\nDuration: " + signal.getDuration());
        }
    }
    
}
