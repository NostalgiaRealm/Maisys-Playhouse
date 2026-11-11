
/* ==== FUN_11011880 @ 11011880 ==== 
 * signature: undefined1 __cdecl FUN_11011880(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 11011880-110118f5
 */

undefined1 __cdecl FUN_11011880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code **ppcVar2;
  undefined2 local_44;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined1 local_32;
  code *local_30 [6];
  undefined2 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_44 = 8;
    local_42 = param_2;
    local_3e = 0;
    local_3a = 0;
    local_36 = param_3;
    local_32 = 0;
    local_16 = &local_44;
    local_30[1] = (code *)0x3e8;
    local_12 = 0x14;
    (*local_30[2])(local_30);
    return local_32;
  }
  return 0;
}


