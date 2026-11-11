
/* ==== FUN_0048c2d0 @ 0048c2d0 ==== 
 * signature: int __cdecl FUN_0048c2d0(int param_1, char param_2, char * param_3, char param_4)
 * body: 0048c2d0-0048c521
 */

int __cdecl FUN_0048c2d0(int param_1,char param_2,char *param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void *this;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  SIZE_T local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char local_6 [2];
  
  if ((param_1 == 0) || (param_3 == (char *)0x0)) {
    iVar3 = 0x10000;
  }
  else {
    piVar2 = (int *)FUN_0048c050(param_1);
    if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0x1e) & 1) == 0)) {
      return 0x10000;
    }
    *param_3 = '\0';
    iVar3 = FUN_0048c900(param_1,(int *)&local_18,param_4);
    if (iVar3 == 0) {
      local_10 = (char *)FUN_00434920(DAT_004d99ac,local_18,0);
      if (local_10 == (char *)0x0) {
        return 0x10000;
      }
      local_6[0] = param_2;
      local_6[1] = 0;
      *local_10 = '\0';
      pcVar7 = local_10;
      local_14 = param_3;
      while (local_c = pcVar7, piVar2 != (int *)0x0) {
        if (*(short *)((int)piVar2 + 0x22) == 0x43) {
          if (param_4 == '\0') {
            uVar4 = 0xffffffff;
            pcVar8 = s_<project>_004dd188;
            do {
              pcVar6 = pcVar8;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar6 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar6;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar8 = pcVar6 + -uVar4;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar7 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar7 + 1;
            }
          }
          else {
            iVar3 = (**(code **)(*piVar2 + 0x10))();
            this = (void *)FUN_0045a3e0(iVar3);
            FUN_00451930(this,pcVar7);
          }
        }
        else {
          (**(code **)(*piVar2 + 0x70))(pcVar7);
        }
        pcVar7 = local_c;
        iVar3 = -1;
        pcVar8 = local_14;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          uVar4 = 0xffffffff;
          pcVar8 = local_6;
          do {
            pcVar6 = pcVar8;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar6;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar3 = -1;
          pcVar8 = local_c;
          do {
            pcVar9 = pcVar8;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          pcVar8 = pcVar6 + -uVar4;
          pcVar6 = pcVar9 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar6 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          }
          uVar4 = 0xffffffff;
          pcVar8 = local_14;
          do {
            pcVar6 = pcVar8;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar6;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar3 = -1;
          do {
            pcVar8 = local_c;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = local_c + 1;
            cVar1 = *local_c;
            local_c = pcVar8;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -uVar4;
          pcVar8 = pcVar8 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          }
        }
        local_c = local_14;
        local_14 = pcVar7;
        piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))();
        pcVar7 = local_c;
      }
      if (param_3 != local_14) {
        uVar4 = 0xffffffff;
        pcVar7 = local_14;
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar8 + -uVar4;
        pcVar8 = param_3;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      uVar4 = 0xffffffff;
      pcVar7 = param_3;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = local_10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = local_6;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = param_3;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = local_10;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar3 = -1;
      do {
        pcVar7 = param_3;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -uVar4;
      pcVar7 = pcVar7 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_00434950(local_10);
      return 0;
    }
  }
  return iVar3;
}


