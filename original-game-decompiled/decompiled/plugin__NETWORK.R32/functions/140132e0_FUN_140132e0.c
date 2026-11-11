
/* ==== FUN_140132e0 @ 140132e0 ==== 
 * signature: undefined4 __cdecl FUN_140132e0(int param_1, short param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140132e0-14013770
 */

undefined4 __cdecl
FUN_140132e0(int param_1,short param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined1 local_120 [20];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [256];
  
  local_10c = DAT_14026bb0;
  local_108 = DAT_14026bb4;
  local_104 = DAT_14026bb8;
  FUN_14012750(param_1,2,(int)local_100);
  if (param_2 == 1) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_14026ba8;
  }
  else if (param_2 == 2) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_HEAD_14026ba0;
  }
  else if (param_2 == 3) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_POST_14026b98;
  }
  else if (param_2 == 4) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_14026b90;
  }
  else if (param_2 == 5) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_DELETE_14026b88;
  }
  else if (param_2 == 6) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_TRACE_14026b80;
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_140267ac;
  }
  DAT_14028e48 = (*pcVar2)(local_144,local_120,pcVar5);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_144);
  DAT_14028e48 = (*pcVar2)(local_144,&iStack_13c,local_120);
  iVar1 = iStack_13c;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_138);
  DAT_14028e48 = (*pcVar2)(iStack_138,&iStack_13c,local_100);
  iVar1 = iVar1 + iStack_13c;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_134);
  DAT_14028e48 = (*pcVar2)(iStack_134,&iStack_13c,&local_10c);
  uVar4 = iVar1 + iStack_13c + 5;
  uVar3 = FUN_14012ae0(uVar4,param_4,param_5);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_144);
    uVar3 = (*pcVar2)(local_144,*param_4,&uStack_140);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
      DAT_14028e48 = (*pcVar2)(local_144,uStack_140,local_120);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_138);
      DAT_14028e48 = (*pcVar2)(iStack_138,uStack_140,&DAT_14026b2c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_134);
      DAT_14028e48 = (*pcVar2)(iStack_134,uStack_140,local_100);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_130);
      DAT_14028e48 = (*pcVar2)(iStack_130,uStack_140,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_12c);
      DAT_14028e48 = (*pcVar2)(iStack_12c,uStack_140,&local_10c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_128);
      DAT_14028e48 = (*pcVar2)(iStack_128,uStack_140,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_124);
      DAT_14028e48 = (*pcVar2)(iStack_124,*param_4);
      uVar3 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar4;
      *param_3 = *param_3 + (uVar4 - 1);
      return CONCAT31((int3)uVar3,1);
    }
  }
  return uVar3 & 0xffffff00;
}


