
/* ==== FUN_00422470 @ 00422470 ==== 
 * signature: undefined __fastcall FUN_00422470(void * param_1)
 * body: 00422470-00422579;00422591-0042261a
 */

void __fastcall FUN_00422470(void *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  char local_154 [256];
  undefined1 local_54 [8];
  undefined4 local_4c;
  char local_40 [8];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  code *local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042257a;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = FUN_0040d5a0((int)param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0044df70(iVar2);
    if (iVar2 != 0) {
      local_14 = (int *)FUN_00466a90(iVar2);
      local_18 = *local_14;
      piVar3 = (int *)(**(code **)(local_18 + 0x108))(3);
      if (piVar3 == (int *)0x0) {
        local_1c = (code *)FUN_00412c20(0x56);
        piVar3 = (int *)0x0;
        local_8 = 0;
        if (local_1c != (code *)0x0) {
          piVar3 = FUN_00422bd0((undefined4 *)local_1c);
        }
        local_8 = 0xffffffff;
        (**(code **)(local_18 + 0x100))(s_Toon_Ranges_004da084,3,piVar3);
        if (piVar3 == (int *)0x0) goto LAB_0042260b;
      }
      FUN_0040e180(param_1,local_40,0xc);
      (**(code **)(**(int **)((int)param_1 + 0x1d2) + 0xf4))(local_38);
      iVar2 = 0;
      if (0 < local_38) {
        local_1c = *(code **)(*piVar3 + 0x124);
        do {
          FUN_0040e180(param_1,(HPSTR)&local_34,10);
          if (local_2c == 0) {
            local_154[0] = '\0';
          }
          else {
            FUN_0040e180(param_1,local_154,(uint)local_2c);
          }
          cVar1 = (*local_1c)(0,local_154,local_54,1,0);
          if (cVar1 == '\0') {
            local_28 = (**(code **)(local_18 + 0x110))(1);
            (**(code **)(*piVar3 + 0x100))(local_154,0,local_28,0,0);
          }
          else {
            local_28 = local_4c;
          }
          iVar2 = iVar2 + 1;
          local_24 = local_34;
          local_20 = local_30;
          (**(code **)(**(int **)((int)param_1 + 0x1d2) + 0xe8))(&local_28);
        } while (iVar2 < local_38);
      }
    }
  }
LAB_0042260b:
  *unaff_FS_OFFSET = local_10;
  return;
}


