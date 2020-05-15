import java.io.*;
import java.util.*;

// 1/31/2020 UTPC

public class SnowmanOne {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double cubic = s.nextDouble();
        double balls = s.nextDouble();
        double limit = s.nextDouble();
        double solution = 0;
        if (balls % 2 == 1){
            int div = (int) balls / 2;
            solution = cubic / balls - (limit * div);
        } else {
            double temp = cubic / balls;
            temp -= (limit / 2);
            double div = balls / 2 - 1;
            solution = temp - limit * div;
        }
        System.out.print(solution > 0 ? solution : -1);
    }
}