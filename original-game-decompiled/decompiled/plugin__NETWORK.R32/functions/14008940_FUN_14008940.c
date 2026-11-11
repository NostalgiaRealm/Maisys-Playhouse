
/* ==== FUN_14008940 @ 14008940 ==== 
 * signature: undefined4 __cdecl FUN_14008940(int param_1, int param_2)
 * body: 14008940-1400898c
 */

undefined4 __cdecl FUN_14008940(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + iVar3);
    if (('@' < cVar1) && (cVar1 < '[')) {
      cVar1 = cVar1 + ' ';
    }
    cVar2 = *(char *)(param_2 + iVar3);
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 < cVar2) {
      return 0xffffffff;
    }
    if (cVar2 < cVar1) {
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return 0;
}


