
/* ==== FUN_11004ce0 @ 11004ce0 ==== 
 * signature: undefined __cdecl FUN_11004ce0(undefined4 * param_1, int param_2, undefined2 * param_3)
 * body: 11004ce0-11004d90
 */

void __cdecl FUN_11004ce0(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  switch(*param_3) {
  case 1:
    lVar2 = __ftol();
    *(int *)(param_3 + 1) = (int)lVar2;
    return;
  default:
    *param_3 = 0;
    return;
  case 0xd:
    FUN_11013be0(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_3 + 2));
    return;
  case 0x15:
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  case 0x17:
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_2 + 0x14);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    *param_3 = 0x15;
    *(undefined4 *)(param_3 + 1) = uVar1;
    return;
  case 0x1a:
    *(bool *)(param_3 + 1) =
         (*(uint *)(param_2 + 0x14) & 0x7fffffff) != 0 || *(int *)(param_2 + 0x10) != 0;
    return;
  case 0x1e:
    lVar2 = __ftol();
    *(int *)(param_3 + 1) = (int)lVar2;
    return;
  }
}


