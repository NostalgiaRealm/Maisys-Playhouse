
/* ==== FUN_00405ea0 @ 00405ea0 ==== 
 * signature: undefined __fastcall FUN_00405ea0(int * param_1)
 * body: 00405ea0-00405f24
 */

void __fastcall FUN_00405ea0(int *param_1)

{
  int iVar1;
  undefined4 local_58 [21];
  
  if (*(int *)(*(int *)((int)param_1 + 0x32) + 0x26) == 0) {
    iVar1 = FUN_00470c80(DAT_004dc564);
    if ((char)iVar1 != '\0') {
      iVar1 = (**(code **)(*param_1 + 0x10))();
      iVar1 = FUN_0045a3e0(iVar1);
      FUN_00451cb0(iVar1);
    }
  }
  else {
    FUN_00405450((int)param_1);
    FUN_004142c0(local_58,0x191,0,0,0);
    if (*(void **)((int)param_1 + 0x9e) != (void *)0x0) {
      FUN_0046b730(*(void **)((int)param_1 + 0x9e),(int)local_58);
    }
    if (*(void **)((int)param_1 + 0x9a) != (void *)0x0) {
      FUN_0046b730(*(void **)((int)param_1 + 0x9a),(int)local_58);
      return;
    }
  }
  return;
}


