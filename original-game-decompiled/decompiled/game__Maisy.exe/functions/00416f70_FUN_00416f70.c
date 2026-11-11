
/* ==== FUN_00416f70 @ 00416f70 ==== 
 * signature: undefined4 __cdecl FUN_00416f70(int * param_1)
 * body: 00416f70-00417001
 */

undefined4 __cdecl FUN_00416f70(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int *piVar5;
  undefined4 local_8;
  
  if ((DAT_004d9e84 == 0) && (FUN_00416e00(), DAT_004d9e84 == 0)) {
    return 0xffffffff;
  }
  iVar4 = 0;
  iVar1 = *(int *)(DAT_004d9e84 + 0x26);
  iVar3 = FUN_00430190(DAT_004d9e84);
  local_8 = 0xffffffff;
  if (0 < iVar1) {
    piVar5 = (int *)(iVar3 + 4);
    do {
      bVar2 = FUN_00437430(piVar5,param_1);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        local_8 = *(undefined4 *)(iVar3 + iVar4 * 0x16);
        break;
      }
      piVar5 = (int *)((int)piVar5 + 0x16);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_004301f0(DAT_004d9e84);
  return local_8;
}


