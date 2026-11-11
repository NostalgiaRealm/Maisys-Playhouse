
/* ==== FUN_11014cf0 @ 11014cf0 ==== 
 * signature: undefined __cdecl FUN_11014cf0(undefined4 * param_1, undefined4 * param_2)
 * body: 11014cf0-11014d50
 */

void __cdecl FUN_11014cf0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
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
    local_3c = 0;
    local_16 = &local_3c;
    local_3a = *param_2;
    local_30[1] = (code *)0x1b6;
    local_12 = 10;
    local_36 = local_3a;
    (*local_30[2])(local_30);
    *param_2 = local_36;
  }
  return;
}


