
/* ==== FUN_00405940 @ 00405940 ==== 
 * signature: undefined __thiscall FUN_00405940(void * this, char param_1)
 * body: 00405940-00405d14
 */

void __thiscall FUN_00405940(void *this,char param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 local_68 [21];
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_14 = *(int **)((int)this + 0x9a);
  if (param_1 != '\0') {
    *(undefined1 *)((int)this + 0xb1) = 0;
  }
  if ((*(int *)((int)this + 300) != 0) &&
     (piVar3 = (int *)FUN_0046ca10(*(int *)((int)this + 300)), piVar3 == local_14)) {
    *(undefined4 *)((int)this + 300) = 0;
    FUN_00410f30((int)DAT_004da390);
    *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) & 0xfe;
    FUN_00410ca0(DAT_004da390,0x28);
    *(undefined2 *)((int)this + 0x132) = 0xd8f1;
    *(undefined2 *)((int)this + 0x130) = 0xd8f1;
    FUN_004021a0();
  }
  if (*(int **)((int)this + 0x8e) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x8e) + 300))();
  }
  if ((*(char *)((int)this + 0xa4) != '\0') && (param_1 != '\0')) {
    if (DAT_004dc57c == '\0') {
      *(undefined4 *)((int)this + 300) = 0;
      FUN_00410f30((int)DAT_004da390);
      *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) & 0xfe;
      FUN_00410ca0(DAT_004da390,0x28);
      *(undefined2 *)((int)this + 0x132) = 0xd8f1;
      *(undefined2 *)((int)this + 0x130) = 0xd8f1;
      FUN_004021a0();
    }
    FUN_004142c0(local_68,0x70b,0,0,0);
    FUN_0045a860(*(void **)((int)this + 0x2a),(int)local_68);
    if (*(char *)((int)this + 0xaf) == '\0') {
      *(undefined1 *)((int)this + 0xaf) = 1;
      sVar5 = *(short *)(*(int *)((int)this + 0x32) + 0x26);
      local_10 = FUN_00430190(*(int *)((int)this + 0x32));
      while (sVar5 = sVar5 + -1, -1 < sVar5) {
        piVar3 = (int *)(local_10 + sVar5 * 10);
        if (((int *)*piVar3 != (int *)0x0) && ((char)piVar3[2] != '\0')) {
          (**(code **)(*(int *)*piVar3 + 0x234))();
          FUN_004142c0(local_68,0x7d2,0,0,0);
          FUN_0046b730((void *)*piVar3,(int)local_68);
        }
      }
      FUN_004301f0(*(int *)((int)this + 0x32));
      for (sVar5 = *(short *)(*(int *)((int)this + 0x72) + 0x26); 0 < sVar5; sVar5 = sVar5 + -1) {
        FUN_00430370(*(void **)((int)this + 0x72),(int)sVar5,&local_c);
        if (local_8 == (int *)CONCAT13(local_c._3_1_,CONCAT12(local_c._2_1_,(undefined2)local_c))) {
          (**(code **)(*local_8 + 0x234))();
          FUN_004142c0(local_68,0x7d2,0,0,0);
          FUN_0046b730(local_8,(int)local_68);
        }
        FUN_00404e30(this,(int *)CONCAT13(local_c._3_1_,CONCAT12(local_c._2_1_,(undefined2)local_c))
                     ,'\0');
      }
      *(undefined1 *)((int)this + 0xaf) = 0;
    }
  }
  if (((*(char *)((int)this + 0xa4) != '\0') && (*(int *)((int)this + 0x9a) != 0)) &&
     (*(char *)((int)this + 0xaf) == '\0')) {
    local_c._0_2_ = 0;
    local_c._2_1_ = 0;
    local_c._3_1_ = 0;
    *(undefined1 *)((int)this + 0xaf) = 1;
    local_8 = (int *)0x0;
    FUN_00410630(*(void **)((int)this + 0x8e),&local_c);
    FUN_00408560(this,&local_c);
    uVar2 = FUN_00408490(this,0);
    local_10 = CONCAT13(uVar2,(undefined3)local_10);
    FUN_00409540(this,&local_c);
    FUN_00407730(this,(short *)0x0);
    FUN_00409560((int)this);
    FUN_00408490(this,local_10._3_1_);
    (**(code **)(**(int **)((int)this + 0x9a) + 0x234))();
    FUN_004142c0(local_68,0x7d2,0,0,0);
    FUN_0046b730(*(void **)((int)this + 0x9a),(int)local_68);
    *(undefined1 *)((int)this + 0xaf) = 0;
  }
  if (*(char *)((int)this + 0xa9) == '\0') {
    *(undefined4 *)((int)this + 0x9a) = 0;
  }
  if (*(char *)((int)this + 0xb1) != '\0') {
    FUN_0045f990(&DAT_004dffb0,1,0x10,0,(int)this + 0xb8,*(void **)((int)this + 0x8a),8);
    *(undefined1 *)((int)this + 0xb2) = 1;
  }
  if (*(char *)((int)this + 0xa2) != '\0') {
    FUN_00410f30((int)DAT_004da390);
    FUN_00410ca0(DAT_004da390,0x28);
    FUN_00410ca0(DAT_004da390,0x2b);
  }
  if (local_14 != (int *)0x0) {
    FUN_00430640(*(int *)((int)this + 0x5a));
    FUN_00402030((int)this);
    if ((param_1 != '\0') && (*(int **)((int)this + 0x8e) != (int *)0x0)) {
      (**(code **)(**(int **)((int)this + 0x8e) + 300))();
      iVar1 = *(int *)(*(int *)((int)this + 0x86) + 8);
      while (iVar1 != 0) {
        puVar4 = (undefined4 *)FUN_0047da90(*(undefined4 **)((int)this + 0x86));
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        iVar1 = *(int *)(*(int *)((int)this + 0x86) + 8);
      }
    }
    FUN_00405d20(this,local_14);
    FUN_00430640(*(int *)((int)this + 0x5a));
    FUN_0047dc10();
  }
  if (((*(char *)((int)this + 0xa4) != '\0') && (param_1 != '\0')) &&
     (*(int **)((int)this + 0x8a) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x8a) + 0x54))(6);
    (**(code **)(**(int **)((int)this + 0x8a) + 0x54))(7);
  }
  return;
}


