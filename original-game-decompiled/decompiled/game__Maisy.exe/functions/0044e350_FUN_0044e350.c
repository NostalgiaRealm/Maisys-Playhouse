
/* ==== FUN_0044e350 @ 0044e350 ==== 
 * signature: int __fastcall FUN_0044e350(int param_1)
 * body: 0044e350-0044e388
 */

int __fastcall FUN_0044e350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0044e340(param_1);
  iVar2 = FUN_00430190(*(int *)(param_1 + 0x30));
  if (0 < iVar1) {
    do {
      if ((*(byte *)(iVar2 + 0x18) & 1) == 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 0x1a;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004301f0(*(int *)(param_1 + 0x30));
  return iVar3;
}


