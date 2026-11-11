
/* ==== FUN_00448820 @ 00448820 ==== 
 * signature: undefined __fastcall FUN_00448820(int param_1)
 * body: 00448820-0044883c
 */

void __fastcall FUN_00448820(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x22) == 1)) {
    uVar2 = 0x65;
    this = (void *)FUN_00466a70(iVar1);
    FUN_0044df10(this,uVar2);
  }
  return;
}


