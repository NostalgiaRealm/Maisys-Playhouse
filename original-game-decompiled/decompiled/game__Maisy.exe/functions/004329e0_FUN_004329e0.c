
/* ==== FUN_004329e0 @ 004329e0 ==== 
 * signature: uint __cdecl FUN_004329e0(char * param_1, char * param_2, int param_3)
 * body: 004329e0-00432a48
 */

uint __cdecl FUN_004329e0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if (param_3 < 1) {
    return 0;
  }
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = _toupper((int)cVar1);
    cVar1 = (char)iVar3;
    iVar3 = _toupper((int)*param_2);
    cVar2 = (char)iVar3;
    if (((cVar1 == '\0') || (cVar2 == '\0')) || (cVar2 != cVar1)) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (cVar1 < cVar2) {
    return 0xffffffff;
  }
  return (uint)(cVar2 < cVar1);
}


