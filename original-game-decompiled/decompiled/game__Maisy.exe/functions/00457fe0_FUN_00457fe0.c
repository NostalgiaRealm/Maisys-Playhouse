
/* ==== FUN_00457fe0 @ 00457fe0 ==== 
 * signature: int __cdecl FUN_00457fe0(short * param_1, int * param_2, HLOCAL param_3, SIZE_T * param_4, int * param_5)
 * body: 00457fe0-0045823c
 */

int __cdecl FUN_00457fe0(short *param_1,int *param_2,HLOCAL param_3,SIZE_T *param_4,int *param_5)

{
  char cVar1;
  SIZE_T SVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char local_418 [980];
  short local_44 [22];
  char local_18 [13];
  uint local_b;
  
  switch(*param_1) {
  case 0x66:
    *param_2 = *(int *)(param_1 + 7);
    return 0;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_5);
    *param_2 = 0;
    iVar6 = FUN_00457d30(param_1,param_3,param_4,(int *)0x0);
    return iVar6;
  case 0x76:
    if ((param_5 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) {
      iVar6 = -1;
      pcVar4 = *(char **)(param_1 + 7);
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar6 != -2) {
        if ((*(byte *)((int)param_5 + 0x1e) & 1) == 0) {
          local_44[0] = 0x6a;
          FUN_004374f0(*(char **)(param_1 + 7),local_18);
          (**(code **)(*param_5 + 0x98))(local_18,0,local_44);
          FUN_00457fe0(local_44,param_2,param_3,param_4,param_5);
          FUN_00452ae0((int)param_5,local_44);
        }
        else {
          if (*param_2 != 0) {
            FUN_004537f0((int)param_5,*(char **)(param_1 + 7),*param_2,0x3ff);
            return 0;
          }
          if (param_3 != (HLOCAL)0x0) {
            FUN_0043f730(param_3,0xffff);
            pcVar4 = LocalLock(param_3);
            *pcVar4 = '\0';
            FUN_004537f0((int)param_5,*(char **)(param_1 + 7),pcVar4,0xffff);
            LocalUnlock(param_3);
            uVar5 = 0xffffffff;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            *param_4 = uVar5;
            if (uVar5 != 0) {
              FUN_0043f730(param_3,uVar5);
              SVar2 = LocalSize(param_3);
              if (SVar2 < *param_4) {
                return 0x10000;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  if ((char *)*param_2 == (char *)0x0) {
    if (param_3 != (HLOCAL)0x0) {
      local_418[0] = '\0';
      FUN_00456560(param_1,local_418,0x3ff,param_5);
      uVar5 = 0xffffffff;
      pcVar4 = local_418;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      if (uVar5 != 1) {
        FUN_0043f730(param_3,uVar5);
        SVar2 = LocalSize(param_3);
        if (SVar2 < uVar5) {
          return 0x10000;
        }
        local_b = 0xffffffff;
        pcVar4 = local_418;
        do {
          pcVar7 = pcVar4;
          if (local_b == 0) break;
          local_b = local_b - 1;
          pcVar7 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar7;
        } while (cVar1 != '\0');
        local_b = ~local_b;
        iVar6 = -local_b;
        pcVar3 = LocalLock(param_3);
        pcVar4 = pcVar7 + iVar6;
        for (uVar5 = local_b >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar5 = local_b & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        LocalUnlock(param_3);
      }
      return 0;
    }
  }
  else {
    FUN_00456560(param_1,(char *)*param_2,0xff,param_5);
  }
  return 0x60002;
}


