
/* ==== FUN_00409140 @ 00409140 ==== 
 * signature: undefined __fastcall FUN_00409140(void * param_1)
 * body: 00409140-004092fe
 */

void __fastcall FUN_00409140(void *param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  short local_28;
  short local_26;
  undefined4 local_20;
  undefined4 local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x2a) + 0x104))();
  if (cVar1 == '\0') {
    local_10 = 0;
    local_f = 0;
    local_c = *(undefined4 *)((int)param_1 + 0xda);
    local_8 = *(undefined4 *)((int)param_1 + 0xde);
    local_e = 0;
    local_d = 0;
    if (((short)local_c < (short)local_8) &&
       (local_8._2_2_ = (short)((uint)local_8 >> 0x10),
       local_c._2_2_ = (short)((uint)local_c >> 0x10), local_c._2_2_ < local_8._2_2_)) {
      FUN_00408510(param_1,(undefined4 *)&local_18);
      FUN_00410630(*(void **)((int)param_1 + 0x8e),&local_28);
      local_18 = local_18 + local_28;
      local_14 = local_14 + local_28;
      local_16 = local_16 + local_26;
      local_12 = local_12 + local_26;
      bVar2 = FUN_00408450((int)param_1);
      if (!bVar2) {
        sVar3 = local_18;
        if (local_18 <= (short)local_c) {
          sVar3 = (short)local_c;
        }
        sVar4 = local_14;
        if ((short)local_8 <= local_14) {
          sVar4 = (short)local_8;
        }
        sVar5 = local_16;
        if (local_16 <= local_c._2_2_) {
          sVar5 = local_c._2_2_;
        }
        local_c = CONCAT22(sVar5,sVar3);
        sVar3 = local_12;
        if (local_8._2_2_ <= local_12) {
          sVar3 = local_8._2_2_;
        }
        local_8 = CONCAT22(sVar3,sVar4);
      }
      local_20 = local_c;
      local_1c = local_8;
      if ((*(int **)((int)param_1 + 0x15c) != (int *)0x0) &&
         (*(char *)((int)param_1 + 0xb1) != '\0')) {
        local_1c = 0;
        local_20 = 0;
      }
      if (*(short *)((int)param_1 + 0x40) == 2) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)((int)param_1 + 0x4a);
      }
      FUN_0047ad50(*(void **)((int)param_1 + 0x8a),(short *)&local_c,(short *)&local_20,0,piVar8,
                   &local_10,0,*(int **)((int)param_1 + 0x46),*(int **)((int)param_1 + 0x15c));
      if ((*(int **)((int)param_1 + 0x15c) != (int *)0x0) &&
         (*(char *)((int)param_1 + 0xb1) != '\0')) {
        iVar6 = FUN_00411dc0(*(int **)((int)param_1 + 0x15c));
        FUN_0045fc40(*(void **)((int)param_1 + 0x8a),iVar6);
      }
    }
    else {
      FUN_0047b420(*(int *)((int)param_1 + 0x8a));
    }
    (**(code **)(**(int **)((int)param_1 + 0x4a) + 0xe4))();
    piVar8 = *(int **)((int)param_1 + 0x15c);
    if (piVar8 != (int *)0x0) {
      uVar9 = 0;
      uVar7 = FUN_00458a00(*(int *)((int)param_1 + 0x2a));
      (**(code **)(*piVar8 + 0x1c8))(uVar7,uVar9);
      *(undefined4 *)((int)param_1 + 0x15c) = 0;
    }
    FUN_004063c0();
  }
  return;
}


