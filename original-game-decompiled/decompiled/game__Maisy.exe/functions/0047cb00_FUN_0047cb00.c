
/* ==== FUN_0047cb00 @ 0047cb00 ==== 
 * signature: undefined4 __cdecl FUN_0047cb00(undefined1 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined4 param_6, undefined2 param_7)
 * body: 0047cb00-0047cb94
 */

undefined4 __cdecl
FUN_0047cb00(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7)

{
  *param_1 = 0x52;
  param_1[1] = 0x4c;
  param_1[2] = 0x45;
  param_1[3] = 0x20;
  param_1[4] = (byte)((ushort)param_7 >> 8) | 1;
  param_1[5] = (char)param_7;
  param_1[6] = (char)((ushort)param_5 >> 8);
  param_1[7] = (char)param_5;
  param_1[8] = (char)((uint)param_3 >> 0x18);
  param_1[9] = (char)((uint)param_3 >> 0x10);
  param_1[10] = (char)((uint)param_3 >> 8);
  param_1[0xb] = (char)param_3;
  param_1[0xc] = (char)((uint)param_4 >> 0x18);
  param_1[0xd] = (char)((uint)param_4 >> 0x10);
  param_1[0xe] = (char)((uint)param_4 >> 8);
  param_1[0xf] = (char)param_4;
  param_1[0x10] = (char)((uint)param_6 >> 0x18);
  param_1[0x11] = (char)((uint)param_6 >> 0x10);
  param_1[0x12] = (char)((uint)param_6 >> 8);
  param_1[0x13] = (char)param_6;
  return 0;
}


