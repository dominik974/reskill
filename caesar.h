#include <string>
using namespace std;

class CaesarExtended
{
private:
    string alphabet;
    string encrypt_alphabet;

public:
    CaesarExtended(string sentence, int shift)
    {
        for (char lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
            alphabet += lowercase_letter;

        for (char uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++)
            alphabet += uppercase_letter;

        string alpha = alphabet;
        int alphaLen = alphabet.size();

        int length_sentence = sentence.size();

        for (int i = 0; i < length_sentence; i++)
        {
            char ch = sentence[i];
            int z = alpha.find(ch);
            alpha = alpha.substr(0, z) + alpha.substr(z + 1, alphaLen - i);
        }

        int na = alpha.size();
        encrypt_alphabet = alpha.substr(na - shift, na) + sentence + alpha.substr(0, alphaLen - length_sentence - shift);
        std::cout << "\na: " << alphabet << "\n";
        std::cout << "k: " << encrypt_alphabet << "\n\n";
    }

    string encrypt(string decryptedSentence)
    {
        string encryptedSentence = "";

        for (int pos_sentence = 0; pos_sentence < decryptedSentence.size(); pos_sentence++)
        {
            int pos_alphabet = alphabet.find(decryptedSentence[pos_sentence]);
            char encrypted_char = encrypt_alphabet[pos_alphabet];
            encryptedSentence = encryptedSentence + encrypted_char;
        }

        return encryptedSentence;
    }

    string decrypt(string encryptedSentence)
    {
        int pos_encrypted_alphabet;
        string decryptedSentence = "";

        for (int pos_sentence = 0; pos_sentence < encryptedSentence.size(); pos_sentence++)
        {
            pos_encrypted_alphabet = encrypt_alphabet.find(encryptedSentence[pos_sentence]);
            decryptedSentence = decryptedSentence + alphabet[pos_encrypted_alphabet];
        }

        return decryptedSentence;
    }
};
