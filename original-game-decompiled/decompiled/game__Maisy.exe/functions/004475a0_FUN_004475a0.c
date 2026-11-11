
/* ==== FUN_004475a0 @ 004475a0 ==== 
 * signature: undefined4 __cdecl FUN_004475a0(HGLOBAL param_1, short param_2, short param_3, short param_4, int param_5, int param_6)
 * body: 004475a0-0044760a
 */

undefined4 __cdecl
FUN_004475a0(HGLOBAL param_1,short param_2,short param_3,short param_4,int param_5,int param_6)

{
  LPVOID pvVar1;
  BOOL BVar2;
  int iVar3;
  short sVar4;
  
  sVar4 = 0;
  pvVar1 = GlobalLock(param_1);
  while ((param_3 = param_3 + 1, param_3 < param_4 && (param_3 < param_2))) {
    iVar3 = (int)sVar4;
    if (param_6 <= iVar3) {
      *(undefined1 *)(param_5 + param_6) = 0;
      return param_6 & 0xffffff00;
    }
    sVar4 = sVar4 + 1;
    *(undefined1 *)(iVar3 + param_5) = *(undefined1 *)((int)param_3 + (int)pvVar1);
  }
  *(undefined1 *)(sVar4 + param_5) = 0;
  BVar2 = GlobalUnlock(param_1);
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}


