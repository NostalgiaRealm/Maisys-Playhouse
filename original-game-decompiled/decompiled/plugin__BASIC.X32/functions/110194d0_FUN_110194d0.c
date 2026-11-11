
/* ==== FUN_110194d0 @ 110194d0 ==== 
 * signature: bool __cdecl FUN_110194d0(undefined4 * param_1, int param_2)
 * body: 110194d0-110197f8
 */

bool __cdecl FUN_110194d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool local_d;
  
  local_d = true;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = puVar1[3];
  iVar3 = puVar1[4];
  if (iVar2 == 0x7d1) {
    iVar6 = *(int *)(param_2 + 0x10);
    if ((((iVar6 == 0x12d) || (iVar6 == 0x12e)) || ((0x130 < iVar6 && (iVar6 < 0x134)))) ||
       ((iVar6 == 0x135 || (iVar6 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar6 = *(int *)(param_2 + 0x18);
    if ((((iVar6 == 0x12d) || (iVar6 == 0x12e)) || ((0x130 < iVar6 && (iVar6 < 0x134)))) ||
       ((iVar6 == 0x135 || (iVar6 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar6 = *(int *)(param_2 + 0x10);
    if ((((iVar6 == 0x12d) || (iVar6 == 0x12e)) || ((0x130 < iVar6 && (iVar6 < 0x134)))) ||
       ((iVar6 == 0x135 || (iVar6 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar6 = *(int *)(param_2 + 0x18);
    if ((((iVar6 == 0x12d) || (iVar6 == 0x12e)) || ((0x130 < iVar6 && (iVar6 < 0x134)))) ||
       ((iVar6 == 0x135 || (iVar6 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    FUN_11006290((uint *)(param_2 + 0xc),'\x01');
    FUN_11004840(param_1,10,0);
    FUN_110048a0(param_1,0xe,0,(undefined2 *)(param_2 + 0x34));
    *(undefined2 *)(param_2 + 0x34) = 0x69;
    *(undefined4 *)(param_2 + 0x3a) = 0;
    *(undefined4 *)(param_2 + 0x3e) = 0;
    *(undefined4 *)(param_2 + 0x36) = 0;
    *(undefined4 *)(param_2 + 0x42) = 0;
  }
  if (iVar2 == 0x7d2) {
    uVar5 = FUN_11019800(param_1,param_2);
    local_d = (char)uVar5 == '\0';
    FUN_11006290((uint *)(param_2 + 0xc),'\x01');
  }
  else if ((*(int *)(param_2 + 0x10) == iVar2) && (*(int *)(param_2 + 0x14) == iVar3)) {
    FUN_11019800(param_1,param_2);
    FUN_11004840(param_1,10,1);
    FUN_11019870(param_1,param_2,'\x01');
    local_d = false;
    puVar7 = puVar1;
    puVar8 = (undefined4 *)(param_2 + 0x5c);
    for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
    FUN_11002670((short *)(puVar1 + 9),(short *)(param_2 + 0x80));
  }
  else if ((*(int *)(param_2 + 0x18) == iVar2) && (*(int *)(param_2 + 0x1c) == iVar3)) {
    cVar4 = FUN_110062b0((uint *)(param_2 + 0xc),'\x01');
    if (cVar4 != '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x01');
      FUN_11004840(param_1,10,0);
      FUN_11019400(0x1f6,param_1);
      local_d = false;
    }
  }
  if (iVar2 == 0x514) {
    FUN_110198f0((int)param_1,param_2,(short *)(puVar1 + 9),iVar3);
    local_d = false;
  }
  if (iVar2 == 0x4b0) {
    FUN_110199f0(param_1,param_2,(short *)(puVar1 + 9),iVar3);
    local_d = false;
  }
  return local_d;
}


