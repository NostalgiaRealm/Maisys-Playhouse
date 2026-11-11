
/* ==== FUN_11015570 @ 11015570 ==== 
 * signature: undefined __cdecl FUN_11015570(undefined4 * param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * body: 11015570-110155e5
 */

void __cdecl
FUN_11015570(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  code **ppcVar2;
  undefined1 local_48 [2];
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  code *local_30 [6];
  undefined1 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_48[0] = param_2;
    local_46 = param_3;
    local_3e = param_4;
    local_3a = param_5;
    local_16 = local_48;
    local_42 = param_6;
    local_36 = param_7;
    local_30[1] = (code *)0x3f2;
    local_12 = 0x16;
    (*local_30[2])(local_30);
  }
  return;
}


