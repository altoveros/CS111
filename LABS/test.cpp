#include <iostream>
#include <string>
using namespace std;
/*
  Replace the function body with appropriate statements to parse_movie
  a string of movie details into its corresponding movie name, rating,
  and length.
*/
void parse_movie(string movie, string& name, string& rating, string& length) 
{
  int first_comma_index,second_comma_index;

  first_comma_index = movie.find(',');
  name = movie.substr(0,first_comma_index);

  second_comma_index = movie.rfind(',');
  rating = movie.substr(first_comma_index,second_comma_index);

  length = movie.substr(second_comma_index);
} //end of parse_movie

int main() 
{
  string movie_details, movie_name, movie_rating,movie_length;
  cout << "Please enter information for one movie of your choice: ";
  getline(cin, movie_details);

  //Add appropriate statement(s) to call the parse function
  parse_movie(movie_details, movie_name, movie_rating, movie_length);
  //and display the name, rating, and length of the movie
  //in a format that is easy for user to understand.
  cout << "In '" << movie_details << "', the movie name is '" << movie_name << "', the rating is '" << movie_rating << "', and the length of the movie is '"<<movie_length << endl;
  return 0; //normal completion of the program
}