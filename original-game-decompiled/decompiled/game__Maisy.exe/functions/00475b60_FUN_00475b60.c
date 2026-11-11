
/* ==== FUN_00475b60 @ 00475b60 ==== 
 * signature: undefined1 __cdecl FUN_00475b60(int param_1)
 * body: 00475b60-00475d7a
 */

undefined1 __cdecl FUN_00475b60(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  void *this;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  psVar2 = *(short **)(param_1 + 0x1a);
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x16) + 4);
    iVar8 = DAT_004da378;
    if (DAT_004da378 == 0) {
      if (iVar6 == 0) {
        psVar2[9] = 0;
        psVar2[10] = 0;
        return 0;
      }
      iVar8 = *(int *)(iVar6 + 4);
    }
    FUN_00466a60(iVar8);
    FUN_00479bc0();
    FUN_00479bc0();
    FUN_00479bc0();
    *(undefined4 *)(psVar2 + 9) = local_c;
    return 1;
  }
  if (sVar1 == 1) {
    **(undefined1 **)(psVar2 + 5) = 0;
    return 0;
  }
  if (sVar1 == 2) {
    return 0;
  }
  if (sVar1 == 6) {
    piVar7 = *(int **)(psVar2 + 1);
    puVar3 = *(undefined4 **)(psVar2 + 3);
    local_5 = 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x16) + 8);
    this = (void *)0x0;
    *piVar7 = -1;
    *puVar3 = 0xffffffff;
    if (((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 4), iVar6 != 0)) ||
       (iVar6 = DAT_004da378, DAT_004da378 != 0)) {
      this = (void *)FUN_00466a60(iVar6);
    }
    if (this != (void *)0x0) {
      FUN_00479ad0(this,*(undefined4 *)(psVar2 + 5),piVar7,puVar3,(undefined1 *)0x0);
      local_5 = 0;
    }
    return local_5;
  }
  if ((((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 5)) && (sVar1 == 7)) {
    local_5 = 1;
    piVar7 = *(int **)(*(int *)(param_1 + 0x16) + 4);
    if (piVar7 != (int *)0x0) {
      pcVar4 = *(code **)(*piVar7 + 0x10);
      iVar6 = (*pcVar4)();
      if (iVar6 != 0) {
        iVar6 = (*pcVar4)();
        piVar7 = (int *)FUN_00466a90(iVar6);
        pcVar4 = *(code **)(*piVar7 + 0x108);
        piVar7 = (int *)(*pcVar4)(3);
        if (piVar7 != (int *)0x0) {
          cVar5 = (**(code **)(*piVar7 + 0x124))(0,*(undefined4 *)(psVar2 + 5),local_20,1,0);
          if (cVar5 != '\0') {
            psVar2[9] = 3;
            psVar2[10] = 0;
            *(undefined4 *)(psVar2 + 0xb) = local_18;
            return 0;
          }
          piVar7 = (int *)(*pcVar4)(4);
          if ((piVar7 != (int *)0x0) &&
             (cVar5 = (**(code **)(*piVar7 + 0x124))(0,*(undefined4 *)(psVar2 + 5),local_20,1,0),
             cVar5 != '\0')) {
            local_5 = 0;
            psVar2[9] = 4;
            psVar2[10] = 0;
            *(undefined4 *)(psVar2 + 0xb) = local_18;
          }
        }
      }
    }
    return local_5;
  }
  return 0;
}


