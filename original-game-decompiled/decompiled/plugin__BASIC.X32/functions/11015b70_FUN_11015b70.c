
/* ==== FUN_11015b70 @ 11015b70 ==== 
 * signature: undefined __cdecl FUN_11015b70(undefined4 * param_1, int param_2, undefined4 param_3, short * param_4)
 * body: 11015b70-11015c62
 */

void __cdecl FUN_11015b70(undefined4 *param_1,int param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_14;
  RECT local_10;
  
  uVar3 = FUN_1100fc30((int)param_1);
  local_14 = 0;
  uVar4 = FUN_110026d0(param_1,8);
  FUN_1101db80(param_1,uVar3,0xb,uVar4,&local_14,0,0);
  piVar5 = (int *)FUN_11002840(param_1,uVar4);
  psVar1 = *(short **)(param_2 + 4);
  if (((((*piVar5 != (int)*psVar1) || (piVar5[1] != (int)psVar1[1])) ||
       (piVar5[2] != (int)psVar1[2])) ||
      ((piVar5[3] != (int)psVar1[1] || (piVar5[4] != (int)psVar1[2])))) ||
     ((piVar5[5] != (int)psVar1[3] ||
      ((piVar5[6] != (int)*psVar1 || (bVar2 = true, piVar5[7] != (int)psVar1[3])))))) {
    bVar2 = false;
  }
  FUN_11002730(param_1,uVar4);
  if ((!bVar2) && (*(HRGN *)(param_2 + 0x1a) != (HRGN)0x0)) {
    InvertRgn(*(HDC *)((int)param_1 + 0x22),*(HRGN *)(param_2 + 0x1a));
    return;
  }
  local_10.left = (LONG)*param_4;
  local_10.top = (LONG)param_4[1];
  local_10.right = (LONG)param_4[2];
  local_10.bottom = (LONG)param_4[3];
  InvertRect(*(HDC *)((int)param_1 + 0x22),&local_10);
  return;
}


