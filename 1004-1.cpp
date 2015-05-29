    #include<iostream>
    #include<string>
    using namespace std;

    void BackTrake(string &s1, string &s2, string s = "", string e = "", string method = ""){	//s1原串，s2结果，s字符进栈储存，e字符出栈储存
    	if(e.length() == s2.length()){
    		cout << method << endl;
    		return;
    	}

    	if(s.length() + e.length() < s1.length())	//如果已经拿出来的字符数的长度小于原串的长度，即还可以继续进栈
    		BackTrake(s1, s2, s + s1[s.length() + e.length()], e, method + "i ");	//模拟进栈，进行下层递归
    	if(s.length() > 0 && s2[e.length()] == s[s.length() - 1]){	//如果还有字符可以出栈，并且下一个字符与s串最后一个字符相同
    		e += s[s.length() - 1];	//模拟出栈
    		s.erase(s.end() - 1);
    		BackTrake(s1, s2, s, e, method + "o ");	//下层递归
    	}
    }
    int main(){
    	string s1, s2;
    	while(cin >> s1 >> s2){
    		//count = 0;
    		cout << "[" << endl;
    		if(s1.length() == s2.length())
    			BackTrake(s1, s2);
    		cout << "]" << endl;
    		//cout << count << endl;
    	}
    	return 0;
    }
