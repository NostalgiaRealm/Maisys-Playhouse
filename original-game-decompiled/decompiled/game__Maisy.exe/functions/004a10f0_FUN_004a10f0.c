
/* ==== FUN_004a10f0 @ 004a10f0 ==== 
 * signature: undefined4 __cdecl FUN_004a10f0(uint param_1, HANDLE param_2)
 * body: 004a10f0-004a1193
 */

undefined4 __cdecl FUN_004a10f0(uint param_1,HANDLE param_2)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (param_1 < DAT_004e6790) {
    piVar2 = (int *)((int)&DAT_004e6690 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar2 + iVar1) == -1) {
      if (DAT_004de194 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else if (param_1 == 1) {
          SetStdHandle(0xfffffff5,param_2);
        }
        else if (param_1 == 2) {
          SetStdHandle(0xfffffff4,param_2);
        }
      }
      *(HANDLE *)(*piVar2 + iVar1) = param_2;
      return 0;
    }
  }
  piVar2 = FUN_0048f9d0();
  *piVar2 = 9;
  puVar3 = FUN_0048f9e0();
  *puVar3 = 0;
  return 0xffffffff;
}


