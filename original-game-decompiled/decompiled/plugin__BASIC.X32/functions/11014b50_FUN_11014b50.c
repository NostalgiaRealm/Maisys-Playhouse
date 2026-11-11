
/* ==== FUN_11014b50 @ 11014b50 ==== 
 * signature: undefined4 __cdecl FUN_11014b50(undefined4 * param_1, undefined4 param_2)
 * body: 11014b50-11014ba9
 */

undefined4 __cdecl FUN_11014b50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  code *local_54 [6];
  undefined4 *local_3a;
  undefined4 local_36;
  undefined4 local_24 [2];
  undefined4 local_1c;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_54;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_3a = local_24;
    local_1c = param_2;
    local_54[1] = (code *)0x1bc;
    local_36 = 0x24;
    (*local_54[2])(local_54);
    return local_24[0];
  }
  return 0;
}


