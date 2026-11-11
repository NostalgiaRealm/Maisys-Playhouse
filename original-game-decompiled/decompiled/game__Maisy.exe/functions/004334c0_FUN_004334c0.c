
/* ==== FUN_004334c0 @ 004334c0 ==== 
 * signature: uint __cdecl FUN_004334c0(int * param_1, int param_2, int param_3)
 * body: 004334c0-00433582
 */

uint __cdecl FUN_004334c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if ((param_2 != 1) && (param_2 != 2)) {
    return (param_2 == 0) - 1 & 0x10000;
  }
  bVar4 = param_2 == 1;
  iVar1 = *(int *)(param_3 + 2);
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 0x3a);
  if (iVar1 == 0x138a) {
    (**(code **)(*piVar3 + 0x78))(0xf,iVar2,bVar4);
    return 0;
  }
  if (iVar1 == 0x138b) {
    (**(code **)(*piVar3 + 0x78))(0x10,iVar2,bVar4);
    return 0;
  }
  if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
     ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
    (**(code **)(*piVar3 + 0x78))(8,iVar2,bVar4);
  }
  else if ((iVar1 == 0x12f) || (iVar1 == 0x130)) {
    (**(code **)(*piVar3 + 0x78))(9,iVar2,bVar4);
    return 0;
  }
  return 0;
}


