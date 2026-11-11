
/* ==== FUN_11024e20 @ 11024e20 ==== 
 * signature: undefined2 __cdecl FUN_11024e20(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 11024e20-11024e9b
 */

undefined2 __cdecl
FUN_11024e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_36;
  code *local_30 [6];
  undefined4 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_38 = 0;
    local_44 = param_2;
    local_40 = param_3;
    local_16 = &local_44;
    local_3c = param_4;
    local_36 = param_5;
    local_30[1] = (code *)0x4b1;
    local_12 = 0x12;
    (*local_30[2])(local_30);
    return local_38;
  }
  return 0xffff;
}


