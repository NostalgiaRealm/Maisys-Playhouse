
/* ==== FUN_0048c070 @ 0048c070 ==== 
 * signature: undefined4 __cdecl FUN_0048c070(int * param_1, char param_2, char * param_3, undefined4 * param_4)
 * body: 0048c070-0048c2c7
 */

undefined4 __cdecl FUN_0048c070(int *param_1,char param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  short sVar7;
  char *pcVar8;
  char *pcVar9;
  char local_410 [512];
  char local_210 [512];
  int local_10;
  short local_c;
  undefined4 local_a;
  char local_5;
  
  piVar6 = (int *)0x0;
  local_10 = 0;
  if (((param_3 == (char *)0x0) || (param_4 == (undefined4 *)0x0)) || (*param_3 != param_2)) {
    return 0x10000;
  }
  if (param_1 != (int *)0x0) {
    local_10 = (**(code **)(*param_1 + 0x10))();
  }
  iVar3 = -1;
  pcVar8 = param_3 + 1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_a = (uint)(ushort)(~(ushort)iVar3 - 1);
  local_c = 0;
  uVar4 = 0xffffffff;
  pcVar8 = param_3 + 1;
  do {
    pcVar9 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar9 + -uVar4;
  pcVar9 = local_210;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar2 = FUN_0048bfb0((int)local_210,(short)local_a,param_2,(short *)((int)&local_a + 2),&local_c);
  local_5 = (char)uVar2 == '\0';
  uVar4 = FUN_0043d430(local_210,s_<activeproject>_004dd194);
  if ((uVar4 != 0) || (iVar3 = DAT_004da378, DAT_004da378 == 0)) {
    uVar4 = FUN_0043d430(local_210,s_<project>_004dd188);
    if (uVar4 != 0) {
      sVar7 = 1;
      uVar2 = FUN_0046e970((int)DAT_004dc564);
      local_10 = (int)(short)uVar2;
      if (0 < local_10) {
        do {
          iVar3 = FUN_0046e950(DAT_004dc564,sVar7);
          if (iVar3 != 0) {
            pcVar8 = local_410;
            this = (void *)FUN_0045a3e0(iVar3);
            FUN_00451930(this,pcVar8);
            uVar4 = FUN_0043d430(local_410,local_210);
            if (uVar4 == 0) {
              piVar6 = (int *)FUN_00458a00(iVar3);
              break;
            }
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 <= local_10);
      }
      if (piVar6 == (int *)0x0) {
        *param_4 = 0;
        return 0x10000;
      }
      goto LAB_0048c151;
    }
    iVar3 = local_10;
    if (local_10 == 0) {
      iVar3 = FUN_0046e950(DAT_004dc564,1);
      local_10 = iVar3;
    }
  }
  piVar6 = (int *)FUN_00458a00(iVar3);
LAB_0048c151:
  do {
    if (local_5 != '\0') {
      *param_4 = piVar6;
      return 0;
    }
    uVar2 = FUN_0048bfb0((int)local_210,(short)local_a,param_2,(short *)((int)&local_a + 2),&local_c
                        );
    local_5 = (char)uVar2 == '\0';
    piVar6 = (int *)(**(code **)(*piVar6 + 0x184))();
    if (piVar6 == (int *)0x0) break;
    do {
      iVar3 = *piVar6;
      (**(code **)(iVar3 + 0x70))(local_410);
      uVar4 = FUN_0043d430(local_410,local_210 + local_a._2_2_);
      if (uVar4 == 0) break;
      piVar6 = (int *)(**(code **)(iVar3 + 0x17c))();
    } while (piVar6 != (int *)0x0);
  } while (piVar6 != (int *)0x0);
  *param_4 = 0;
  return 0x10000;
}


