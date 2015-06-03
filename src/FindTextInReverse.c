#include "FindTextInReverse.h"
#include "stdio.h"


/**
 * Find the first (partial) word in the text and return the position of 
 * the first letter in REVERSE. 
 * Eg.,
 *  text       = Hello, my name is Alladin
 *  wordToFind = lad
 *  The return value is 20
 *
 * Input: 
 *  text          contains a bunch of words
 *  wordToFind    is the (partial) word to find in the text
 * Return:
 *  the position of the first letter found in text. If the word 
 *  cannot be found in the text, -1 is returned. 
 */
 
 int reverseFindText(char *text, char *wordToFind) {
  int i=0, j=0, l=0;
  
  
  //To count the text to let the i to point at the end
  while(text[i] != 0){
	  printf("[%d], %c %c\n",i , text[i], wordToFind[j]);
	  i++;
  }
  i--;//To exclude the "0" that exist in the end of a array
  
  //To start match the text from the end of the array
  while(text[i] != 0){
	  j=0;
	  if(text[i] == wordToFind[0]){
		  while(wordToFind[j] != 0){
			  if(text[i+j] == wordToFind[j] && wordToFind[j+1] == 0 ){
				  printf("[%d], %c %c equal\n",i+j , text[i+j], wordToFind[j]);
			      return i; //return the position of the first letter
			  }
			  else if(text[i+j] == wordToFind[j]){
				  printf("[%d], %c %c equal\n",i+j , text[i+j], wordToFind[j]);
			  }
			  else{
				  printf("[%d], %c %c not equal\n",i+j , text[i+j], wordToFind[j]);
				  break;
			  }
			  j++;
		  }
      }
	  else{
		  printf("[%d], %c %c not equal\n",i , text[i], wordToFind[j]);
	  }
	i--;
  }
  return -1;//return -1 if no matches
  
 }