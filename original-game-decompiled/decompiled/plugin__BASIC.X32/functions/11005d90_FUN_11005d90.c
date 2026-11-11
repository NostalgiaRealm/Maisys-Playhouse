
/* ==== FUN_11005d90 @ 11005d90 ==== 
 * signature: undefined __cdecl FUN_11005d90(undefined4 * param_1, undefined4 param_2)
 * body: 11005d90-11005ddd
 */

void __cdecl FUN_11005d90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_40 [4];
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
    local_40[0] = param_2;
    local_30[1] = (code *)0x323;
    local_12 = 0xe;
    local_16 = local_40;
    (*local_30[2])(local_30);
  }
  return;
}


