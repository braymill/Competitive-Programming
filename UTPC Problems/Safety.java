import java.io.*;
import java.util.*;

// 1/31/2020 UTPC

public class Safety {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int numCases = s.nextInt();
        int casesDone = 0;
        while (casesDone != numCases){
            int numPeople = s.nextInt();
            ArrayList<Integer> ppl = new ArrayList<>();
            while (numPeople != 0){
                ppl.add(s.nextInt());
                numPeople--;
            }
            Collections.sort(ppl);
            boolean found = false;
            int index = 0;
            while (!found && index < ppl.size() - 1){
                if (Math.abs(ppl.get(index) - ppl.get(index + 1)) <= 1){
                    found = true;
                }
                index++;
            }
            System.out.println(found ? "2" : "1");
            casesDone++;
        }
    }
}