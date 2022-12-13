# Game Engine Creation
<details>
<summary> Chapter 1: Introduction </summary>
<br>

<details>
<summary> 1: Hello World</summary>
<br>
Program 1 was the hello world program, almost all programmers would know this is the basic bear bones program that every programmer typcily startd with.
<br>
A basic explination of how this works is, once the script runs it outputs the phrase "Hellow World!" to the console. This first programe is mainly used to give me something simple to start learning with.

```
#include <iostream>

int main()
{
  std::cout << "HelloWorld!" << std::endl;
}
```
</details>
</details>
<br>

<details>
<summary> Chapter 2: Data Types</summary>
<br>

<details>
<summary> 2: Data Type Size</summary>
<br>
Program 2 was coused on learning different veriables and learning how to out put the size of a veriable accoring to the ammount of bytes it uses.
<br>
The way this is working is we use the same out put method as done with the sixeof() operator.
<br>

![Capture](https://user-images.githubusercontent.com/115167027/207434687-9df6c575-f75d-44bf-892c-04f5c0a4954d.PNG)

</details>
</details>
<br>

<details>
<summary> Chapter 3: Veriables Types</summary>
<br>

<details>
<summary> 3: Defining Veriables</summary>
<br>
Program 3 was defining variables which was where I first stated using variables in coding the sole puprose of this program was to help me learn how variables work and how to store values in them.
<br>
The what this worked is I was creating variables and setting the values and the I output them to the console to understand how variables work and hpw I can apply them in the future.

```
#include <iostream>

using namespace std;

int main()
{
	int myInt1 = 5, myInt2;
	myInt2 = 10;

	cout << "Value stored in myInt1 is " << myInt1 << endl;
	cout << "Value stored in myInt2 is " << myInt2 << endl;

	float myFloat1 = 1.2f, myFloat2;
	myFloat2 = 9.9f;

	cout << "Value stoared in myFloat1 is " << myFloat1 << endl;
	cout << "Value stoared in myFloat2 is " << myFloat2 << endl;

	char myChar = 'a';

	cout << "Value stored in myChar is " << myChar << endl;
}
```
<br>

![Capture](https://user-images.githubusercontent.com/115167027/207436594-b9bb3211-1dfb-407b-8b08-57e769da2ed6.PNG)

</details>
<details>
<summary> 4: User Defined Variables</summary>
<br>
Program 4 was when I was first introduced to enumerators and the typedef keyword. From this I learned how enumerators work by assining a value a name depending on the order of the enumerator, and I also learned that typedef allows me to give variables a alternative name to be refered by in this example I made the unsigned short int a variable called "health" which I could then use to to greate a value named "currentHealth" and assign what ever value I want which will be of type unsigned short int.

```
#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short int health;
	health currentHealth;

	enum weapon
	{
		Sword = 1,
		Dagger,
		Mace,
		Twin_Swords,
		Samurai,
		Wizard_Staff,
		Fire_Potion,
		Ice_Blade,
		Small_Knife
	};
	weapon currentWeapon;

	currentHealth = 13000;

	currentWeapon = Samurai;
	
	cout << "My current health is " << currentHealth << endl;

	cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207439606-a20ae2fe-1f59-46cb-adcb-25e1df7a64f6.png)

</details>
</details>
<br>

<details>
<summary> Chapter 4: Operators</summary>
<br>

<details>
<summary> 5: Increment/Decrement</summary>
<br>
Program 5 is going back to the basics of variables utalising the decrement and increment operators in order to display how values are affeced by diffent uses of incrementing and decrementing them.

```
#include <iostream>
using namespace std;

int main()
{
	// Initialise num to 1
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "num after = " << num << endl;

	/* resets num back to 1
	
	this type of commenting is usefull thanks*/
	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	//I just like commenting =)
	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator before num = " << --num << endl;
	cout << "num after = " << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator after num = " << num-- << endl;
	cout << "num after = " << num << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207441348-318e0855-54cf-41db-a860-40ca55ca4109.png)

</details>

<details>
<summary> 6: Area</summary>
<br>
Program 6 is learning more basic operators mainly the + * time to figgure out the area of a rectangular shape by predefined variables.

```
#include <iostream>
using namespace std;

int main()
{
	typedef unsigned int width;
	width CW;

	typedef unsigned int hight;
	hight CH;

	typedef unsigned int area;
	area CA;

	CW = 15;
	CH = 25;

	// this times the current width by the current hight in order to find the current area
	CA = CW * CH;
    
	cout << "the area of a " << CW << " by " << CH << " rectangle is " << CA << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207442372-b4abd560-a846-4e6b-9cdb-e4e30ec432e9.png)

</details>

<details>
<summary> 7: Converting</summary>
<br>
Program 7 is where I convert a value representing temperature in fahrenhite and converting it to celsius this time I get an intreduction to the key uses of "BIDMAS" in order to correctly pull off the calculation which is "(F - 32) * 0.5556".

```
#include <iostream>
using namespace std;

int main()
{
	typedef float fahrenhite;
	typedef float celsius;

	fahrenhite CF;
	celsius CC;

	CF = 95.0f;

	//calculate celsius by doing math idk =)
	CC = (CF - 32) * 0.5556;

	cout << CF << "F is equal to " << CC << "C." << endl;

	return 0;
} 
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207443640-8e6dbe55-ca3f-4e28-8ed5-99324c4c8bac.png)

</details>

<details>
<summary> 8: Area of Circle</summary>
<br>
Program 8 is where I found the area of a circle by using "pi * radius squared", and although it wasn't part of the program requirements I also included the use of the "cmath" libary to use the pow() function for doing radius squared.

```
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pi = 3.14159;

	float area;
	float radius;

	radius = 25.0f;

	/* diceded to use a new libary to get the abiltiy to use powers rather than do radius* radius
	this section finds the area by doing pi * radius squared */
	area = pi * pow(radius, 2);

	cout << "The area of a circle with a radius of " << radius << " is " << area << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207445060-9bd515bb-ed00-4edb-ad16-e8da93a14ada.png)

</details>
</details>
<br>

<details>
<summary> Chapter 5: Conditionals</summary>
<br>

<details>
<summary> 9: Share Of Savings</summary>
<br>
Program 9 is one last look at all the programs I have done previously to solve the following broken code:

```
#include <iostream>
using namespace std;

int main()
{
	int mySavings = 2000;
	int yourPercentage = 50;
	int yourShare = (mySavings * (yourPercentage / 100));

	cout << "your share: " << yourShare << endl;

	return 0;
}
```
<br>
This was an esay code to fix to as all I needed to do to change the variable of yourPrecentage from an int to a float and that fixes the broken code. The reason this broke is because when you are doing 50/100 you are creating a decimal value, however an int can't hold that so it just set the value to 0 instead of 0.5 but giving it a varaible of float makes it so that it can hold that value while doing the math.
</details>

<details>
<summary> 10: Spliting Haribos</summary>
<br>
Program 10 required me to use math to split 40 Haribos between 14 people and declare the remaing amount.
<br>
The basic math is to find how many is being shared by doing 40/14 which since theyas ints so that they round the value down, which will give me how much each person gets which is 2. 
<br>
Using the value of how many each person get I times that  which is 2 by the number of students 14 and subtract the answer 28 by the total amount of haribos 40 which gives me the answer of 12.
<br>

![image](https://user-images.githubusercontent.com/115167027/207451458-bcbd8a10-1db2-4475-b35f-54253ef012cb.png)

</details>

<details>
<summary> 11: Doom Difficulty</summary>
<br>
Program 11 is my first introduction to conditionals where I use a switch statment to decide the output of console, and this is also my first introduction to using cin to set a value from console.
<br>
What I did here was I ask the user to input a number to pick a difficulty and that will call a switch statment and depending on the value it will send out to the console one of 5 outputs.

```
#include <iostream>
using namespace std;

int main() 
{
	int playerinput;

	cout << "select difficulty" << endl << "1. I'm too young too die" << endl << "2. Hey, not to rough!" << endl << "3. Hurt me plenty" << endl << "4. Ultra-Violence" << endl << "5. Nightmare" << endl;

	cin >> playerinput;

	switch (playerinput)
	{
	case 1:
		cout << "WEAK!" << endl;
		break;
	case 2:
		cout << "Come on get some pain in" << endl;
		break;
	case 3:
		cout << "FEEL THE PAIN" << endl;
		break;
	case 4:
		cout << "Blood for the blood god, skulls for the skull throne!" << endl;
		break;
	case 5:
		cout << "ONE WAY TRIP TO HELL BOYS!" << endl;
	}
}
```
</details>

<details>
<summary> 12: Weather</summary>
<br>
Program 12 is where I first use if, else if, else statments. The way I did this is the user would input two values one for weather and anouther for temperature and it goes though a serise of if, else if, and else statments in order to find the console output.

```
#include <iostream>
using namespace std;

int main()
{
	int rian = 1;
	int snow = 2;

	int weather;
	float temp;

	cout << "Please tell me if it's raining with 1, or snowing with 2." << endl;

	cin >> weather;

	cout << "What temperature in Celsius" << endl;

	cin >> temp;

	if (weather == 1)
	{
		if(temp > 15)
		{
			cout << "Wear a light coat" << endl;
		}
		else
		{
			cout << "Wear a thick coat" << endl;

		}
	}
	else if (weather == 2)
	{
		if (temp > 5)
		{
			cout << "Wear a something warm" << endl;
		}
		else if (temp > 0)
		{
			cout << "Wrap up well" << endl;
		}
		else
		{
			cout << "Stay home" << endl;
		}
	}
	else
	{
		cout << "Have a nice day" << endl;
	}
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207453375-3d0afbcc-b66f-41d0-ba30-9c46e3533ba4.png)

</details>

<details>
<summary> 13: Game Discounts</summary>
<br>
Program 13 is like program 12 except I get introduced to the and "&&", or "||" operators inorder to decide the output. These are used to to change conditions to take account of other variables instead of just a single variable.   

```
#include <iostream>
using namespace std;
int main()
{
	char status;
	unsigned short int game;

	cout << "Please tell my your status with 's' for student 't' for teacher or 'o' for other." << endl;

	cin >> status;

	cout << "What game would you like 1 or 2?" << endl;

	cin >> game;

	if (status == 's' && game == 1 || status == 't' && game == 1)
	{
		cout << "You have 20% off" << endl;
	}
	else if (status == 's' && game == 2 || status == 't' && game == 2)
	{
		cout << "You have 10% off" << endl;
	}
	else
	{
		cout << "You are not entitle to a discount" << endl;
	}
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207454162-b66af5c0-0860-4281-80f0-b41035f639f5.png)

</details>
</details>
<br>

<details>
<summary> Chapter 6: Loops</summary>
<br>

<details>
<summary> 14: 10 Numbers</summary>
<br>
Program 14 is where I get introduced to do while loops which as it says will do a section of code while a certain condition is ture, in this case while the number input != 0. 

```
	do
	{
		cout << "Enter a numbers." << endl;
		cin >> inputNum;
		if (inputNum != 0)
		{
			total += inputNum;

			mean = (float)total / numCount;

			cout << "mean: " << mean << endl;
			cout << "total: " << total << endl;
		}
	} while (inputNum !=0);
```
<br>
What the program is doing overall is asking for 2 numbers then it will find the total and the mean and tell the use what they are. After that it enters a do while loop where so long as the input is not 0 it will add the number to the total find the new mean of the total and then tell the user.
<br>

![image](https://user-images.githubusercontent.com/115167027/207456238-386e4d95-ed53-4837-ba07-0c553a980627.png)
</details>

<details>
<summary> 15: Starry Output</summary>
<br>
Program 15 I had to ask the user for a value between 1-10 and out put the * character so that on for the value the user gave it will output the stars on that many lines however for each line it adds 1 star.
<br>
The way I did this is by creating a for loop that adds a * to a string each time it loops and sends that string to the console each time the loop ends.

```
	int n;
	char star = '*';
	cout << "please enter a number between 1-10" << endl;
	cin >> n;
	char a;
	
	string print;
	for (int i = 0; i < n; i++)
	{
		print += star;
		
		cout << print << endl;
	}
```
<br>
After that I needed to ask the user if they wanted to add another to the output and if they said yes then it would do the same proccess with the string, and I'd have that in a do while loop which loops for when the player says no to the question.

```
	do
	{
		
		cout << "Do you want to have another go. [Y or N]" << endl << "caps sensitive!" << endl;
		cin >> a;

		if (a == 'Y')
		{
			print += star;

			cout << print << endl;
		}
	} while (a != 'N');
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207458273-8ebe8b0a-840c-4a57-8021-eae60973c68d.png)

</details>

<details>
<summary> 16: Early Exit</summary>
<br>
Program 16 is a simple program where there is a value of life and the use inputs how much damage to inflic, it reapeast this 10 times and if the life value is <=0 then it will end the loop early and tell them the player dies.

```
#include <iostream>
using namespace std;

int main()
{
	short int playerLife = 100;
	short int damage;

	for (int i = 0; i < 10; i++)
	{
		
		if (playerLife > 0)
		{
			cout << "Player life is: " << playerLife << endl;
			cout << "Question " << i << ": How much damage shall I deal?" << endl;
			cin >> damage;
			playerLife -= damage;
		}
		
		if (playerLife <= 0)
		{
			i = 10;
			cout << "early end. Player died" << endl;
		}
	}

	if (playerLife > 0)
		cout << "All questions asked. Plaayer survivied!" << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207459033-ec1274ac-61b9-485a-ab94-8daae6bcf528.png)

</details>
</details>
<br>

<details>
<summary> Chapter 7: Functions</summary>
<br>

<details>
<summary> 17: Local Veriables and Copies</summary>
<br>
Program 17 is my introduction to functions and is where I show how values passed into a parameter do not get affected by what happens to the value that parameter represents.

```
#include <iostream>

using namespace std;

void addTwo(int num)
{
	num += 2;

	cout << "FUNCTION: num = " << num << endl;
}

int main()
{
	int myNum = 6;
	
	cout << "MAIN [before]: myNum = " << myNum << endl;
	addTwo(myNum);
	cout << "MAIN [after]: myNum = " << myNum << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207459975-3c165f58-1134-4e0b-8e7a-4a8c9e96fb68.png)

</details>

<details>
<summary> 18: Smallest Number</summary>
<br>
Program 18 is where I use functions to perform a list of task consisting of: finding the smalles number of a two numbers, multiplying a number by 10, and dividing that number by 3. All of these had to be done useing functions to pass though parameters and for the multiply one returning the answer to the function.
<br>
Since this is my first time returning a value to a function it helped me learn how to use it and the purpose in doing such

```
int main()
{
	for (int i = 0; i < 3; i++)
	{
		int valA;
		int valB;

		cout << "Enter your first number:" << endl;
		cin >> valA;
		cout << endl << "Enter your second number:" << endl;
		cin >> valB;

		smallestNumber(valA, valB);
	}

	for (int i = 0; i < 3; i++)
	{
		int myNum;

		cout << endl << "Enter a number to be mutliped by 10 then divided by 3:" << endl;
		cin >> myNum;

		float answerA = multipy(myNum);
		divide(answerA);
	}
}

void smallestNumber(int a, int b)
{
	if (a < b)
		cout << endl << a << " is the smallest number." << endl << endl;
	else if (b < a)
		cout << endl << b << " is the smallest number." << endl << endl;
	else 
		cout << endl << b << " and " << a <<" are the same value." << endl << endl;

}

int multipy(int num)
{
	return num * 10;
}

void divide(int numB)
{
	int finalAnswer = numB / 3;
	
	cout << endl << "* 10 is " << numB << " / 3 is " << finalAnswer << endl << endl;
}
```
<br>

</details>

<details>
<summary> 19: Odd and Even</summary>
<br>
Program 19 is where I was tasked to get the user to input 10 number and from those time I needed to tell them the number of odd, and even, and the total of both.
<br>
First I'd create a for loop that loops 10 time, which would get the user to enter a value and then check if its even though a function and depending on the result it will add to the corsponding total and number of values.

```
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		
		if (evenCheck(num))
		{
			evenNum++;
			evenTotal += num;
		}
		else
		{
			oddNum++;
			oddTotal += num;
		}
	}
```
<br>

```
bool evenCheck(int value)
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}
```
<br>

After that the final resualts send into a function that will output the results to the console.

```
void outputResults(int numOfOdd, int totalOfOdd, int numOfEven, int totalOfEven)
{
	cout << "There are " << numOfOdd << " odd numbers, totaling " << totalOfOdd << "." << endl;
	cout << "There are " << numOfEven << " odd numbers, totaling " << totalOfEven << "." << endl;
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207462535-9afe9b97-86a4-4623-be95-45c20dfb8648.png)

</details>

<details>
<summary> 20: Text PVE Fight</summary>
<br>
Program 20 I was given the pseudo code bellow and from that code I was tasked to build a text based PVE fight, which makes me use most of what I have learned so far in order to desgin it.

<br>
<details>
<summary>psuedo code</summary>
<br>

![image](https://user-images.githubusercontent.com/115167027/207463047-e7d33b0c-10bd-494d-a244-a96e059e56bc.png)
![image](https://user-images.githubusercontent.com/115167027/207463064-71fa8c71-3644-451e-b901-0799c10876b0.png)
![image](https://user-images.githubusercontent.com/115167027/207463109-0ee41906-ef01-4f7c-a2b6-b719b0753d29.png)
</details>
<br>

![image](https://user-images.githubusercontent.com/115167027/207463702-44c209f0-b476-4d8e-b53f-b62ad8d9097b.png)

</details>
</details>
<br>

<details>
<summary>Chapter 8: Arrays</summary>
<br>

<details>
<summary> 21: Smallest Element</summary>
<br>
Program 21 had me use arrays for the first time and with this it wanted me to find the smallest number in the array with a 10 variable size which is a simple proccess of gettign the user to input 10 numbers, and from there it will loop from the 10 numbers of the array and check if the current smallest is less that the previous smallest and save it, and at the same time it finds the loop position and adds 1 to display to represent the ture current postion.

```
int main()
{
	int listOfNum[10];
	int smallestNum;
	int position;

	cout << "Please enter 10 numbers" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> listOfNum[i];
	}

	smallestNum = listOfNum[0];

	for (int j = 0; j < 10; ++j)
	{
		if (smallestNum > listOfNum[j])
		{
			smallestNum = listOfNum[j];
			position = j + 1;
		}
	}
	
	cout << "The smallest number is: " << smallestNum << ", it is number " << position << " on the list";
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207466616-27657f0f-38af-4472-9ae2-e0857e807919.png)

</details>

<details>
<summary> 22: Ordered Output</summary>
<br>
Program 22 had me create an array to hold 5 values and from those 5 values the code had output the array in decending order, accedning order, and the largest element and it's position in the array.
<br>
I had a function for the larges element that is called before sorting teh values in accending/decending order, which would loop through the array and compare the previous larges with the current element and set the higher number as the largest number.

```
void LargestNum(int arr[])
{
	int largest;
	int largestPos;

	largest = arr[1];

	for (int i = 0; i < 5; ++i)
	{

		if (largest < arr[i])
		{
			largest = arr[i];
			largestPos = i + 1;
		}
	}

	cout << endl << "The largest number is: " << largest << ", and it is number " << largestPos << " on the list." << endl;
}
```
<br>

After that i used the sort function for the algorithm libary which allowed me to sort the array in accending order and from there I looped though the array and outputed the values, and for decending order I looped though the array backwards and did the same thing.

```
	cout << endl << "In accending order you inputed:" << endl;

	sort(nums, nums + 5);

	for (int i = 0; i < 5; ++i)
		cout << nums[i] << ", ";

	cout << endl << endl << "In decending order you inputed:" << endl;

	for (int i = 4; i > -1; --i)
		cout << nums[i] << ", ";
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207468014-c69bb730-8c60-494d-8189-e7dccb72ab8c.png)

</details>

<details>
<summary> 23: Inventory</summary>
<br>
Program 23 had me make an simple inventory system using arrays, and using that I have to offer the user a staff and ask if they want to replace their daggers with it. After the player makes their decision I need to display the content of the inventory.
<br>
The items in the inventory were represented using strings, and when replacing the daggers I simply set the position of the staff in the array to be daggers instead.

```
	const int Total = 4;
	int Num = 0;
	std::string inventory[4];


	inventory[Num++] = "Sword";
	inventory[Num++] = "Battle Axe";
	inventory[Num++] = "Healing Potion";
	inventory[Num++] = "Daggers";

	std::cout << "You found a STAFF!" << std::endl << "Would you like to swap your DAGGERS for it? (Y/N)" << std::endl;

	char Answer;

	std::cin >> Answer;

	if (Answer == 'Y' || Answer == 'y')
	{
		std::cout << std::endl << "You left your DAGGERS behind, and gained a STAFF!" << std::endl;
		inventory[3] = "Staff";
	}
	else
		std::cout << std::endl << "You left the STAFF behind." << std::endl;
```
<br>
For displaying the contents I call a function that loops over the array, and display the string in it's current position.

```
void InvetoryRead(std::string inv[])
{
	std::cout << std::endl << "Your invetory contains:" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		std::cout << inv[i] << std::endl;
	}
}
```
<br>

![image](https://user-images.githubusercontent.com/115167027/207469016-f2124783-f8f9-41bb-b861-2d7d60f634c8.png)

</details>

<details>
<summary> 24: Matching Pairs</summary>
<br>
Program 24 had me build a text based version of snap which would have me find two matching cards with the help of the pseudo code bollow. This code also introduced me to a few new way of doing certain cations, like using "system("cls") to clear a console.
<br>
<details>
<summary>psuedo code</summary>
<br>

![image](https://user-images.githubusercontent.com/115167027/207469558-02eaccd8-ec39-4748-b659-9c0e7870810c.png)
![image](https://user-images.githubusercontent.com/115167027/207469574-fcb9c72c-2db4-421c-a437-f048480e338c.png)
![image](https://user-images.githubusercontent.com/115167027/207469590-91d6c791-02ec-42a5-9ae7-517389552185.png)
![image](https://user-images.githubusercontent.com/115167027/207469604-bdd4f3eb-2fd7-48c4-ad99-45f5744b8b58.png)
</details>
<br>

![image](https://user-images.githubusercontent.com/115167027/207469760-af11e4aa-a26a-43ac-8399-df6b027563ef.png)

</details>
</details>
<br>

<details>
<summary> 25: Initals</summary>
<br>

</details>

<details>
<summary> 26: Replacing Characters</summary>
<br>

</details>

<details>
<summary> 27: String Manipulation</summary>
<br>

</details>

<details>
<summary> 28: String and Vectors</summary>
<br>

</details>

<details>
<summary> 29: Rock, Paper< Scissors</summary>
<br>

</details>

<details>
<summary> 30: Broken Code</summary>
<br>

</details>

<details>
<summary> 31: Unexpected Code</summary>
<br>

</details>

<details>
<summary> 32: Broken BMI</summary>
<br>

</details>

<details>
<summary> 33: Structs</summary>
<br>

</details>

<details>
<summary> 34: Replacing Commas With Spaces</summary>
<br>

</details>

<details>
<summary> 35: Changing Pointers</summary>
<br>

</details>

<details>
<summary> 36: Using Refernce</summary>
<br>

</details>

<details>
<summary> 37: Designated User name</summary>
<br>

</details>
