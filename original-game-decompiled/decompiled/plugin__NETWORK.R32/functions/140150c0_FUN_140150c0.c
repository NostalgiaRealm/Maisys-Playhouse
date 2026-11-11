
/* ==== FUN_140150c0 @ 140150c0 ==== 
 * signature: undefined __cdecl FUN_140150c0(undefined4 * param_1, char * param_2)
 * body: 140150c0-140150f3
 */

void __cdecl FUN_140150c0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (uVar2 = FUN_14015030(param_2[iVar3],0x14026bfc), (char)uVar2 != '\0')))
  {
    iVar3 = iVar3 + 1;
    cVar1 = param_2[iVar3];
  }
  *param_1 = param_2 + iVar3;
  return;
}


