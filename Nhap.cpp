#include<stdio.h>
// Giving some delay
void delay( unsigned int value)
{
unsigned int count1 = 0;
unsigned int count2 = 0;
for(count1 = 0; count1 < value; count1 ++)
{
for(count2 = 0; count2 < count1; count2 ++)
{
}
}
}
// string to display Rocket
const char rocket[] =
" \n\
/^\\\n\
|-|\n\
| |\n\
|N|\n\
|A|\n\
|S|\n\
|A|\n\
/| |\\\n\
/ | | \\\n\
| | | |\n\
`-\"\"\"-`\n\
";
int main()
{
int jumConTrolATBotoom = 0;
const int someDelay = 40000;
int shifControl = 0;
// jump to bottom of console
for(jumConTrolATBotoom = 0; jumConTrolATBotoom < 30; ++ jumConTrolATBotoom )
{
printf("\n");
}
//print rocket
fputs(rocket, stdout);
for(shifControl = 0; shifControl < 30; ++ shifControl )
{
// Rocket move on the basis of delay
delay(someDelay);
//move rocket a line upward
printf("\n");
}
return 0;
} 

