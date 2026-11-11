
/* ==== FUN_14015030 @ 14015030 ==== 
 * signature: undefined4 __cdecl FUN_14015030(char param_1, int param_2)
 * body: 14015030-1401504e
 */

undefined4 __cdecl FUN_14015030(char param_1,int param_2)

{
  char *pcVar1;
  uint3 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pcVar1 = (char *)(param_2 + iVar3);
    uVar2 = (uint3)((uint)param_2 >> 8);
    if (*pcVar1 == '\0') {
      return (uint)uVar2 << 8;
    }
    iVar3 = iVar3 + 1;
  } while (*pcVar1 != param_1);
  return CONCAT31(uVar2,1);
}


