
/* ==== FUN_1000_08a2 @ 1000:08a2 ==== 
 * signature: undefined __cdecl16near FUN_1000_08a2(void)
 * body: 1000:08a2-1000:08ca
 */

char * __cdecl16near FUN_1000_08a2(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = true;
  uVar2 = 0xffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = param_2 == *pcVar1;
  } while (!bVar4);
  if (bVar4) {
    param_1 = param_1 + -1;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}


