
/* ==== FUN_00410110 @ 00410110 ==== 
 * signature: undefined __fastcall FUN_00410110(undefined4 * param_1)
 * body: 00410110-004101e8
 */

void __fastcall FUN_00410110(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004101e9;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004be680;
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x3a) != 0) {
    iVar3 = FUN_00430190(*(int *)((int)param_1 + 0x3a));
    sVar4 = (short)*(undefined4 *)(*(int *)((int)param_1 + 0x3a) + 0x26);
    while (sVar4 = sVar4 + -1, -1 < sVar4) {
      piVar1 = (int *)(iVar3 + sVar4 * 6);
      if (*piVar1 == *(int *)((int)param_1 + 0x36)) {
        *(undefined4 *)((int)param_1 + 0x36) = 0;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_004301f0(*(int *)((int)param_1 + 0x3a));
    if (*(undefined4 **)((int)param_1 + 0x3a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x3a))(1);
    }
  }
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x36) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x36))(1);
    *(undefined4 *)((int)param_1 + 0x36) = 0;
  }
  local_8 = 0xffffffff;
  FUN_004101f3();
  *unaff_FS_OFFSET = local_10;
  return;
}


