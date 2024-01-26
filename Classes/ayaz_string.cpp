#include <bits/stdc++.h>
using namespace std;
class String
{
    private:
	char str[150];
	void copy(const char ch[])
	{
		int i = 0;
		for (int j = 0; ch[j] != '\0'; j++)
			str[i++] = ch[j];
		str[i] = '\0';
	}
	void add(const char ch[])
	{
		int i = length();
		for (int j = 0; ch[j] != '\0'; j++)
			str[i++] = ch[j];
		str[i] = '\0';
	}
    public:
	String()
	{
		str[0] = '\0';
	}
	String(char ch)
	{
		str[0] = ch;
		str[1] = '\0';
	}
	String(const char ch[])
	{
		copy(ch);
	}
	int length()
	{
		int i = 0;
		for (;str[i++] != '\0';);
		return --i;
	}
	int index(char ch)
	{
		for (int i = 0; i < length(); i++)
			if (str[i] == ch)
				return i;
		return -1;
	}
	int lastindex(char ch)
	{
		for (int i = length()-1; i >= 0 ; i--)
			if (str[i] == ch)
				return i;
		return -1;
	}
	bool equals(char ch)
	{
		return (length() == 1 && str[0] == ch);
	}
	bool equals(const char ch[])
	{
		int len = length();
		if (len != strlen(ch))
			return false;
		for (int i = 0; i < len; i++)
			if (str[i] != ch[i])
				return false;
		return true;
	}
	bool equals(const String &ch)
	{
		return equals(ch.str);
	}
	String substring(int start, int end)
	{
		String s;
		if (start >= end || start < 0)
			return String("");
		for (int i = 0; i < end - start; i++)
			s.str[i] = str[start + i];
		s.str[end-start] = '\0';
		return s;
	}
	String substring(int end)
	{
		return substring(0, end);
	}
	bool contains(char ch)
	{
		return (index(ch) != -1);
	}
	bool contains(const char ch[])
	{
		int i = length();
		int ii = strlen(ch);
		if (i < ii || ii == 0)
			return false;
		int iter = i - ii + 1;
		for (int p = 0; p < iter; p++)
		{
			if (substring(p, p + ii).equals(ch))
				return true;
		}
		return false;
	}
	bool contains(const String &ch)
	{
		return contains(ch.str);
	}
	void operator=(char ch)
	{
		str[0] = ch;
		str[1] = '\0';
	}
	void operator=(const char ch[])
	{
		copy(ch);
	}
	void operator=(const String &ch)
	{
		copy(ch.str);
	}
	String operator+(char ch)
	{
		String t(str);
		t.str[length()] = ch;
		t.str[length() + 1] = '\0';
		return t;
	}
	String operator+(const char ch[])
	{
		String t(str);
		t.add(ch);
		return t;
	}
	String operator+(const String &ch)
	{
		String t(str);
		t.add(ch.str);
		return t;
	}
	bool operator==(char ch)
	{
		return equals(ch);
	}
	bool operator==(const char ch[])
	{
		return equals(ch);
	}
	bool operator==(const String &ch)
	{
		return equals(ch.str);
	}
	char operator[](int pos)
	{
		if (pos < 0 || pos >= length())
			return '\0';
		return str[pos];
	}
	friend ostream &operator<<(ostream &output, String &s)
	{
		output << s.str;
		return output;
	}
	friend istream &operator>>(istream &input, String &s)
	{
		input >> s.str;
		return input;
	}
	void getline()
	{
		cin.getline(str, 150);
	}
	void getlines(int n)
	{
		String t;
		str[0] = '\0';
		for (int i = 0; i < n; i++)
		{
			int len = length();
			t.getline();
			str[len] = '\n';
			str[len + 1] = '\0';
			for (int j = 0; j < t.length(); j++)
			{
				len = length();
				str[len] = t.str[j];
				str[len + 1] = '\0';
			}
		}
	}
};
int main()
{
	String s1, s2;
	s1 = "Hello Ayaz";
	s2 = s1.substring(5) + 'o';
	s2 = s2 + "Sorry";
	// cout << String
	cout << s1 << endl;
	cout << s2 << endl;
	// == operator
	if (s1 == s2)
		cout << s1 << " equals " << s2 << endl;
	else if (s1 == "Ayaz")
		cout << s1 << " equals Ayaz" << endl;
	else if (s1 == 'o')
		cout << s1 << " equals o" << endl;
	// .equals method
	if (s1.equals(s2))
		cout << s1 << " equals " << s2 << endl;
	else if (s1.equals("Ayaz"))
		cout << s1 << " equals Ayaz" << endl;
	else if (s1.equals('o'))
		cout << s1 << " equals o" << endl;
	// .contains method
	if (s1.contains(s2))
		cout << s1 << " contains " << s2 << endl;
	else if (s1.contains("Ayaz"))
		cout << s1 << " contains Ayaz" << endl;
	else if (s1.contains('o'))
		cout << s1 << " contains o" << endl;
	// concatenation
	s1 = s1 + s2;
	cout << s1 << " contains " << s2 << endl;
	// Constructor with c-string
	String s3("Hey Ayaz");
	cout << "Enter a word : ";
	// cin >> String
	cin >> s3;
	cout<<s3<<endl;
	cin.ignore();
	cout << "Write 1 line about Ayaz : ";
	// get single line from user
	s3.getline();
	// [] operator : accessing valid and invalid indexes
	for (int i = -1; i <= s3.length(); i++)
		cout << s3[i] << endl;
	//  Constructor with char
	String s4('a');
	cout << "Enter 2 lines about ayaz : " << endl;
	// get multiple lines from user
	s4.getlines(2);
	cout << s4 << endl;
	return 0;
}