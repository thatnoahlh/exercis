public class LogLevels {
    
    public static String message(String logLine) {
        String[] msgArr = logLine.split("]: ");
        return msgArr[1].trim();
    }

    public static String logLevel(String logLine) {
        return logLine.split("]: ")[0]
                .substring(1)
                .toLowerCase();
    }

    public static String reformat(String logLine) {
        return message(logLine) + " (" + logLevel(logLine) + ")";
    }
}
