
/* ==== FUN_1000_0988 @ 1000:0988 ==== 
 * signature: undefined __cdecl16near FUN_1000_0988(void)
 * body: 1000:0988-1000:09ea;1000:09ec-1000:0a30;1000:0a32-1000:0a60;1000:0a62-1000:0a86;1000:0a88-1000:0aca;1000:0acc-1000:0bda
 */

uint __cdecl16near
FUN_1000_0988(int *param_1,int *param_2,int *param_3,undefined2 *param_4,undefined1 *param_5,
             int param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int local_c;
  int *local_6;
  
  uVar7 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*(undefined2 *)0xa8;
  }
  if (param_2 != (int *)0x0) {
    local_6 = param_2;
    for (; (*local_6 != 0 && (uVar7 < 0x8000)); uVar7 = uVar7 + iVar3 + 1) {
      iVar3 = FUN_1000_07f2(*local_6);
      local_6 = local_6 + 1;
    }
  }
  if (*(int *)0xda == 0) {
    local_c = 0;
  }
  else {
    for (local_c = *(int *)0x8e; (local_c != 0 && (*(char *)(local_c + 0x8f) == '\0'));
        local_c = local_c + -1) {
    }
  }
  if (local_c != 0) {
    uVar7 = uVar7 + (local_c + 7) * 2;
  }
  if (param_6 != 0) {
    iVar3 = FUN_1000_07f2(param_6);
    uVar7 = uVar7 + iVar3 + 3;
  }
  if (uVar7 + 1 < 0x8000) {
    uVar4 = *(undefined2 *)0xd4;
    *(undefined2 *)0xd4 = 0x10;
    iVar3 = FUN_1000_10bb(uVar7 + 0x10);
    if (iVar3 != 0) {
      *(undefined2 *)0xd4 = uVar4;
      *param_3 = iVar3;
      pcVar5 = (char *)(iVar3 + 0xfU & 0xfff0);
      *param_4 = pcVar5;
      if (param_2 != (int *)0x0) {
        for (local_6 = param_2; *local_6 != 0; local_6 = local_6 + 1) {
          uVar4 = FUN_1000_07c0(pcVar5,*local_6,0);
          iVar3 = FUN_1000_08a2(uVar4);
          pcVar5 = (char *)(iVar3 + 1);
        }
      }
      if (local_c != 0) {
        uVar4 = FUN_1000_07c0(pcVar5,0x62,0);
        pcVar5 = (char *)FUN_1000_08a2(uVar4);
        iVar3 = 0;
        while (local_c != 0) {
          bVar2 = *(byte *)(iVar3 + 0x90);
          *pcVar5 = ((char)bVar2 >> 4 & 0xfU) + 0x41;
          pcVar5[1] = (bVar2 & 0xf) + 0x41;
          pcVar5 = pcVar5 + 2;
          iVar3 = iVar3 + 1;
          local_c = local_c + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if (param_6 != 0) {
        pcVar5[1] = '\x01';
        pcVar5[2] = '\0';
        FUN_1000_07c0(pcVar5 + 3,param_6);
      }
      puVar8 = (undefined1 *)0x0;
      puVar6 = param_5 + 1;
      if (param_7 != 0) {
        uVar4 = FUN_1000_07c0(puVar6,0xd6,0,param_7,0);
        uVar4 = FUN_1000_08a2(uVar4);
        uVar4 = FUN_1000_07c0(uVar4);
        puVar6 = (undefined1 *)FUN_1000_08a2(uVar4);
        puVar8 = puVar6 + (-1 - (int)param_5);
      }
      if (*param_1 != 0) {
        if (param_1[1] != 0) {
          *puVar6 = 0x20;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        local_6 = param_1 + 1;
        while (*local_6 != 0) {
          iVar3 = FUN_1000_07f2(*local_6);
          if ((undefined1 *)0x7d < puVar8 + iVar3) {
            *(undefined2 *)0x7e = 7;
            *(undefined2 *)0x8c = 10;
            FUN_1000_109a(*param_3);
            return 0xffff;
          }
          puVar8 = puVar8 + iVar3;
          piVar1 = local_6 + 1;
          uVar4 = FUN_1000_07c0(puVar6,*local_6,0);
          puVar6 = (undefined1 *)FUN_1000_08a2(uVar4);
          local_6 = piVar1;
          if (*piVar1 != 0) {
            *puVar6 = 0x20;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      *puVar6 = 0xd;
      *param_5 = (char)puVar8;
      return uVar7 + 1;
    }
    *(undefined2 *)0x7e = 0xc;
    *(undefined2 *)0x8c = 8;
    *(undefined2 *)0xd4 = uVar4;
  }
  else {
    *(undefined2 *)0x7e = 7;
    *(undefined2 *)0x8c = 10;
  }
  return 0xffff;
}


