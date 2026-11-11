
/* ==== FUN_004353e0 @ 004353e0 ==== 
 * signature: undefined __fastcall FUN_004353e0(void * param_1)
 * body: 004353e0-00435435
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004353e0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_004e0210 = 0;
  _DAT_004e0214 = 0x4b;
  DAT_004e0210 = FUN_00434920(DAT_004d99ac,0x80,1);
  if (DAT_004e0210 == 0) {
    FUN_004a3538();
  }
  iVar2 = FUN_004bafca();
  uVar1 = *(undefined4 *)(iVar2 + 8);
  *(undefined2 *)((int)param_1 + 0x723a) = 0;
  *(undefined4 *)((int)param_1 + 0x725c) = uVar1;
  FUN_00435c90(param_1);
  return;
}


