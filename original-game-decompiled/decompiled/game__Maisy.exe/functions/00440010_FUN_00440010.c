
/* ==== FUN_00440010 @ 00440010 ==== 
 * signature: undefined __fastcall FUN_00440010(int * param_1)
 * body: 00440010-0044009d
 */

void __fastcall FUN_00440010(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004401e0(param_1,0x10,'\x01');
  if (*(int *)((int)param_1 + 0x7e) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x244);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      iVar2 = (*pcVar1)();
      if (*(int *)(iVar2 + 0x156) != 0x6e705453) {
        iVar2 = (*pcVar1)();
        if (*(int *)(iVar2 + 0x156) != 0x616e7473) goto LAB_00440073;
      }
      uVar3 = FUN_0048cf48();
      FUN_00441460(param_1,uVar3);
      return;
    }
  }
LAB_00440073:
  FUN_00441760();
  uVar3 = 0;
  if (local_c != 0) {
    uVar3 = local_8;
  }
  FUN_00441460(param_1,uVar3);
  return;
}


