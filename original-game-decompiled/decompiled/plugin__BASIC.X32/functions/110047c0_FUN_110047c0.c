
/* ==== FUN_110047c0 @ 110047c0 ==== 
 * signature: bool __cdecl FUN_110047c0(undefined4 * param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 110047c0-1100483a
 */

bool __cdecl
FUN_110047c0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  code **ppcVar3;
  undefined2 local_4c [5];
  undefined4 local_42;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  code *local_30 [6];
  undefined2 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar3 = local_30;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar3 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    *(undefined2 *)ppcVar3 = *(undefined2 *)param_1;
    local_4c[0] = 7;
    local_16 = local_4c;
    local_42 = param_2;
    local_30[1] = (code *)0x1b5;
    local_12 = 0x1a;
    cVar1 = (*local_30[2])(local_30);
    if (cVar1 == '\0') {
      *param_3 = uStack_3a;
      *param_4 = uStack_36;
    }
    return cVar1 == '\0';
  }
  return false;
}


