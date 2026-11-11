
/* ==== FUN_14012010 @ 14012010 ==== 
 * signature: undefined __cdecl FUN_14012010(int param_1, int param_2)
 * body: 14012010-1401209f
 */

void __cdecl FUN_14012010(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 local_4;
  
  local_4 = 10;
  sVar3 = 1;
  iVar1 = param_1 / 10;
  while (iVar1 != 0) {
    sVar3 = sVar3 + 1;
    local_4 = local_4 * 10;
    iVar1 = param_1 / local_4;
  }
  sVar2 = 0;
  *(undefined1 *)(sVar3 + param_2) = 0;
  if (0 < sVar3) {
    do {
      local_4 = local_4 / 10;
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      *(char *)(iVar1 + param_2) = (char)(param_1 / local_4) + '0';
      param_1 = param_1 - local_4 * (param_1 / local_4);
    } while (sVar2 < sVar3);
  }
  return;
}


