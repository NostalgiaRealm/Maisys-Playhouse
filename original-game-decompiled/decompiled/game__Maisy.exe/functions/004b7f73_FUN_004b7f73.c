
/* ==== FUN_004b7f73 @ 004b7f73 ==== 
 * signature: undefined __fastcall FUN_004b7f73(int param_1)
 * body: 004b7f73-004b7fd2
 */

void __fastcall FUN_004b7f73(int param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((iVar2 != 0) && (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xa0) = iVar2, iVar2 == 0)) {
    piVar1 = (int *)(param_1 + 0xa4);
    if ((int *)*piVar1 != (int *)0x0) {
      if (*(int *)*piVar1 != 0) {
        iVar2 = 0;
        do {
          BVar3 = IsWindow(*(HWND *)(*piVar1 + iVar2));
          if (BVar3 != 0) {
            EnableWindow(*(HWND *)(*piVar1 + iVar2),1);
          }
          iVar2 = iVar2 + 4;
        } while (*(int *)(*piVar1 + iVar2) != 0);
      }
      FUN_004a602d((LPVOID)*piVar1);
      *piVar1 = 0;
    }
  }
  return;
}


