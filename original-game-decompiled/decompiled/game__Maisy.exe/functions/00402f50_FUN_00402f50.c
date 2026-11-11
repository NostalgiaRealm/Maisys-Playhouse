
/* ==== FUN_00402f50 @ 00402f50 ==== 
 * signature: undefined __thiscall FUN_00402f50(void * this, int param_1, char param_2)
 * body: 00402f50-00403185
 */

void __thiscall FUN_00402f50(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  char *pcVar8;
  short *psVar9;
  undefined1 local_134 [256];
  short local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  int local_8;
  
  if (param_1 == 1) {
    FUN_00410770(*(int *)((int)this + 0x8e));
  }
  if (param_1 == 0) {
    bVar7 = param_2 == '\0';
  }
  else {
    cVar1 = '\x01';
    if (param_1 != 2) {
      cVar1 = param_2;
    }
    if ((param_1 != 1) || (bVar7 = true, cVar1 != '\0')) {
      bVar7 = false;
    }
  }
  if (param_1 != 2) {
    if (((*(int *)((int)this + 0x2a) != 0) &&
        (iVar2 = FUN_00458a00(*(int *)((int)this + 0x2a)), iVar2 != 0)) && (DAT_004dc57c == '\0')) {
      local_32 = 0xffffffff;
      local_2e = 0;
      local_2a = 0;
      local_26 = 0;
      local_34 = 0x66;
      uVar3 = FUN_00458c10(*(void **)((int)this + 0x2a),(byte *)s_windowTitle_004d9244,&local_34);
      if ((char)uVar3 == '\0') {
        piVar4 = (int *)FUN_00458a00(*(int *)((int)this + 0x2a));
        (**(code **)(*piVar4 + 0x70))(local_134);
        (**(code **)(**(int **)((int)this + 0x8e) + 0x74))(local_134);
      }
      else {
        (**(code **)(**(int **)((int)this + 0x8e) + 0x74))(local_26);
      }
      pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_8);
      DAT_004e34cc = (*pcVar5)(local_8,0,&local_34);
    }
    if (bVar7) {
      psVar9 = &local_34;
      local_32 = 0;
      local_34 = 10;
      pcVar8 = s_windowSize_004d9238;
      pcVar5 = *(code **)(*(int *)this + 0x10);
      pvVar6 = (void *)(*pcVar5)();
      uVar3 = FUN_00458c10(pvVar6,(byte *)pcVar8,psVar9);
      if ((char)uVar3 != '\0') {
        FUN_00410870(*(void **)((int)this + 0x8e),local_32);
      }
      psVar9 = &local_34;
      local_32 = 0;
      pcVar8 = s_windowPosition_004d9228;
      local_34 = 10;
      pvVar6 = (void *)(*pcVar5)();
      uVar3 = FUN_00458c10(pvVar6,(byte *)pcVar8,psVar9);
      if ((char)uVar3 != '\0') {
        FUN_00410850(*(void **)((int)this + 0x8e),local_32);
      }
      psVar9 = &local_34;
      local_34 = 0x6a;
      pcVar8 = s_windowStyle_004d921c;
      pvVar6 = (void *)(*pcVar5)();
      uVar3 = FUN_00458c10(pvVar6,(byte *)pcVar8,psVar9);
      if ((char)uVar3 != '\0') {
        if (local_34 == 1) {
          *(undefined1 *)((int)this + 0xb3) = 1;
          (**(code **)(**(int **)((int)this + 0x8e) + 0x140))(local_32,0,0);
        }
        else if (local_34 == 0x66) {
          *(undefined1 *)((int)this + 0xb3) = 1;
          (**(code **)(**(int **)((int)this + 0x8e) + 0x13c))(local_26,0,0);
        }
      }
      pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_8);
      DAT_004e34cc = (*pcVar5)(local_8,0,&local_34);
    }
  }
  return;
}


