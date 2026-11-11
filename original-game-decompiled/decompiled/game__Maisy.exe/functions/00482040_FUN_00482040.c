
/* ==== FUN_00482040 @ 00482040 ==== 
 * signature: char __stdcall FUN_00482040(char * param_1)
 * body: 00482040-0048206b
 */

char FUN_00482040(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    return '\0';
  }
  pcVar1 = _strstr(param_1,&DAT_004dcd38);
  return '\x01' - (pcVar1 == (char *)0x0);
}


