# Example of using STL C++

## Snippets for competitive programming codeforce By sar_warish,

VS code is one of the most widely used code editors by people around the world. In this post i will guide u to setup a small beginners default code sample for Cpp programmers and will provide u with a .json formatted text for use.

1 : Open VS code > File > Prefrences > User Snippets

2 : then select cpp from the drop down(or just type it in, if not available download a cpp code extension from the market : "C/C++ for Visual Studio Code")

3 : then paste below json code in the cpp.json file :

```
{
	"Competitive Programming":{
		"prefix": "!Cpp",
		"body": [
			"#include <bits/stdc++.h>",
			"using namespace std;",
			"",
			"int main(){",
			"\tios_base::sync_with_stdio(false);",
			"\tcin.tie(nullptr);",
            "\tcout.tie(nullptr);",
			"\t",
			"\t$0",
			"}"
		],
		"description": "competitive programming starte code."
	}
}
```

4 : now save it

5 : open a new file with .cpp extension

6 : just type : !Cpp and select cpp- cp from the dropdown..... That's it.