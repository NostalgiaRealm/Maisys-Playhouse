
/* ==== FUN_14019690 @ 14019690 ==== 
 * signature: undefined __cdecl FUN_14019690(char * param_1)
 * body: 14019690-140196f4
 */

void __cdecl FUN_14019690(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  iVar2 = _tolower((int)*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1402707c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_14026e70 + *param_1 * 2) & 4;
      }
      else {
        uVar3 = __isctype((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar4 = *param_1;
  *param_1 = DAT_14027080;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar4;
    bVar5 = cVar4 != '\0';
    cVar4 = cVar1;
  } while (bVar5);
  return;
}


