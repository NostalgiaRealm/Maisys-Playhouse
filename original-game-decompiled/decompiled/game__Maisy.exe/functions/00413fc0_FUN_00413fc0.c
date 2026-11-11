
/* ==== FUN_00413fc0 @ 00413fc0 ==== 
 * signature: char __fastcall FUN_00413fc0(int param_1)
 * body: 00413fc0-0041402c
 */

char __fastcall FUN_00413fc0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  short local_6;
  
  cVar2 = '\0';
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x26) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return '\x01';
    }
    iVar3 = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x26);
    if (0 < iVar1) {
      do {
        if (cVar2 != '\0') {
          return cVar2;
        }
        FUN_00430370(*(void **)(param_1 + 8),iVar3,&local_6);
        if (local_6 != -1) {
          cVar2 = '\x01';
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar1);
    }
    return cVar2;
  }
  return '\0';
}


