
/* ==== FUN_1400b980 @ 1400b980 ==== 
 * signature: int __cdecl FUN_1400b980(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400b980-1400c27f
 */

int __cdecl FUN_1400b980(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack_954;
  int local_950;
  int local_94c;
  int local_948;
  int local_944;
  int iStack_940;
  int iStack_93c;
  int iStack_938;
  int iStack_934;
  int iStack_930;
  int iStack_92c;
  int iStack_928;
  int iStack_924;
  int iStack_920;
  int iStack_91c;
  int iStack_918;
  int iStack_914;
  int iStack_910;
  int iStack_90c;
  int iStack_908;
  int iStack_904;
  int local_900 [64];
  uint local_800 [512];
  
  uVar1 = FUN_14008910(param_2,(uint *)s_value_14026664);
  if ((char)uVar1 != '\0') {
    local_800[0] = local_800[0] & 0xffffff00;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_944);
    DAT_14028e48 = (*pcVar2)(local_944,local_800,s_Execute__event__14026650);
    FUN_1400b820(param_1,(int)param_1,local_800);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_940);
    DAT_14028e48 = (*pcVar2)(iStack_940,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_948);
    DAT_14028e48 = (*pcVar2)(local_948,local_800,s_Event__event__14026640);
    FUN_1400b820(param_1,(int)param_1 + 10,local_800);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_94c);
    DAT_14028e48 = (*pcVar2)(local_94c,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_950);
    DAT_14028e48 = (*pcVar2)(local_950,local_800,s_Target__target__1402662c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_954);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_954,param_1 + 5,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_93c);
    DAT_14028e48 = (*pcVar2)(iStack_93c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_938);
    DAT_14028e48 = (*pcVar2)(iStack_938,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_934);
    DAT_14028e48 = (*pcVar2)(iStack_934,local_800,s_Data__data__1402661c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_930);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_930,param_1 + 0x10,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_92c);
    DAT_14028e48 = (*pcVar2)(iStack_92c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_928);
    DAT_14028e48 = (*pcVar2)(iStack_928,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_924);
    DAT_14028e48 = (*pcVar2)(iStack_924,local_800,s_Host__data__1402660c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_920);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_920,param_1 + 0x1b,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_91c);
    DAT_14028e48 = (*pcVar2)(iStack_91c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_918);
    DAT_14028e48 = (*pcVar2)(iStack_918,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_914);
    DAT_14028e48 = (*pcVar2)(iStack_914,local_800,s_Flags__integer__140265f8);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_910);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_910,param_1 + 0x26,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_90c);
    DAT_14028e48 = (*pcVar2)(iStack_90c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_908);
    DAT_14028e48 = (*pcVar2)(iStack_908,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&iStack_904);
    DAT_14028e48 = (*pcVar2)(iStack_904,param_4,local_800);
    return DAT_14028e48;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_flatmessage_140265e4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_sourceip_14026094);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
      if ((char)uVar1 != '\0') {
        iVar4 = FUN_140091b0(param_4,param_3,param_1,(undefined4 *)0x0,
                             (undefined4 *)((int)param_1 + 10));
        return iVar4;
      }
      uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
      if ((char)uVar1 != '\0') {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,(int *)local_800);
        DAT_14028e48 = (*pcVar2)(local_800[0],param_4,param_1[0x39]);
        return DAT_14028e48;
      }
      iVar4 = 0x10000;
    }
    else {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,(int *)local_800);
      iVar4 = (*pcVar2)(local_800[0],param_1,s_nProcessSrv_140262e0,0xffffffff,0,local_900);
      DAT_14028e48 = iVar4;
      if (iVar4 == 0) {
        pcVar2 = (code *)FUN_14008ab0(local_900[0],0,0x16,(int *)local_800);
        iVar4 = (*pcVar2)(local_800[0],s_sourceip_14026094,0,param_4);
        DAT_14028e48 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
    return iVar4;
  }
  if (*param_4 != 0x6a) {
    return 0x10000;
  }
  local_94c = 0;
  local_800[0] = 0;
  iVar4 = param_1[0x39];
  local_950 = 0;
  iVar6 = 0;
  uVar1 = FUN_1400cf40((int)(param_1 + 0x26));
  uVar3 = FUN_140147a0(param_1,&local_94c,local_800,&local_950,*(undefined4 *)((int)param_1 + 0xce),
                       (int)param_1 + 10,(short *)(param_1 + 5),(short *)(param_1 + 0x10),uVar1,
                       iVar6,iVar4);
  if ((char)uVar3 == '\0') {
    return 0x10000;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,local_900);
  DAT_14028e48 = (*pcVar2)(local_900[0],local_94c,&local_948);
  piVar5 = (int *)(param_4 + 7);
  *param_4 = 0x66;
  *piVar5 = 0;
  param_4[1] = -1;
  param_4[2] = -1;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  if (local_950 != -1) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,local_900);
    DAT_14028e48 = (*pcVar2)(local_900[0],piVar5,local_950 + 1);
    if ((undefined1 *)*piVar5 != (undefined1 *)0x0) {
      *(int *)(param_4 + 3) = local_950 + 1;
      *(undefined1 *)*piVar5 = 0;
    }
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,local_900);
  DAT_14028e48 = (*pcVar2)(local_900[0],&iStack_954,local_948);
  iVar4 = *(int *)(param_4 + 3);
  if (iStack_954 <= *(int *)(param_4 + 3)) {
    iVar4 = iStack_954;
  }
  iStack_954 = iVar4;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_944);
  DAT_14028e48 = (*pcVar2)(local_944,*piVar5,local_948,iStack_954);
  *(undefined1 *)(*piVar5 + iStack_954) = 0;
  *(int *)(param_4 + 5) = iStack_954;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_940);
  DAT_14028e48 = (*pcVar2)(iStack_940,local_94c);
  return 0;
}


