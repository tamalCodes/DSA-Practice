import java.util.*;

public class Solution {

    static List<List<String>> groupAnnagrams(String[] strs) {

        // Input: strs = ["eat","tea","tan","ate","nat","bat"]

        // make a map
        Map<String, List<String>> answer = new HashMap<>();

        for (String str : strs) {

            // take that str and sort it
            // string are not sortable so we need to make it to character array
            // Then use Arrays.sort to sort it
            // And then again make it back to the string

            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String sortedStr = new String(charArray);

            // now that i have sorted the string, it is my key
            // i look in the hashmap if i have the key

            // if i have it, i just add original value to the key (str)

            // if i donot have it, i make a new key, and empty arraylist as value
            // Then i just add original value to the key (str)

            if (!answer.containsKey(sortedStr))
                answer.put(sortedStr, new ArrayList<>());

            answer.get(sortedStr).add(str);

        }

        System.out.println(answer.values());

        return new ArrayList<>(answer.values());

    }

    public static void main(String[] args) {
        String[] strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
        List<List<String>> result = new ArrayList<>();
        result = groupAnnagrams(strs);

        for (List<String> group : result) {
            for (String str : group) {
                System.out.print(str + " ");
            }
            System.out.println();
        }
    }
}