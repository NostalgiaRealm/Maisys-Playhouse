
/* ==== FUN_00402220 @ 00402220 ==== 
 * signature: undefined __thiscall FUN_00402220(void * this, undefined2 param_1, int param_2, short param_3, undefined1 param_4, undefined4 param_5, char param_6)
 * body: 00402220-00402365;0040236e-00402973
 */

void __thiscall
FUN_00402220(void *this,undefined2 param_1,int param_2,short param_3,undefined1 param_4,
            undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this_00;
  void *pvVar6;
  short sVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00402a51;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412d60(this,0);
  sVar2 = 0;
  do {
    sVar7 = sVar2 + 1;
    *(undefined2 *)((int)this + sVar2 * 8 + 0xf0) = 0;
    *(undefined2 *)((int)this + sVar2 * 8 + 0xec) = 0;
    *(undefined2 *)((int)this + sVar2 * 8 + 0xee) = 0;
    *(undefined2 *)((int)this + sVar2 * 8 + 0xea) = 0;
    sVar2 = sVar7;
  } while (sVar7 < 4);
  *(undefined1 *)((int)this + 0xb3) = 0;
  *(undefined1 *)((int)this + 0xb1) = 0;
  *(undefined1 *)((int)this + 0xb2) = 0;
  *(int *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 0xa5) = 0;
  *(undefined1 *)((int)this + 0xad) = 0;
  *(undefined1 *)((int)this + 0xae) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0xbc) = 0x1e00280;
  *(undefined1 *)((int)this + 0xa2) = 0;
  *(undefined2 *)((int)this + 0x112) = 0xffff;
  *(undefined2 *)((int)this + 0x26) = 9;
  *(undefined2 *)((int)this + 0xc0) = 8;
  if (param_3 != 0) {
    *(short *)((int)this + 0xc0) = param_3;
  }
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xa6) = 0;
  *(undefined1 *)((int)this + 0xa3) = 0;
  *(undefined1 *)((int)this + 0xab) = 1;
  *(undefined1 *)((int)this + 0xac) = param_4;
  puVar3 = FUN_00412c20(0x1136);
  local_8 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar3,0);
    *puVar3 = &PTR_FUN_004be078;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x8a) = puVar3;
  FUN_0047a0a0(puVar3,param_2,0x1e00280,param_3);
  *(undefined4 *)((int)this + 0x8e) = 0;
  *(int *)((int)this + 0x2a) = param_2;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x9a) = 0;
  *(undefined4 *)((int)this + 0x9e) = 0;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x92) = 0;
  iVar4 = FUN_00434920(DAT_004d99ac,0x10,0);
  *(int *)((int)this + 0x38) = iVar4;
  if (iVar4 == 0) {
    FUN_004a3538();
  }
  **(undefined4 **)((int)this + 0x38) = 3;
  *(undefined4 *)(*(int *)((int)this + 0x38) + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x38) + 8) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x38) + 0xc) = 0xffffffff;
  iVar4 = FUN_00434920(DAT_004d99ac,0x10,0);
  *(int *)((int)this + 0x3c) = iVar4;
  if (iVar4 == 0) {
    FUN_004a3538();
  }
  **(undefined4 **)((int)this + 0x3c) = 0;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 2;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,10,4,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x32) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 3;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,0xc,0x32,'\x01',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x4a) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 4;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,0xc,5,'\x01',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x4e) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 5;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,0x1a,4,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x52) = puVar5;
  *(undefined1 *)((int)this + 0xa7) = 0;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 6;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,0x1a,4,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x56) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 7;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_0042f970(puVar3,0xc,0,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  *(undefined2 *)((int)this + 0x36) = 0xffff;
  *(undefined4 **)((int)this + 0x82) = puVar5;
  *(undefined1 *)((int)this + 0xa4) = 0;
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x62) = puVar3;
  FUN_00430500(puVar3,0);
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x5a) = puVar3;
  FUN_00430500(puVar3,0);
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x66) = puVar3;
  FUN_00430500(puVar3,0);
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x6a) = puVar3;
  FUN_00430500(puVar3,0);
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x6e) = puVar3;
  FUN_00430500(puVar3,0);
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 0xd;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_00430a50(puVar3,8,4,'\0',0);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x72) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 0xe;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_00430a50(puVar3,0x16,4,'\0',0);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x76) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 0xf;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_00430a50(puVar3,0x10,4,'\0',0);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x7a) = puVar5;
  puVar3 = FUN_00412c20(0x4a);
  local_8 = 0x10;
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = FUN_00430a50(puVar3,8,4,'\0',0);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x7e) = puVar5;
  puVar5 = (undefined4 *)FUN_004a5fed(0xe);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_004be070;
    puVar3 = puVar5;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x5e) = puVar3;
  FUN_00430500(puVar3,0);
  puVar3 = (undefined4 *)FUN_004a5fed(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)((int)this + 0x86) = puVar3;
  local_8 = 0xffffffff;
  uVar1 = *(undefined4 *)(param_2 + 0x6e);
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x2e) = uVar1;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined1 *)((int)this + 0xaf) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x10a) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined2 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined2 *)((int)this + 0x12a) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0xaa) = 1;
  *(undefined2 *)((int)this + 0x130) = 0;
  *(undefined2 *)((int)this + 0x132) = 0;
  *(undefined2 *)((int)this + 0x148) = 0;
  *(undefined2 *)((int)this + 0x14a) = 0;
  *(undefined2 *)((int)this + 200) = 0;
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined2 *)((int)this + 0xc6) = 0;
  *(undefined2 *)((int)this + 0xd8) = 0;
  *(undefined2 *)((int)this + 0xc2) = 0;
  *(undefined2 *)((int)this + 0xd4) = 0;
  *(undefined2 *)((int)this + 0xd6) = 0;
  *(undefined2 *)((int)this + 0xd2) = 0;
  if (param_6 != '\0') {
    FUN_00403940(this);
  }
  if (*(char *)((int)this + 0xac) != '\0') {
    FUN_00406240(this,*(int **)((int)this + 0x38));
  }
  sVar2 = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0xb5) = 0;
  *(undefined1 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  do {
    iVar4 = (int)sVar2;
    sVar2 = sVar2 + 1;
    *(undefined4 *)((int)this + iVar4 * 0x16 + 0x162) = 0;
  } while (sVar2 < 5);
  pvVar6 = (void *)0x0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  this_00 = (void *)FUN_00466a70(*(int *)((int)this + 0x2a));
  if (this_00 != (void *)0x0) {
    pvVar6 = FUN_0044db20(this_00,1,0,'\x01','\x01');
    if (pvVar6 == (void *)0x0) goto LAB_0040294a;
    if ((*(byte *)((int)pvVar6 + 0x21) & 8) == 0) {
      pvVar6 = (void *)0x0;
    }
  }
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*(int *)this + 0x78))(0xd,pvVar6,1);
  }
LAB_0040294a:
  *(undefined4 *)((int)this + 0x1d2) = 0;
  *(undefined4 *)((int)this + 0x1ce) = 0;
  *(undefined4 *)((int)this + 0x1d6) = 1000;
  *unaff_FS_OFFSET = local_10;
  return;
}


