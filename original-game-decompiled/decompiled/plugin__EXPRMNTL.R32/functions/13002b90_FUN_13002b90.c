
/* ==== FUN_13002b90 @ 13002b90 ==== 
 * signature: undefined4 __cdecl FUN_13002b90(int param_1, int param_2)
 * body: 13002b90-130032b5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13002b90(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0x66;
  if (0 < *(int *)(param_2 + 10)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x12,*(undefined4 *)(param_2 + 10));
    if (*(undefined1 **)(param_1 + 0x12) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      **(undefined1 **)(param_1 + 0x12) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 4),param_2 + 4);
  if (*(int *)(param_1 + 0x36) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x36));
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0x66;
  if (0 < *(int *)(param_2 + 0x2e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x36,*(undefined4 *)(param_2 + 0x2e));
    if (*(undefined1 **)(param_1 + 0x36) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
      **(undefined1 **)(param_1 + 0x36) = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0x24);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x28),param_2 + 0x28);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0x1c));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0x48);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x16),param_2 + 0x16);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0x40)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0x40));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x3a),param_2 + 0x3a);
  if (*(int *)(param_1 + 0x66) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x66));
    *(undefined4 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x66;
  if (0 < *(int *)(param_2 + 0x5e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x66,*(undefined4 *)(param_2 + 0x5e));
    if (*(undefined1 **)(param_1 + 0x66) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
      **(undefined1 **)(param_1 + 0x66) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x58),param_2 + 0x58);
  if (*(int *)(param_1 + 0x78) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0x66;
  if (0 < *(int *)(param_2 + 0x70)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x78,*(undefined4 *)(param_2 + 0x70));
    if (*(undefined1 **)(param_1 + 0x78) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
      **(undefined1 **)(param_1 + 0x78) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x6a),param_2 + 0x6a);
  if (*(int *)(param_1 + 0x8a) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x8a));
    *(undefined4 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
  }
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0x66;
  if (0 < *(int *)(param_2 + 0x82)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x8a,*(undefined4 *)(param_2 + 0x82));
    if (*(undefined1 **)(param_1 + 0x8a) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_2 + 0x82);
      **(undefined1 **)(param_1 + 0x8a) = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0xa8);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x7c),param_2 + 0x7c);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0xa0)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0xa0));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x9a),param_2 + 0x9a);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_2 + 0x8e);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(param_2 + 0x92);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  return 0;
}


