import java.util.*;

//TODO: not complete

public class MysteriousPresent {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		int cwidth = s.nextInt();
		int cheight = s.nextInt();
		int[] dp = new int[num+1];
		ArrayList<Envelope> e = new ArrayList<>();
		for (int i = 0; i < num; i++) {
			e.add(new Envelope(s.nextInt(), s.nextInt(), i+1));
		}
		// sort from least to greatest size
		Collections.sort(e);
		
	}
	
	public static class Envelope implements Comparable<Envelope>{
		int width;
		int height;
		int pos;
		
		public Envelope(int w, int h, int p) {
			width = w;
			height = h;
			pos = p;
		}
		
		// smallest by area
		public int compareTo(Envelope other) {
			if (width != other.width) {
				return width - other.width;
			} else {
				return height - other.height;
			}
		}
	}
}
