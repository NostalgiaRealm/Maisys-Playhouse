
/* ==== FUN_004190e0 @ 004190e0 ==== 
 * signature: undefined __fastcall FUN_004190e0(int * param_1)
 * body: 004190e0-00419150
 */

void __fastcall FUN_004190e0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = param_1[0x25];
  if (iVar1 != 0) {
    DVar2 = timeGetTime();
    param_1[0x26] = DVar2 + (int)(100000000 / (longlong)iVar1);
  }
  DVar2 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x166) = DVar2;
  *(undefined4 *)((int)param_1 + 0x16a) = 0;
  FUN_00462ca0(param_1);
  if (*(int **)((int)param_1 + 0x3a) != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x78))(0xb,param_1,1);
  }
  (**(code **)(*param_1 + 0x240))(0x324,0,0);
  return;
}


