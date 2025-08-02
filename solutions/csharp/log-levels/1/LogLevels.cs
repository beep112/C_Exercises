using System;


static class LogLine
{
    public static string Message(string logLine)
    {
        int index = logLine.IndexOf(":");
        string message = logLine.Substring(index+1);
        return message.Trim();
    }

    public static string LogLevel(string logLine)
    {
        int first = logLine.IndexOf("[");
        int last = logLine.IndexOf("]");
        String loglevel = logLine.Substring(first+1, last-1);
        return loglevel.ToLower();
    }

    public static string Reformat(string logLine)
    {
        return Message(logLine) + " ("+LogLevel(logLine)+")";
    }
}
