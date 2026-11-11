
/* ==== FUN_14007260 @ 14007260 ==== 
 * signature: undefined4 __cdecl FUN_14007260(uint param_1, char * param_2)
 * body: 14007260-140072fe
 */

undefined4 __cdecl FUN_14007260(uint param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_4;
  
  local_4 = 0x18;
  do {
    uVar4 = (0xff << ((byte)local_4 & 0x1f) & param_1) >> ((byte)local_4 & 0x1f);
    if (((int)uVar4 < 0) || (0xff < (int)uVar4)) {
      return 0x10000;
    }
    bVar1 = false;
    for (iVar3 = 100; (uVar4 != 0 || (iVar3 == 1)); iVar3 = iVar3 / 10) {
      iVar2 = (int)uVar4 / iVar3;
      if ((iVar2 != 0) || ((bVar1 || (iVar3 == 1)))) {
        *param_2 = (char)iVar2 + '0';
        param_2 = param_2 + 1;
        bVar1 = true;
      }
      uVar4 = uVar4 - iVar3 * iVar2;
    }
    if (local_4 != 0) {
      *param_2 = '.';
      param_2 = param_2 + 1;
    }
    local_4 = local_4 + -8;
  } while (-1 < local_4);
  *param_2 = '\0';
  return 0;
}


