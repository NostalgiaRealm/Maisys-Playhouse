
/* ==== FUN_00421740 @ 00421740 ==== 
 * signature: undefined __fastcall FUN_00421740(int * param_1)
 * body: 00421740-00421785
 */

void __fastcall FUN_00421740(int *param_1)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xef;
  if (*(int **)((int)param_1 + 0x15e) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x15e) + 4))();
    *(undefined4 *)((int)param_1 + 0x15e) = 0;
  }
  if (*(LPVOID *)((int)param_1 + 0x166) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)((int)param_1 + 0x166));
    *(undefined4 *)((int)param_1 + 0x166) = 0;
  }
  (**(code **)(*param_1 + 0x19c))();
  return;
}


