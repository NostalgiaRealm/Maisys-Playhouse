
/* ==== FUN_0043ba40 @ 0043ba40 ==== 
 * signature: int __cdecl FUN_0043ba40(char * param_1)
 * body: 0043ba40-0043ba60
 */

int __cdecl FUN_0043ba40(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


