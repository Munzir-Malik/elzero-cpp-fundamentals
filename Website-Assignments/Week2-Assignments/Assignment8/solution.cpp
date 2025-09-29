/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Because started with a number 
  __name      [ Valid | Good Practice ] Bad practice because should start with a normal letter
  name@name   [ Not Valid ] => Because contains a special character '@'
  name10name  [ Valid | Bad Practice ] Bad practice because it's not "Camel Case"
  name!name   [ Not Valid ] => Because it contains a special character '!'
  first_NAME  [ Valid | Bad Practice ] => Bad practice because it's not "Camel Case"
  first_name  [ Valid | Bad Practice ] => Bad practice because it's not "Camel Case"
  firstName   [ Valid | Good Practice] => Because using "Pascal Case"
  first name  [ Not Valid ] => Because contains an empty space
  fn          [ Valid | Bad Practice ] => Bad practice, user should use a clear name for the variables
  public      [ Not Valid ] => Because it's a reversed word in cpp language
  Public      [ Valid | Bad Practice ] => Bad practice because it's not "Camel Case"
*/