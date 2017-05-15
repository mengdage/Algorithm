package com.lm;

import java.util.Scanner;

public class TextEditor {
	private static char endOfLine = '\n';
	private static char wordDelimiter = ' ';
	
	
	private static int addWord(StringBuilder builder, String word, int remainingLen, int maxCharsPerLine){
		int wordLen = word.length();
		
		if (remainingLen != maxCharsPerLine && wordLen <= remainingLen-1) {
			builder.append(wordDelimiter);
			builder.append(word);
			remainingLen = remainingLen - word.length() - 1;
		} else if (remainingLen == maxCharsPerLine && wordLen <= remainingLen) {
			builder.append(word);
			remainingLen = remainingLen - word.length();
		} else if (wordLen <= maxCharsPerLine) {
			builder.append(endOfLine);
			builder.append(word);
			remainingLen = maxCharsPerLine - word.length();
		} else {
			//word.length() > maxCharsPerLine
			int wordRemainingLen = wordLen;
			if(remainingLen > 1){
				if(remainingLen != maxCharsPerLine){
					builder.append(wordDelimiter);
					builder.append(word.substring(0, remainingLen-1));
					wordRemainingLen -= remainingLen -1;
				} else {
					builder.append(word.substring(0, remainingLen));
					wordRemainingLen -= remainingLen;
				}
			}
			
			remainingLen = 0;
			
			while(wordRemainingLen > maxCharsPerLine){
				builder.append(endOfLine);
				builder.append(word.substring(wordLen - wordRemainingLen, wordLen - wordRemainingLen + maxCharsPerLine));
				wordRemainingLen -= maxCharsPerLine;
				remainingLen = 0;
			}
			if(wordRemainingLen > 0){
				builder.append(endOfLine);
				builder.append(word.substring(wordLen - wordRemainingLen));
				remainingLen = maxCharsPerLine - wordRemainingLen;
			}
			
			
		}
		return remainingLen;
	}
	
	public static String wrapText(String text, int maxCharsPerLine){
		StringBuilder result = new StringBuilder();

		String tokens = "";
		int remainingLen = maxCharsPerLine;
		
		// while there are words remaining
		//  get the next word
		//    a word can be a alphanum or a \n
		Scanner scanner = new Scanner(text).useDelimiter(" ");	
		while(scanner.hasNext()){
			tokens = scanner.next();
			int wordEndIdx = tokens.length();
			while(wordEndIdx >= 0 && tokens.charAt(wordEndIdx-1) == '\n') {
				wordEndIdx--;
			}
			String word = tokens.substring(0, wordEndIdx);
			
			remainingLen = addWord(result, word, remainingLen, maxCharsPerLine);
			if(wordEndIdx < tokens.length()){
				result.append(tokens.substring(wordEndIdx));
				remainingLen = maxCharsPerLine;
			}
			
		}
		
		scanner.close();
		return result.toString();
	}

	
	public static void main(String[] args){
		String w = wrapText("I'm Meng Lin.\n\n Nice to meet you!\n Thank you!", 8);
		System.out.println(w);
		w = wrapText("I'm Meng Lin.\n Nice to meet you!\n Thank you! 12345678", 8);
		System.out.println(w);
		w = wrapText("I'm Meng Lin.\n Nice to meet you!\n Thank you! 1234567890", 8);
		System.out.println(w);
		w = wrapText("I'm11111 Meng Lin.\n Nice to meet you!\n Thank you! 1234567890", 8);
		System.out.println(w);

	}
}
