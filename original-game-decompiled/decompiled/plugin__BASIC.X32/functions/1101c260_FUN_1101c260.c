
/* ==== FUN_1101c260 @ 1101c260 ==== 
 * signature: uint __cdecl FUN_1101c260(undefined4 * param_1, undefined2 * param_2, short * param_3, short * param_4, int param_5)
 * body: 1101c260-1101c2f7
 */

uint __cdecl
FUN_1101c260(undefined4 *param_1,undefined2 *param_2,short *param_3,short *param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = FUN_11019ca0(param_1,param_3);
  if ((short)uVar1 == 0) {
    uVar1 = FUN_11019ca0(param_1,param_4);
    if ((short)uVar1 == 0) {
      if ((*param_3 == 0x1a) && (*param_4 == 0x1a)) {
        *param_2 = 0x1a;
        uVar2 = (ushort)((uint)param_2 >> 0x10);
        if (param_5 != 0xce) {
          if (((char)param_3[1] == '\0') && ((char)param_4[1] == '\0')) {
            *(undefined1 *)(param_2 + 1) = 0;
            return (uint)uVar2 << 0x10;
          }
          *(undefined1 *)(param_2 + 1) = 1;
          return (uint)uVar2 << 0x10;
        }
        if (((char)param_3[1] != '\0') && ((char)param_4[1] != '\0')) {
          *(undefined1 *)(param_2 + 1) = 1;
          return (uint)uVar2 << 0x10;
        }
        *(undefined1 *)(param_2 + 1) = 0;
        return (uint)uVar2 << 0x10;
      }
      uVar1 = CONCAT22((short)(uVar1 >> 0x10),0xffe8);
    }
  }
  return uVar1;
}


