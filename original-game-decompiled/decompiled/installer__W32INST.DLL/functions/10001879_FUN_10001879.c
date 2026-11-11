
/* ==== FUN_10001879 @ 10001879 ==== 
 * signature: int __cdecl FUN_10001879(char * param_1)
 * body: 10001879-100018b5
 */

int __cdecl FUN_10001879(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  iVar3 = 0;
  iVar2 = 1;
  if (*param_1 != '-') goto LAB_10001899;
  iVar2 = -1;
  while( true ) {
    param_1 = param_1 + 1;
LAB_10001899:
    cVar1 = *param_1;
    if ((cVar1 < '0') || ('9' < cVar1)) break;
    iVar3 = cVar1 + -0x30 + iVar3 * 10;
  }
  return iVar2 * iVar3;
}


