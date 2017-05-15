package com.lm;
import java.util.Map;
import java.util.HashMap;

public class StateUtils {
	
	  private static Map<String, String> stateNameToAbbr = new HashMap<String, String>();
	  private static Map<String, String> abbrToStateName = new HashMap<String, String>();
	  static {
		  stateNameToAbbr.put("Alabama", "AL");
		  abbrToStateName.put("AL", "Alabama");
		  
		  stateNameToAbbr.put("Alaska", "AK");
		  abbrToStateName.put("AK", "Alaska");
		  
		  stateNameToAbbr.put("Arizona", "AZ");
		  abbrToStateName.put("AZ", "Arizona");
		  
		  stateNameToAbbr.put("Arkansas", "AR");
		  abbrToStateName.put("AR", "Arkansas");
		  
		  stateNameToAbbr.put("California", "CA");
		  abbrToStateName.put("CA", "California");
	  }
	  //
	  // Generates an HTML select list that can be used to select a specific
	  // U.S. state.
	  //
	  public static String createStateSelectList()
	  {
		  String selectOpenTag = "<select name=\"state\">\n";
		  String selectCloseTag = "</select>\n";
		  String options = "";
		  
		  for(String stateName : stateNameToAbbr.keySet()) {
			  options += "<option value=\"" + stateName + "\">" + stateName + "</option>\n";
		  }
	    return selectOpenTag + options + selectCloseTag;
	  }

	  //
	  // Parses the state from an HTML form submission, converting it to
	  // the two-letter abbreviation.
	  //
	  public static String parseSelectedState(String s)
	  {
	    return stateNameToAbbr.get(s);
	  }

	  //
	  // Displays the full name of the state specified by the two-letter code.
	  //
	  public static String displayStateFullName(String abbr)
	  {
	    return abbrToStateName.get(abbr);
	  }
	  
	  public static void main(String[] args){
		  System.out.println(StateUtils.createStateSelectList());
		  System.out.println(StateUtils.parseSelectedState("Alabama"));
		  System.out.println(StateUtils.parseSelectedState("Alabama1"));
		  System.out.println(StateUtils.displayStateFullName("AL"));
		  System.out.println(StateUtils.displayStateFullName("AL1"));
	  }
}
