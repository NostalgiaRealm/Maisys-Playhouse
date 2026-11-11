
/* ==== FUN_00444b50 @ 00444b50 ==== 
 * signature: undefined __cdecl FUN_00444b50(undefined2 param_1, byte param_2)
 * body: 00444b50-00444bec
 */

void __cdecl FUN_00444b50(undefined2 param_1,byte param_2)

{
  switch(param_1) {
  case 1:
    FUN_00444b10(0xac44,0x10,2,0x800);
    DAT_004db864 = param_2;
    return;
  case 2:
    FUN_00444b10(0x5622,0x10,2,0x80);
    DAT_004db864 = param_2;
    return;
  case 3:
    FUN_00444b10(0x5622,8,2,0x20);
    DAT_004db864 = param_2;
    return;
  default:
    FUN_00444b10(0x2b11,8,2,0x20);
    DAT_004db864 = param_2;
    return;
  case 5:
    DAT_004db864 = param_2 | 4;
    return;
  }
}


