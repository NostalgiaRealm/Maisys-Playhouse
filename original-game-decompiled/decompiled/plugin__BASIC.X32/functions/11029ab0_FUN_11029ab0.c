
/* ==== FUN_11029ab0 @ 11029ab0 ==== 
 * signature: undefined __cdecl FUN_11029ab0(char * param_1)
 * body: 11029ab0-11029b14
 */

void __cdecl FUN_11029ab0(char *param_1)

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
      if (DAT_11036a28 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_11036a38 + *param_1 * 2) & 4;
      }
      else {
        uVar3 = __isctype((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar4 = *param_1;
  *param_1 = DAT_11036a2c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar4;
    bVar5 = cVar4 != '\0';
    cVar4 = cVar1;
  } while (bVar5);
  return;
}


