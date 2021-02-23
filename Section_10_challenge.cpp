//Section 10
//Challenge
//Substitution Cipher

/*
A simple and very old method of sending secret
messages is a substitution cipher.
You might have used this cipher with your
friends when you were a kid.
Basically, each letter of the alphabet gets
substituted by another letter of the alphabet.
For example, ever 'a' get replaced with an 'X',
and every 'b' gets replaced with a 'Z', etc.

Write a program that asks a user to enter a secret message.

Encrypt this message using the substituion cipher and display
the encrypted message.
Then decrypt the encrypted message back to the original message.

You may use 2 strings below for your substitution.
For example, to encrypt you can replace the character at
position n in alphabet with the character at position n in the alphabet.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"!_^&n/678@;:'(+=)*#~`123|[]{}t%pqjlewmn0gdx94.ruvaik"};

	string secret_message{};
	cout<<"Enter Secret message :: ";
  getline(cin, secret_message);

	string encrypted_message{};

	cout<<"\n Encrypting message.........."<<endl;

	for (int i=0; i<secret_message.length(); i++){
			size_t position = alpha.find(secret_message[i]);

			if(position!= string::npos){
					char new_char = { key.at(position)  };
						encrypted_message+=new_char;
			}
			else{
				encrypted_message+=secret_message[i];
			}
	}

	cout<<"\n Encrypted message  :: "<<encrypted_message<<endl;

	string decrypted_message {};
	cout<< "\n Decrypting message.........."<<endl;

	for (int i=0; i<encrypted_message.length(); i++){
			size_t pos = key.find(encrypted_message[i]);

			if(pos!= string::npos){
					char new_cha = { alpha.at(pos)  };
						decrypted_message+=new_cha;
			}
			else{
				decrypted_message+=encrypted_message[i];
			}
	}
	cout<<"\n Decrypted message  :: "<<decrypted_message<<endl;

}
