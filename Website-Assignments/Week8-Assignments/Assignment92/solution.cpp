#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string websiteName, string domain, bool www = true){
  string url;
  if(www == true) url = protocol + "://www." + websiteName + '.' + domain; 
  else url = protocol + "://" + websiteName + '.' + domain;



  return url;
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}