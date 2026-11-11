
/* ==== FUN_11004750 @ 11004750 ==== 
 * signature: undefined __cdecl FUN_11004750(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 11004750-110047b4
 */

void __cdecl
FUN_11004750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
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
    local_4c = 6;
    local_4a = param_3;
    local_16 = &local_4c;
    local_46 = param_4;
    local_42 = param_2;
    local_30[1] = (code *)0x1b5;
    local_12 = 0x1a;
    (*local_30[2])(local_30);
  }
  return;
}


