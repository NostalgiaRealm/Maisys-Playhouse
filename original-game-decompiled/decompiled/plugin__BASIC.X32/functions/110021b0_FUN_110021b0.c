
/* ==== FUN_110021b0 @ 110021b0 ==== 
 * signature: undefined __cdecl FUN_110021b0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 110021b0-11002215
 */

void __cdecl
FUN_110021b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30 [6];
  undefined4 *local_16;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_16 = &local_44;
    local_44 = param_3;
    local_40 = param_4;
    local_3c = param_5;
    local_38 = param_6;
    local_34 = param_2;
    local_30[1] = (code *)0x3f5;
    (*local_30[2])(local_30);
  }
  return;
}


