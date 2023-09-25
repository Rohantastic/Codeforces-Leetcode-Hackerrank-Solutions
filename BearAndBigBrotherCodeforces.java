import java.util.*;


public class BearAndBigBrotherCodeforces
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
	    int x = scan.nextInt();
	    int y = scan.nextInt();
	    
	    //x triples y doubles
	    int count = 0;
	    while(x<=y){
	        count++;
	        x = x*3;
	        y = y*2;
	    }
	    
	    System.out.println(count);
	}
}
