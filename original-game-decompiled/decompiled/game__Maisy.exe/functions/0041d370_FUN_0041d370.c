
/* ==== FUN_0041d370 @ 0041d370 ==== 
 * signature: int __fastcall FUN_0041d370(int param_1)
 * body: 0041d370-0041d3c3
 */

int __fastcall FUN_0041d370(int param_1)

{
  SIZE_T SVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0xf2) != '\0') {
    iVar3 = *(int *)(param_1 + 0x110);
  }
  if (*(char *)(param_1 + 0x116) != '\0') {
    SVar1 = GlobalSize(*(HGLOBAL *)(param_1 + 0x130));
    iVar3 = iVar3 + SVar1;
  }
  if (((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0x6a) & 0x20) == 0)) &&
     ((*(byte *)(param_1 + 0x6b) & 2) == 0)) {
    iVar3 = iVar3 + *(int *)(param_1 + 0xee);
  }
  iVar2 = FUN_0040d5d0(param_1);
  return iVar2 + iVar3;
}


