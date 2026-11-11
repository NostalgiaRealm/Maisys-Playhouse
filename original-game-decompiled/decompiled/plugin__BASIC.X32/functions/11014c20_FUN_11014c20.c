
/* ==== FUN_11014c20 @ 11014c20 ==== 
 * signature: bool __cdecl FUN_11014c20(undefined4 * param_1, undefined4 param_2)
 * body: 11014c20-11014c75
 */

bool __cdecl FUN_11014c20(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code **ppcVar3;
  code *local_30 [6];
  undefined4 local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar3 = local_30;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar3 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    *(undefined2 *)ppcVar3 = *(undefined2 *)param_1;
    local_16 = param_2;
    local_30[1] = (code *)0x1c5;
    local_12 = 0xe;
    cVar1 = (*local_30[2])(local_30);
    return cVar1 == '\0';
  }
  return false;
}


