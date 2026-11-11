
/* ==== FUN_12032ec0 @ 12032ec0 ==== 
 * signature: undefined4 __cdecl FUN_12032ec0(uint param_1)
 * body: 12032ec0-12032f50
 */

undefined4 __cdecl FUN_12032ec0(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1203abf0) {
    piVar3 = (int *)((int)&DAT_1203aaf0 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_12037e64 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_12032f25;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_12032f25:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_1202efa0();
  *piVar3 = 9;
  puVar4 = FUN_1202efb0();
  *puVar4 = 0;
  return 0xffffffff;
}


