import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import edu.stanford.nlp.ling.CoreLabel;
import edu.stanford.nlp.ling.Sentence;
import edu.stanford.nlp.parser.lexparser.Options;
import edu.stanford.nlp.trees.Tree;
import edu.stanford.nlp.trees.Treebank;
import edu.stanford.nlp.util.Timing;


public class SentenceExtractor {


	public static Treebank makeTreebank(String treebankPath, Options op) {
	    System.err.println("Training a parser from treebank dir: " + treebankPath);
	    Treebank trainTreebank = op.tlpParams.memoryTreebank();
	    System.err.print("Reading trees...");
	    
	    trainTreebank.loadPath(treebankPath);
	    
	    Timing.tick("done [read " + trainTreebank.size() + " trees].");
	    return trainTreebank;
	}


	public static void writetoFile(List<Tree> trees, String fileName) {
		File file = new File(fileName);
		try {
			FileWriter fw = new FileWriter(file);
			
			for (Tree tree : trees) {
				fw.write(tree.pennString());
				fw.write("\n");
				fw.flush();
			}
			fw.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}


	/**
	 * args[0] is the file to be splitted.
	 * 
	 * args[1] is the splitted-file (sentences).
	 * 
	 * args[2] is the number of sentences to be extracted.
	 * 
	 * @param args
	 */
	public static void main(String[] args) {
		if (args.length < 3) {
			System.out.println("Please specify the following three arguments:\n 1. args[0]: the file to be splitted; \n 2. args[1]: the splitted-file (sentences); \n 3. args[3]: the number of sentences to be extracted.");
			return;
		}
		
		Options op = new Options();
		op.doDep = false;
		op.doPCFG = true;
		op.setOptions("-goodPCFG", "-evals", "tsv");
		Treebank trainTreeBank = SentenceExtractor.makeTreebank(args[0], op);

		int numofSentences = Integer.parseInt(args[2]);
		int count = 0;
		List<Tree> trees = new ArrayList<Tree>();
		for (Tree tree : trainTreeBank) {
			if (count == numofSentences) {
				break;
			}
			trees.add(tree);
			count++;
			if (count % 1000 == 0) {
				SentenceExtractor.writetoFile(trees, args[1] + "_" + count);
			}
		}
	}
	
}