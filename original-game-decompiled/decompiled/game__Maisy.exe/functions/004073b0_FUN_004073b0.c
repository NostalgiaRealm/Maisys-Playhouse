
/* ==== FUN_004073b0 @ 004073b0 ==== 
 * signature: undefined __fastcall FUN_004073b0(void * param_1)
 * body: 004073b0-00407648
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004073b0(void *param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  short local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_a;
  short local_8;
  byte local_5;
  
  local_8 = *(short *)(*(int *)((int)param_1 + 0x52) + 0x26);
  if ((((local_8 != 0) && (*(short *)((int)param_1 + 0xc2) < *(short *)((int)param_1 + 0xc6))) &&
      (*(short *)((int)param_1 + 0xc4) < *(short *)((int)param_1 + 200))) ||
     (((*(short *)(*(int *)((int)param_1 + 0x56) + 0x26) != 0 &&
       (*(short *)((int)param_1 + 0xca) < *(short *)((int)param_1 + 0xce))) &&
      (*(short *)((int)param_1 + 0xcc) < *(short *)((int)param_1 + 0xd0))))) {
    if (*(int *)((int)param_1 + 0x9e) != 0) {
      if ((*(int *)((int)param_1 + 0x9a) == 0) ||
         (((*(char *)((int)param_1 + 0xa4) != '\0' && (*(short *)((int)param_1 + 0x40) != 2)) &&
          (*(short *)((int)param_1 + 0x40) != 3)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
    }
    local_10 = *(undefined4 *)((int)param_1 + 0xc6);
    local_14 = *(undefined4 *)((int)param_1 + 0xc2);
    FUN_00409020(param_1,&local_14);
    *(undefined2 *)((int)param_1 + 200) = 0;
    *(undefined2 *)((int)param_1 + 0xc4) = 0;
    *(undefined2 *)((int)param_1 + 0xc6) = 0;
    *(undefined2 *)((int)param_1 + 0xc2) = 0;
    local_5 = FUN_0047a230(*(int *)((int)param_1 + 0x8a));
    if (local_5 == 0) {
      FUN_00409070(param_1);
    }
    if ((*(char *)((int)param_1 + 0xa4) == '\0') || (*(int *)((int)param_1 + 0x9e) == 0)) {
      FUN_00408e10(param_1,(short *)&local_14);
    }
    if (*(char *)((int)param_1 + 0xa4) != '\0') {
      if ((*(int *)((int)param_1 + 0x92) == 0) ||
         ((*(byte *)(*(int *)((int)param_1 + 0x92) + 0x9c) & 2) == 0)) {
        FUN_0043c8b0();
      }
      if (*(char *)((int)param_1 + 0xa4) != '\0') {
        sVar2 = *(short *)((int)param_1 + 0xb8);
        if (*(short *)((int)param_1 + 0xb8) <= (short)local_14) {
          sVar2 = (short)local_14;
        }
        sVar3 = *(short *)((int)param_1 + 0xbc);
        if ((short)local_10 <= *(short *)((int)param_1 + 0xbc)) {
          sVar3 = (short)local_10;
        }
        sVar4 = *(short *)((int)param_1 + 0xba);
        if (*(short *)((int)param_1 + 0xba) <= local_14._2_2_) {
          sVar4 = local_14._2_2_;
        }
        local_14 = CONCAT22(sVar4,sVar2);
        sVar2 = *(short *)((int)param_1 + 0xbe);
        if (local_10._2_2_ <= *(short *)((int)param_1 + 0xbe)) {
          sVar2 = local_10._2_2_;
        }
        local_10 = CONCAT22(sVar2,sVar3);
      }
    }
    iVar5 = FUN_00430190(*(int *)((int)param_1 + 0x52));
    local_a = 0;
    if (0 < local_8) {
      do {
        puVar6 = (undefined4 *)(local_a * 0x1a + iVar5);
        if (*(char *)(puVar6 + 6) != '\0') {
          sVar2 = *(short *)((int)puVar6 + 6);
          if (*(short *)((int)puVar6 + 6) <= local_14._2_2_) {
            sVar2 = local_14._2_2_;
          }
          sVar3 = *(short *)((int)puVar6 + 10);
          if (local_10._2_2_ <= *(short *)((int)puVar6 + 10)) {
            sVar3 = local_10._2_2_;
          }
          local_18 = *(short *)(puVar6 + 1);
          if (local_18 <= (short)local_14) {
            local_18 = (short)local_14;
          }
          sVar4 = *(short *)(puVar6 + 2);
          if ((short)local_10 <= *(short *)(puVar6 + 2)) {
            sVar4 = (short)local_10;
          }
          if ((sVar4 <= local_18) || (bVar1 = true, sVar3 <= sVar2)) {
            bVar1 = false;
          }
          if (bVar1) {
            (**(code **)(*(int *)*puVar6 + 0x3ec))();
          }
        }
        local_a = local_a + 1;
      } while (local_a < local_8);
    }
    FUN_004301f0(*(int *)((int)param_1 + 0x52));
    FUN_00407730(param_1,(short *)0x0);
    if (local_5 == 0) {
      FUN_00409140(param_1);
    }
    DAT_004da3ac = 0;
    _DAT_004da3a4 = 0;
    _DAT_004da3a8 = 0;
    FUN_00409020(param_1,(undefined4 *)0x0);
    FUN_00407650(param_1);
  }
  return;
}


