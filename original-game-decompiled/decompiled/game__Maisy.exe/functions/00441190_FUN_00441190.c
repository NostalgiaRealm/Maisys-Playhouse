
/* ==== FUN_00441190 @ 00441190 ==== 
 * signature: undefined __fastcall FUN_00441190(int * param_1)
 * body: 00441190-00441289
 */

void __fastcall FUN_00441190(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short local_c [4];
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    iVar2 = FUN_0043fd60((int)param_1);
    if (iVar2 != 0) {
      FUN_0043fd60((int)param_1);
      iVar2 = FUN_0048d44a();
      if (iVar2 != 0) {
        FUN_0043fd60((int)param_1);
        FUN_0048d4fe();
      }
    }
    FUN_0043fc00(param_1);
    pcVar1 = *(code **)(*param_1 + 0x244);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar3 = (int *)(*pcVar1)();
      (**(code **)(*piVar3 + 0x1dc))(local_c);
    }
    FUN_00441c20(param_1,local_c);
    piVar3 = (int *)FUN_0041ed90((int)param_1);
    iVar2 = *piVar3;
    uVar4 = (**(code **)(*param_1 + 0x210))(0);
    (**(code **)(iVar2 + 0x78))(8,uVar4);
    FUN_004401e0(param_1,0x40,'\0');
    FUN_004401e0(param_1,0x100,'\0');
    FUN_004401e0(param_1,0x200,'\0');
    FUN_004401e0(param_1,0x400,'\0');
    FUN_00440360(param_1);
    if (*(int *)((int)param_1 + 0x7e) != 0) {
      FUN_0048ce85();
      FUN_0043fdb0(param_1,0);
    }
    FUN_004400e0(param_1);
  }
  return;
}


