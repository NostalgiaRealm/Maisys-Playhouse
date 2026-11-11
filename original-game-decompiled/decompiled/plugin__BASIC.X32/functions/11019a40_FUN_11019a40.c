
/* ==== FUN_11019a40 @ 11019a40 ==== 
 * signature: undefined __cdecl FUN_11019a40(undefined4 * param_1, undefined4 param_2)
 * body: 11019a40-11019a92
 */

void __cdecl FUN_11019a40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  code *local_30 [6];
  undefined4 local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    puVar2 = param_1;
    ppcVar3 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar3 = (code *)*puVar2;
      puVar2 = puVar2 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    *(undefined2 *)ppcVar3 = *(undefined2 *)puVar2;
    local_12 = param_2;
    local_30[1] = (code *)0x1a;
    local_16 = 0;
    (*local_30[2])(local_30);
    *(undefined4 *)((int)param_1 + 0x16) = local_16;
  }
  return;
}


