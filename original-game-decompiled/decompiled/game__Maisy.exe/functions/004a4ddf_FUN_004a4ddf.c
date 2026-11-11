
/* ==== FUN_004a4ddf @ 004a4ddf ==== 
 * signature: int __stdcall FUN_004a4ddf(char * param_1)
 * body: 004a4ddf-004a4df9
 */

int FUN_004a4ddf(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 * 0x21 + (int)*param_1;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return iVar2;
}


