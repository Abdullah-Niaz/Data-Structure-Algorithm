# g++ -g -o code.exe code.cpp
## gdb code.exe


* **break:** Set a breakpoint at a specific line or function.
	- **line break:**
		(gdb) break 10
		(gdb) break filename.cpp:10
   	- **Function:**
		(gdb) break function_name
	- **Address BreakPoint:** 
		(gdb) break *0xaddress
	- **Condition BreakPoint:**
		(gdb) break 10 if x == 10
	- **information of breakpoint:**
		(gdb) info breakpoints
	- **delete breakpoints**
		(gdb) delete 1

* **run:** Run the program until the next breakpoint or until it finishes.

* **continue:** Continue running the program until the next breakpoint.

* **next:** Execute the next line of code.

* **step:** Step into functions called on the current line.
  
* **print:** Print the value of a variable.

* **backtrace:** Print a backtrace of the function call stack.
  