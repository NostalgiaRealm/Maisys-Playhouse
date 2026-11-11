
/* ==== FUN_1000_07f2 @ 1000:07f2 ==== 
 * signature: undefined __cdecl16near FUN_1000_07f2(void)
 * body: 1000:07f2-1000:080c
 */

int __cdecl16near FUN_1000_07f2(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


