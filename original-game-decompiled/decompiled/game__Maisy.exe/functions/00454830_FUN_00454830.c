
/* ==== FUN_00454830 @ 00454830 ==== 
 * signature: undefined4 __cdecl FUN_00454830(undefined4 * param_1, short * param_2)
 * body: 00454830-0045498a
 */

undefined4 __cdecl FUN_00454830(undefined4 *param_1,short *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_8;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    param_2[1] = 0;
    *param_2 = 0x14;
  }
  switch(*(undefined2 *)param_1) {
  case 1:
    param_2[1] = (ushort)(*(int *)((int)param_1 + 2) != 0);
    return 0;
  default:
    return 0x10000;
  case 9:
    return 0x10000;
  case 10:
    return 0x10000;
  case 0xb:
    return 0x10000;
  case 0xd:
    return 0x10000;
  case 0xf:
    param_2[1] = (ushort)((*(uint *)((int)param_1 + 6) & 0x7fffffff) != 0 ||
                         *(int *)((int)param_1 + 2) != 0);
    return 0;
  case 0x10:
    return 0x10000;
  case 0x14:
    *(undefined4 *)param_2 = *param_1;
    return 0;
  case 0x17:
    return 0x10000;
  case 0x66:
    break;
  case 0x69:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  case 0x73:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  }
  local_8 = 0;
  if (*(char **)((int)param_1 + 0xe) != (char *)0x0) {
    uVar1 = FUN_0043d430(*(char **)((int)param_1 + 0xe),(char *)&DAT_004dbc80);
    if (uVar1 == 0) {
      local_8 = 1;
    }
    else {
      uVar1 = FUN_0043d430(*(char **)((int)param_1 + 0xe),s_false_004dbc78);
      if (uVar1 == 0) {
        local_8 = 0;
      }
      else {
        FUN_0043bb50(*(char **)((int)param_1 + 0xe),&local_8);
      }
    }
  }
  param_2[1] = (ushort)(local_8 != 0);
  return 0;
}


