
/* ==== FUN_15003030 @ 15003030 ==== 
 * signature: undefined4 __cdecl FUN_15003030(uint param_1)
 * body: 15003030-150030c0
 */

undefined4 __cdecl FUN_15003030(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_15006b50) {
    piVar3 = (int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_15005044 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_15003095;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_15003095:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_15003010();
  *piVar3 = 9;
  puVar4 = FUN_15003020();
  *puVar4 = 0;
  return 0xffffffff;
}


