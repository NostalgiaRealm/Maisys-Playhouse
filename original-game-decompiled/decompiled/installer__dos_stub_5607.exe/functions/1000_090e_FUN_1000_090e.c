
/* ==== FUN_1000_090e @ 1000:090e ==== 
 * signature: undefined __cdecl16near FUN_1000_090e(void)
 * body: 1000:090e-1000:0935
 */

char * __cdecl16near FUN_1000_090e(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = ~uVar2;
  param_1 = param_1 + -1;
  bVar3 = param_1 == (char *)0x0;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + -1;
    bVar3 = param_2 == *pcVar1;
  } while (!bVar3);
  if (bVar3) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}


