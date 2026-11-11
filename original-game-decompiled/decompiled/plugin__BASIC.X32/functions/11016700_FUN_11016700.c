
/* ==== FUN_11016700 @ 11016700 ==== 
 * signature: undefined __cdecl FUN_11016700(undefined4 * param_1, int param_2, int param_3, short * param_4, char param_5)
 * body: 11016700-11016887
 */

void __cdecl FUN_11016700(undefined4 *param_1,int param_2,int param_3,short *param_4,char param_5)

{
  short *psVar1;
  bool bVar2;
  undefined4 uVar3;
  HBRUSH ho;
  undefined4 uVar4;
  int *piVar5;
  POINT *pPVar6;
  int iVar7;
  short sVar8;
  int local_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = FUN_1100fc30((int)param_1);
  local_24 = 0;
  sVar8 = *(short *)(param_3 + 0x24);
  if (param_5 == '\0') {
    sVar8 = -sVar8;
  }
  ho = FUN_11015e10();
  uVar4 = FUN_110026d0(param_1,8);
  FUN_1101db80(param_1,uVar3,0xb,uVar4,&local_24,0,0);
  piVar5 = (int *)FUN_11002840(param_1,uVar4);
  psVar1 = *(short **)(param_2 + 4);
  if (((((*piVar5 != (int)*psVar1) || (piVar5[1] != (int)psVar1[1])) ||
       (piVar5[2] != (int)psVar1[2])) ||
      ((piVar5[3] != (int)psVar1[1] || (piVar5[4] != (int)psVar1[2])))) ||
     ((iVar7 = (int)*(short *)(*(int *)(param_2 + 4) + 6), piVar5[5] != iVar7 ||
      ((piVar5[6] != (int)*psVar1 || (bVar2 = true, piVar5[7] != iVar7)))))) {
    bVar2 = false;
  }
  if (!bVar2) {
    if (local_24 == 0) {
      if (*(HRGN *)(param_2 + 0x1a) == (HRGN)0x0) {
        bVar2 = true;
      }
      else {
        FUN_11015e80((int)param_1,(POINT *)0x0,0,sVar8,ho,*(HRGN *)(param_2 + 0x1a),param_2);
      }
    }
    else {
      pPVar6 = (POINT *)FUN_11002840(param_1,uVar4);
      FUN_11015e80((int)param_1,pPVar6,(short)local_24,sVar8,ho,*(HRGN *)(param_2 + 0x1a),param_2);
      FUN_110028a0(param_1,uVar4);
    }
    if (!bVar2) goto LAB_11016867;
  }
  local_20.x = (LONG)*param_4;
  local_20.y = (LONG)param_4[1];
  local_18 = (int)param_4[2];
  local_c = (int)param_4[3];
  local_14 = local_20.y;
  local_10 = local_18;
  local_8 = local_20.x;
  local_4 = local_c;
  FUN_11015e80((int)param_1,&local_20,4,sVar8,ho,(HRGN)0x0,param_2);
LAB_11016867:
  FUN_11002730(param_1,uVar4);
  DeleteObject(ho);
  return;
}


