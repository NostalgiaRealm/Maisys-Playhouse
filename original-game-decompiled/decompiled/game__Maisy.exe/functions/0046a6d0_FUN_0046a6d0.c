
/* ==== FUN_0046a6d0 @ 0046a6d0 ==== 
 * signature: undefined __cdecl FUN_0046a6d0(int * param_1, int param_2, int param_3)
 * body: 0046a6d0-0046a8cd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046a6d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_30;
  int local_2c;
  byte *local_1c;
  undefined2 local_14;
  int local_12;
  int local_e;
  int *local_8;
  
  iVar1 = *(int *)(param_3 + 0x26);
  if (((iVar1 != 0) && (param_1 != (int *)0x0)) && (param_2 != 0)) {
    local_14 = 0;
    iVar2 = FUN_00430190(param_3);
    if (0 < iVar1) {
      local_1c = (byte *)(iVar2 + 0x2c);
      local_2c = iVar1;
      do {
        if (((*local_1c & 1) != 0) && (local_8 = *(int **)(local_1c + -8), local_8 != (int *)0x0)) {
          if ((*local_1c & 2) == 0) {
            if (((*(byte *)((int)local_8 + 0x1e) & 0x20) == 0) &&
               (iVar3 = (**(code **)(*local_8 + 0x244))(), iVar3 != 0x29a)) {
              _DAT_004dc3f0 = _DAT_004dc3f0 + 1;
              local_12 = 0xffffffff;
              local_e = 0xffffffff;
              FUN_0042d3f0(local_8,0x1b6,&local_14,10);
            }
            else if (0 < iVar1) {
              piVar8 = (int *)(iVar2 + 0x20);
              local_30 = iVar1;
              do {
                if ((*(byte *)(piVar8 + 3) & 8) != 0) {
                  iVar3 = piVar8[1];
                  iVar7 = 0;
                  iVar4 = FUN_0046ca60(iVar3);
                  iVar3 = FUN_0046cac0(iVar3);
                  piVar5 = FUN_0043e870(param_1,piVar8 + -8,*piVar8);
                  if (piVar5 == (int *)0x0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar7 = FUN_0046ca60((int)piVar5);
                    iVar6 = FUN_0046cac0((int)piVar5);
                  }
                  local_12 = *piVar8;
                  local_e = piVar8[2];
                  FUN_0042d3f0(local_8,0x1b6,&local_14,10);
                  if (iVar7 == 0) {
                    local_12 = 0xfffffffe;
                  }
                  else {
                    local_12 = *(undefined4 *)(iVar7 + 0xc);
                  }
                  if (iVar4 == 0) {
                    local_e = 0xfffffffe;
                  }
                  else {
                    local_e = *(undefined4 *)(iVar4 + 0xc);
                  }
                  FUN_0042d3f0(local_8,0x1b6,&local_14,10);
                  if (iVar6 == 0) {
                    local_12 = 0xfffffffe;
                  }
                  else {
                    local_12 = *(undefined4 *)(iVar6 + 0xc);
                  }
                  if (iVar3 == 0) {
                    local_e = 0xfffffffe;
                  }
                  else {
                    local_e = *(undefined4 *)(iVar3 + 0xc);
                  }
                  FUN_0042d3f0(local_8,0x1b6,&local_14,10);
                }
                piVar8 = (int *)((int)piVar8 + 0x2e);
                local_30 = local_30 + -1;
              } while (local_30 != 0);
            }
          }
          else {
            (**(code **)(*local_8 + 0x2a8))();
          }
        }
        local_1c = local_1c + 0x2e;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
    FUN_004301f0(param_3);
  }
  return;
}


