
/* ==== FUN_140036f0 @ 140036f0 ==== 
 * signature: int __cdecl FUN_140036f0(undefined4 * param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 140036f0-14004063
 */

int __cdecl FUN_140036f0(undefined4 *param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 local_654;
  undefined2 local_652;
  undefined2 uStack_650;
  uint local_64c;
  int local_648;
  int iStack_644;
  uint uStack_640;
  int local_63c;
  undefined1 uStack_638;
  undefined1 auStack_606 [462];
  int local_438;
  undefined1 auStack_432 [70];
  undefined2 uStack_3ec;
  undefined2 uStack_3a2;
  undefined2 *puStack_32;
  undefined4 *puStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_openconnection_140262f4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_closeconnection_140262cc);
    if ((char)uVar1 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&local_63c);
      piVar5 = &local_438;
      uVar6 = 0x200;
      uVar3 = FUN_14008a80((int)param_1);
      DAT_14028e48 = (*pcVar2)(local_63c,param_4,uVar3,piVar5,uVar6);
      if (DAT_14028e48 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_64c);
        uVar1 = 2;
        DAT_14028e48 = (*pcVar2)(local_64c,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 &uStack_640);
        if (1 < uStack_640) {
          do {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_64c);
            DAT_14028e48 = (*pcVar2)(local_64c,
                                     *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar1,
                                     &local_63c);
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_648);
            DAT_14028e48 = (*pcVar2)(local_648,&iStack_644,auStack_606,&local_438);
            if (iStack_644 == 0) {
              FUN_14007e60((int)&local_63c);
              uStack_638 = 0;
              FUN_140074e0(param_1,(int)&local_63c);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,(int *)&local_64c);
              DAT_14028e48 = (*pcVar2)(local_64c,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar1,
                                       &local_63c);
              return 0;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 <= uStack_640);
        }
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_incomingmsg_140262b8);
    if ((char)uVar1 != '\0') {
      if (((*param_4 == 0x65) && (*(int *)(param_4 + 5) == 0x58)) && (*(int *)(param_4 + 7) != 0)) {
        return 0;
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaultinfo_140262a4);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)param_4;
      *(short *)((int)param_1 + 0x2e) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaulttarget_14026290);
    if ((char)uVar1 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,(undefined2 *)(param_1 + 0xc),(int)param_4);
        *(undefined1 *)(*(int *)((int)param_1 + 0x3a) + *(int *)((int)param_1 + 0x3e)) = 0;
        return 0;
      }
      if ((*param_4 == 0x69) && (*(int *)(param_4 + 1) != 0)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_438);
        DAT_14028e48 = (*pcVar2)(local_438,*(undefined4 *)(param_4 + 1),0x2f,
                                 *(undefined4 *)((int)param_1 + 0x3e),0);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_63c);
        DAT_14028e48 = (*pcVar2)(local_63c,&local_64c,*(undefined4 *)((int)param_1 + 0x3e));
        *(uint *)((int)param_1 + 0x3a) = local_64c;
        return 0;
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaultevent_1402627c);
    if (((char)uVar1 != '\0') && (*param_4 == 0x66)) {
      FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x42),(int)param_4);
      *(undefined1 *)(param_1[0x13] + param_1[0x14]) = 0;
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_listeningperiod_14026268);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      if ((*(char *)((int)param_1 + 0x4ba) != '\0') &&
         (*(int *)((int)param_1 + 0x4b6) != *(int *)(param_4 + 1))) {
        FUN_14005f10((int)param_1,1,*(int *)(param_4 + 1));
      }
      param_1[6] = *(undefined4 *)param_4;
      *(short *)(param_1 + 7) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_outgoingperiod_14026254);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      if ((*(char *)(param_1 + 300) != '\0') && (param_1[299] != *(int *)(param_4 + 1))) {
        FUN_14005f10((int)param_1,0,*(int *)(param_4 + 1));
      }
      *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)param_4;
      *(short *)((int)param_1 + 0x22) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_incomingperiod_14026240);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      param_1[9] = *(undefined4 *)param_4;
      *(short *)(param_1 + 10) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_listeningport_140260e4);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_maxconnections_140260d0);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_14008910(param_2,(uint *)s_timeoutperiod_140260bc);
        if ((char)uVar1 == '\0') {
          iVar4 = 0x10000;
        }
        else {
          local_652 = 0;
          uStack_650 = 0;
          local_654 = 1;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
          iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
          DAT_14028e48 = iVar4;
          if (iVar4 == 0) {
            if (0 < CONCAT22(uStack_650,local_652)) {
              param_1[0x18] = CONCAT22(local_652,local_654);
              *(undefined2 *)(param_1 + 0x19) = uStack_650;
              return 0;
            }
            return 0x10000;
          }
        }
      }
      else {
        local_63c = 0;
        local_64c = local_64c & 0xffffff00;
        local_654 = 1;
        local_652 = 0;
        uStack_650 = 0;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
        iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
        DAT_14028e48 = iVar4;
        if (iVar4 == 0) {
          if (CONCAT22(uStack_650,local_652) < 1) {
            local_652 = 1;
            uStack_650 = 0;
          }
          if (*(int *)((int)param_1 + 0x516) == 0) {
            iVar4 = FUN_1400d0b0((undefined1 *)&local_64c,0);
            if (iVar4 != 0) {
              return 0x10000;
            }
            FUN_1400d160();
          }
          else {
            local_63c = *(int *)(*(int *)((int)param_1 + 0x516) + 0x14);
          }
          if (local_63c < CONCAT22(uStack_650,local_652)) {
            local_652 = (undefined2)local_63c;
            uStack_650 = (undefined2)((uint)local_63c >> 0x10);
          }
          *(uint *)((int)param_1 + 0x5a) = CONCAT22(local_652,local_654);
          *(undefined2 *)((int)param_1 + 0x5e) = uStack_650;
          return 0;
        }
      }
    }
    else {
      if (*(int *)((int)param_1 + 0x516) != 0) {
        return 0x10000;
      }
      local_652 = 0;
      uStack_650 = 0;
      local_654 = 1;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
      iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
      DAT_14028e48 = iVar4;
      if (iVar4 == 0) {
        if (0 < CONCAT22(uStack_650,local_652)) {
          param_1[0x15] = CONCAT22(local_652,local_654);
          *(undefined2 *)(param_1 + 0x16) = uStack_650;
          return 0;
        }
        return 0x10000;
      }
    }
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&local_648);
    piVar5 = &local_63c;
    uVar6 = 0x200;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(local_648,param_4,uVar3,piVar5,uVar6);
    if (DAT_14028e48 != 0) {
      return 0x10000;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,&local_438,0,0x436);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,&iStack_644);
    iVar4 = (*pcVar2)(iStack_644,param_1,s_nProcessSrv_140262e0,0xffffffff,1,&local_64c);
    DAT_14028e48 = iVar4;
    if (iVar4 == 0) {
      uStack_18 = 0;
      uStack_3ec = 0x40;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_648);
      DAT_14028e48 = (*pcVar2)(local_648,auStack_432,&local_63c);
      uStack_10 = 0;
      uStack_14 = 0;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_644);
      DAT_14028e48 = (*pcVar2)(iStack_644,0x12,&puStack_32);
      if (DAT_14028e48 == 0) {
        *puStack_32 = 0x69;
        *(undefined4 *)(puStack_32 + 3) = 0;
        *(undefined4 *)(puStack_32 + 5) = 0;
        *(undefined4 *)(puStack_32 + 1) = *param_1;
        *(undefined4 *)(puStack_32 + 7) = 0;
        uStack_3a2 = 2;
        puStack_2c = param_1;
        uStack_28 = 1;
        uStack_26 = 3;
        pcVar2 = (code *)FUN_14008ab0((int)param_1,1,2,&local_648);
        DAT_14028e48 = (*pcVar2)(local_648,&local_438);
        return 0;
      }
      return 0x10000;
    }
  }
  return iVar4;
}


