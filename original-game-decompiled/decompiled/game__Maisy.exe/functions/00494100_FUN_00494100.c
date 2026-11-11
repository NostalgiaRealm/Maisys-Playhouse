
/* ==== FUN_00494100 @ 00494100 ==== 
 * signature: undefined __cdecl FUN_00494100(char * param_1)
 * body: 00494100-00494164
 */

void __cdecl FUN_00494100(char *param_1)

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
      if (DAT_004de8cc < 2) {
        uVar3 = *(ushort *)(PTR_DAT_004de6c0 + *param_1 * 2) & 4;
      }
      else {
        uVar3 = __isctype((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar4 = *param_1;
  *param_1 = DAT_004de8d0;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar4;
    bVar5 = cVar4 != '\0';
    cVar4 = cVar1;
  } while (bVar5);
  return;
}


