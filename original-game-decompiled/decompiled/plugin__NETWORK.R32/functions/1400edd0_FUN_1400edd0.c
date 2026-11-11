
/* ==== FUN_1400edd0 @ 1400edd0 ==== 
 * signature: int __cdecl FUN_1400edd0(int param_1, int param_2, int * param_3)
 * body: 1400edd0-1400f184
 */

int __cdecl FUN_1400edd0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined1 auStack_14 [20];
  
  iVar5 = 0;
  local_58 = 0;
  bVar2 = false;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return 0x10000;
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(int *)(param_1 + 0x9c) = 0;
    uVar4 = FUN_14014b30((int *)(param_1 + 0x9c),param_2);
    if ((char)uVar4 != '\0') {
      if (*(char *)(param_1 + 0xa9) == '\0') {
        local_58 = *param_3;
        local_48 = param_2;
        local_50 = local_58;
      }
      else {
        FUN_14014920(param_2,*param_3,&local_48,&local_50,&local_58);
      }
      *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
      piVar1 = (int *)(param_1 + 0x86);
      *(undefined4 *)(param_1 + 0x7e) = 0;
      *piVar1 = 0;
      *(undefined4 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0x78) = 0x66;
      if (local_58 != -1 && -1 < local_58 + 1) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_40);
        DAT_14028e48 = (*pcVar3)(local_40,piVar1,local_58 + 1);
        if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
          *(int *)(param_1 + 0x7e) = local_58 + 1;
          *(undefined1 *)*piVar1 = 0;
        }
      }
      if (DAT_14028e48 == 0) {
        iVar5 = local_58;
        if (local_50 <= local_58) {
          iVar5 = local_50;
        }
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_40);
        DAT_14028e48 = (*pcVar3)(local_40,*piVar1,local_48,iVar5);
        *(undefined1 *)(*piVar1 + iVar5) = 0;
        iVar5 = 0;
        if ((local_50 < local_58) && (0 < local_58)) {
          *(int *)(param_1 + 0xa0) = local_58;
        }
        else {
          *(undefined4 *)(param_1 + 0xa0) = 0;
          bVar2 = true;
        }
        goto LAB_1400f0c6;
      }
    }
    iVar5 = FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fe,0);
    FUN_1400e8f0(param_1);
  }
  else if (*(int *)(param_1 + 0x86) == 0) {
    iVar5 = 0x10000;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fe,0);
  }
  else {
    local_4c = 0x34;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,&local_54,*(undefined4 *)(param_1 + 0x86));
    iVar6 = *(int *)(param_1 + 0xa0) - local_54;
    if (*param_3 < iVar6) {
      iVar6 = *param_3;
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_4c),1,1,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,*(int *)(param_1 + 0x86) + local_54,param_2,iVar6);
    *(undefined1 *)(*(int *)(param_1 + 0x86) + local_54 + iVar6) = 0;
    if (local_54 + iVar6 < *(int *)(param_1 + 0xa0)) {
      uStack_3c = (undefined2)*(int *)(param_1 + 0xa0);
      local_40 = CONCAT22((short)(local_54 + iVar6),10);
      iVar5 = FUN_14014ed0(param_1,*(int *)(param_1 + 0x62),0x900,&local_40);
    }
    else {
      bVar2 = true;
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
LAB_1400f0c6:
  if (bVar2) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1c,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,param_1 + 0x36,param_1,&iStack_44,auStack_14);
    if ((DAT_14028e48 == 0) && (iStack_44 != 0)) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_40);
      DAT_14028e48 = (*pcVar3)(local_40,iStack_44,auStack_14,0,param_1 + 0x78);
    }
    iVar5 = FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fd,0);
    FUN_1400e8f0(param_1);
  }
  return iVar5;
}


