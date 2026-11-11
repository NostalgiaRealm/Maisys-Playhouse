
/* ==== FUN_1400c280 @ 1400c280 ==== 
 * signature: undefined4 __cdecl FUN_1400c280(int param_1, int param_2)
 * body: 1400c280-1400cca3
 */

undefined4 __cdecl FUN_1400c280(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_480;
  int local_47c;
  undefined2 local_478;
  undefined2 uStack_476;
  undefined2 uStack_474;
  undefined4 uStack_472;
  undefined4 uStack_46e;
  int iStack_46a;
  undefined2 local_464;
  undefined2 uStack_462;
  undefined2 uStack_460;
  undefined4 uStack_45e;
  undefined4 uStack_45a;
  int iStack_456;
  int local_450;
  char *pcStack_44c;
  int iStack_448;
  int local_444;
  int local_440;
  undefined4 local_43c;
  int local_438;
  undefined1 auStack_432 [70];
  undefined2 uStack_3ec;
  undefined2 uStack_3a2;
  undefined2 *puStack_32;
  int iStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  if (*(short *)(param_1 + 0x6c) == 0) {
    uVar1 = FUN_1400cf40(param_1 + 0x98);
    uVar2 = FUN_14008a80(param_1);
    local_464 = (undefined2)uVar2;
    uStack_462 = (undefined2)((uint)uVar2 >> 0x10);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x16,(int *)&local_478);
    psVar4 = (short *)(param_1 + 0x40);
    if (*psVar4 == 0x6e) {
      psVar4 = (short *)(param_2 + 0x26);
    }
    DAT_14028e48 = (*pcVar3)(CONCAT22(uStack_476,local_478),CONCAT22(uStack_462,local_464),
                             param_1 + 0x14,param_1 + 10,psVar4,uVar1,&local_438);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x17,&iStack_480);
    piVar6 = &local_438;
    uVar2 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar3)(iStack_480,uVar2,piVar6);
    return 0;
  }
  local_440 = 1;
  local_43c = 0;
  local_444 = 0;
  local_47c = 0;
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x22,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_450);
  if (DAT_14028e48 != 0) {
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_locate_net_service_140266fc);
    return 0;
  }
  local_478 = 0x66;
  uStack_476 = 0xffff;
  uStack_474 = 0xffff;
  uStack_472 = 0;
  uStack_46e = 0;
  iStack_46a = 0;
  iVar7 = 0;
  if (((*(short *)(param_1 + 0x14) == 100) && (*(int *)(param_1 + 0x1a) == 5)) &&
     (*(int *)(param_1 + 0x16) == 0xcf)) {
    pcVar3 = (code *)FUN_14008ab0(local_450,0,0x16,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,s_sourcepath_14026080,0,&local_478);
    iVar7 = DAT_14028e48;
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_resolve_object_path_of_se_140266d4);
      return 0;
    }
  }
  DAT_14028e48 = iVar7;
  psVar4 = (short *)(param_1 + 0x40);
  local_438 = FUN_14008a80(param_1);
  if (*psVar4 == 0x6e) {
    psVar4 = (short *)(param_2 + 0x26);
  }
  iVar7 = *(int *)(param_1 + 0xe4);
  iVar5 = iStack_46a;
  uVar1 = FUN_1400cf40(param_1 + 0x98);
  uVar2 = FUN_140147a0(param_1,&local_47c,&local_43c,&local_444,local_438,param_1 + 10,
                       (short *)(param_1 + 0x14),psVar4,uVar1,iVar5,iVar7);
  if ((char)uVar2 == '\0') {
    if (iStack_46a != 0) {
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
      iStack_46a = 0;
      uStack_472 = 0;
      uStack_46e = 0;
    }
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Error_forming_network_message__140266b4);
    return 0;
  }
  local_464 = 0x66;
  uStack_462 = 0xffff;
  uStack_460 = 0xffff;
  uStack_45e = 0;
  uStack_45a = 0;
  iStack_456 = 0;
  if (*(short *)(param_1 + 0x6c) == 0x6e) {
    pcVar3 = (code *)FUN_14008ab0(local_450,0,0x16,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,s_sourceip_14026094,0,&local_464);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_obtain_source_s_IP_14026698);
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      return 0;
    }
  }
  else {
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xf],1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,param_1 + 0x6c,&local_464);
    if (iStack_456 == 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Invalid_host_entry_14026684);
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      return 0;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,4,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,&local_440,iStack_456,s_loopback_14026678);
  if (local_440 == 0) {
    iStack_480 = local_444;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,6,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,local_47c,&pcStack_44c);
    FUN_1400ccb0(param_1,pcStack_44c,&iStack_480);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,7,&iStack_448);
    DAT_14028e48 = (*pcVar3)(iStack_448,local_47c);
    if (local_47c != 0) {
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      local_47c = 0;
    }
  }
  else {
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x17,&iStack_480);
    DAT_14028e48 = (*pcVar3)(iStack_480,&local_438,0,0x436);
    uStack_3ec = 0x40;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0,(int *)&pcStack_44c);
    DAT_14028e48 = (*pcVar3)(pcStack_44c,auStack_432,iStack_456);
    iStack_18 = local_47c;
    uStack_10 = local_43c;
    iStack_14 = local_444;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&iStack_448);
    DAT_14028e48 = (*pcVar3)(iStack_448,0x12,&puStack_32);
    if (DAT_14028e48 != 0) {
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      if (local_47c != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,local_47c);
        local_47c = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&iStack_480);
      DAT_14028e48 = (*pcVar3)(iStack_480,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    *puStack_32 = 0x69;
    *(undefined4 *)(puStack_32 + 3) = 0;
    *(undefined4 *)(puStack_32 + 5) = 0;
    *(undefined4 *)(puStack_32 + 1) = *(undefined4 *)(param_1 + 0xce);
    *(undefined4 *)(puStack_32 + 7) = 0;
    uStack_3a2 = 2;
    iStack_2c = local_450;
    uStack_28 = 1;
    uStack_26 = 3;
    pcVar3 = (code *)FUN_14008ab0(local_450,1,2,&iStack_480);
    DAT_14028e48 = (*pcVar3)(iStack_480,&local_438);
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1a,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,0xffffffff,&local_464);
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1a,&iStack_480);
  DAT_14028e48 = (*pcVar3)(iStack_480,0xffffffff,&local_478);
  return 0;
}


