
/* ==== FUN_11014bb0 @ 11014bb0 ==== 
 * signature: bool __cdecl FUN_11014bb0(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 11014bb0-11014c15
 */

bool __cdecl FUN_11014bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code **ppcVar3;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30 [6];
  undefined4 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar3 = local_30;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar3 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    *(undefined2 *)ppcVar3 = *(undefined2 *)param_1;
    local_38 = param_2;
    local_16 = &local_38;
    local_34 = param_3;
    local_30[1] = (code *)0x1c4;
    local_12 = 8;
    cVar1 = (*local_30[2])(local_30);
    return cVar1 == '\0';
  }
  return false;
}


