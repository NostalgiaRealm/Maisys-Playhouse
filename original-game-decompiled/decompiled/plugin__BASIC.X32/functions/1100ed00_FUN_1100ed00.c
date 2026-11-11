
/* ==== FUN_1100ed00 @ 1100ed00 ==== 
 * signature: undefined2 __cdecl FUN_1100ed00(undefined4 * param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, undefined4 param_5)
 * body: 1100ed00-1100ed81
 */

undefined2 __cdecl
FUN_1100ed00(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  code **ppcVar3;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
  undefined2 local_32;
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
    local_3c = param_3;
    local_16 = &local_40;
    local_40 = param_2;
    local_3a = param_4;
    local_36 = param_5;
    local_30[1] = (code *)0x4b3;
    local_12 = 0x10;
    local_32 = 0;
    cVar1 = (*local_30[2])(local_30);
    if (cVar1 == '\0') {
      return local_32;
    }
  }
  return 0xffff;
}


