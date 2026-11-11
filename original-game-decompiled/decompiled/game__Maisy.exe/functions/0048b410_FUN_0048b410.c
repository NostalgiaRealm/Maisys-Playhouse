
/* ==== FUN_0048b410 @ 0048b410 ==== 
 * signature: undefined4 __cdecl FUN_0048b410(int param_1, int param_2)
 * body: 0048b410-0048b460
 */

undefined4 __cdecl FUN_0048b410(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  iVar1 = 0;
  do {
    cVar2 = *(char *)(iVar1 + param_1);
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    cVar3 = *(char *)(iVar1 + param_2);
    if (('@' < cVar3) && (cVar3 < '[')) {
      cVar3 = cVar3 + ' ';
    }
    if (cVar2 < cVar3) {
      return 0xffffffff;
    }
    if (cVar3 < cVar2) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}


