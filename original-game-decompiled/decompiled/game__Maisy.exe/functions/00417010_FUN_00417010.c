
/* ==== FUN_00417010 @ 00417010 ==== 
 * signature: undefined1 __cdecl FUN_00417010(int param_1, undefined4 * param_2)
 * body: 00417010-0041708a
 */

undefined1 __cdecl FUN_00417010(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  
  if ((DAT_004d9e84 == 0) && (FUN_00416e00(), DAT_004d9e84 == 0)) {
    return 0;
  }
  uVar4 = 0;
  iVar1 = *(int *)(DAT_004d9e84 + 0x26);
  piVar2 = (int *)FUN_00430190(DAT_004d9e84);
  iVar3 = 0;
  piVar5 = piVar2;
  if (0 < iVar1) {
    do {
      if (*piVar5 == param_1) {
        uVar4 = 1;
        FUN_004374c0(param_2,(undefined4 *)((int)piVar2 + iVar3 * 0x16 + 4));
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = (int *)((int)piVar5 + 0x16);
    } while (iVar3 < iVar1);
  }
  FUN_004301f0(DAT_004d9e84);
  return uVar4;
}


