
/* ==== FUN_14002e20 @ 14002e20 ==== 
 * signature: undefined4 __cdecl FUN_14002e20(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14002e20-140036eb
 */

undefined4 __cdecl FUN_14002e20(int param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  int local_504;
  int local_500;
  uint local_4fc;
  int iStack_4f8;
  undefined2 local_4f4 [7];
  int local_4e6;
  char acStack_4be [64];
  uint uStack_47e;
  uint local_400;
  char local_3fc [64];
  uint local_3bc;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if (((char)uVar1 != '\0') && (param_3 != (short *)0x0)) {
    uVar2 = FUN_140091b0(param_4,param_3,(undefined4 *)(param_1 + 4),(undefined4 *)(param_1 + 0xe),
                         (undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaultinfo_140262a4);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x2a);
    param_4[2] = *(short *)(param_1 + 0x2e);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaulttarget_14026290);
  if ((char)uVar1 != '\0') {
    if (*param_4 != 0x66) {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,param_1 + 0x30);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaultevent_1402627c);
  if ((char)uVar1 != '\0') {
    if (*param_4 != 0x66) {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,param_1 + 0x42);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_listeningperiod_14026268);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x18);
    param_4[2] = *(short *)(param_1 + 0x1c);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_outgoingperiod_14026254);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x1e);
    param_4[2] = *(short *)(param_1 + 0x22);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_incomingperiod_14026240);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x24);
    param_4[2] = *(short *)(param_1 + 0x28);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_listeningport_140260e4);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x54);
    param_4[2] = *(short *)(param_1 + 0x58);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_maxconnections_140260d0);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      if (*(int *)(param_1 + 0x516) == 0) {
        iVar3 = FUN_1400d0b0((undefined1 *)&local_400,0);
        if (iVar3 != 0) {
          return 0x10000;
        }
        FUN_1400d160();
      }
      else {
        *(int *)(param_1 + 0x5c) = *(int *)(*(int *)(param_1 + 0x516) + 0x14);
      }
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x5a);
    param_4[2] = *(short *)(param_1 + 0x5e);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_timeoutperiod_140260bc);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_localip_140260a8);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_sourceip_14026094);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_14008910(param_2,(uint *)s_sourcepath_14026080);
        if ((char)uVar1 == '\0') {
          uVar1 = FUN_14008910(param_2,(uint *)s_sourceparentpath_1402606c);
          if ((char)uVar1 == '\0') {
            uVar1 = FUN_14008910(param_2,(uint *)s_sessions_1402622c);
            if ((char)uVar1 != '\0') {
              pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_504);
              DAT_14028e48 = (*pcVar5)(local_504,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),
                                       &local_4fc);
              if (local_4fc == 0) {
                local_400 = local_400 & 0xffffff00;
              }
              else {
                pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_504);
                DAT_14028e48 = (*pcVar5)(local_504,&local_400,*(int *)(param_1 + 0x516) + 0x2a);
                uVar1 = 2;
                if (1 < local_4fc) {
                  do {
                    pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_504);
                    DAT_14028e48 = (*pcVar5)(local_504,
                                             *(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),uVar1
                                             ,local_4f4);
                    if (uStack_47e != 0) {
                      if (acStack_4be[0] == '\0') {
                        FUN_14007260(uStack_47e,acStack_4be);
                      }
                      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_500);
                      DAT_14028e48 = (*pcVar5)(local_500,&local_400,&DAT_14026228);
                      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_4f8);
                      DAT_14028e48 = (*pcVar5)(iStack_4f8,&local_400,acStack_4be);
                    }
                    uVar1 = uVar1 + 1;
                  } while (uVar1 <= local_4fc);
                }
              }
              pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_504);
              DAT_14028e48 = (*pcVar5)(local_504,param_4,&local_400);
              return DAT_14028e48;
            }
            return 0x10000;
          }
          if (*param_4 != 0x66) {
            if (*param_4 != 0x6a) {
              return 0x10000;
            }
            FUN_14008ed0(0,param_4,0);
          }
          FUN_14008b20(0,param_4,param_1 + 0x504);
          return 0;
        }
        if (*param_4 != 0x66) {
          if (*param_4 != 0x6a) {
            return 0x10000;
          }
          FUN_14008ed0(0,param_4,0);
        }
        FUN_14008b20(0,param_4,param_1 + 0x4f2);
        return 0;
      }
      if (*param_4 != 0x66) {
        if (*param_4 != 0x6a) {
          return 0x10000;
        }
        FUN_14008ed0(0,param_4,0);
      }
      if (*(int *)(param_1 + 0x4ee) != 0) {
        FUN_14008b20(0,param_4,param_1 + 0x4e0);
      }
      return 0;
    }
    if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x516) == 0) {
      iVar3 = FUN_1400d0b0((undefined1 *)&local_500,0);
      if (iVar3 != 0) {
        return 0x10000;
      }
      iVar3 = FUN_1400d190();
      FUN_1400d160();
      if (iVar3 != 0) {
        return 0x10000;
      }
      if (local_3fc[0] == '\0') {
        FUN_14007260(local_3bc,local_3fc);
      }
      pcVar4 = local_3fc;
    }
    else {
      pcVar4 = (char *)(*(int *)(param_1 + 0x516) + 0x2a);
    }
    FUN_14008ed0(0,local_4f4,(int)pcVar4);
    if (*param_4 == 0x6a) {
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,(int)local_4f4);
    if (local_4e6 != 0) {
      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_504);
      DAT_14028e48 = (*pcVar5)(local_504,local_4e6);
    }
    return 0;
  }
  if ((*param_4 != 1) && (*param_4 != 0x6a)) {
    return 0x10000;
  }
  *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x60);
  param_4[2] = *(short *)(param_1 + 100);
  return 0;
}


