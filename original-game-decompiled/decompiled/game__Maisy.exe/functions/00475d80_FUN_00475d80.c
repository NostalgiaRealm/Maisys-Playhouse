
/* ==== FUN_00475d80 @ 00475d80 ==== 
 * signature: undefined4 __cdecl FUN_00475d80(int param_1)
 * body: 00475d80-00475db7
 */

undefined4 __cdecl FUN_00475d80(int param_1)

{
  short *psVar1;
  int *piVar2;
  void *this;
  
  psVar1 = *(short **)(param_1 + 0x1a);
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  psVar1[6] = 0;
  psVar1[7] = 0;
  if (piVar2 != (int *)0x0) {
    this = (void *)(**(code **)(*piVar2 + 0x10))();
    param_1 = 0;
    if (this != (void *)0x0) {
      param_1 = (int)FUN_0045a920(this,*psVar1);
      *(int *)(psVar1 + 6) = param_1;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


