
/* ==== FUN_14022790 @ 14022790 ==== 
 * signature: undefined4 __cdecl FUN_14022790(uint param_1)
 * body: 14022790-14022820
 */

undefined4 __cdecl FUN_14022790(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_14029f70) {
    piVar3 = (int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_14026e50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_140227f5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_140227f5:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_14021040();
  *piVar3 = 9;
  puVar4 = FUN_14021050();
  *puVar4 = 0;
  return 0xffffffff;
}


