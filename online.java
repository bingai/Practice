import java.io.*;
import java.util.*;
import java.lang.*;
public class online{


public static void main(String args[])
    {
        Map<Integer,Set<String>> list=new HashMap<Integer,Set<String>>();
        int n=(int) Math.pow(10,1);
        int timecomplexity=0;
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++){
                Set<String> l;
                timecomplexity++;
                int result=(int) (Math.pow(a, 3)+Math.pow(b, 3));
                if(list.containsKey(result)){
                    l=list.get(result);
                    l.add(a+","+b);
                    list.put(result, l);
                }
                else{
                    l=new TreeSet<String>();
                    l.add(a+","+b);
                    list.put(result, l);
                }
            }
        }
for(Map.Entry<Integer,Set<String>> entry:list.entrySet()){
            Set<String> l=entry.getValue();
            System.out.print(entry.getKey()+": ");
            for(String s:l){
                System.out.print(s+" ; ");
            }
            System.out.println();
        }

    }
}
