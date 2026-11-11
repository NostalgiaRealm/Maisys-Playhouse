
/* ==== FUN_12023eb0 @ 12023eb0 ==== 
 * signature: int __cdecl FUN_12023eb0(short param_1, undefined2 * param_2)
 * body: 12023eb0-12023fc2
 */

int __cdecl FUN_12023eb0(short param_1,undefined2 *param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)((uint)(param_1 + 1) >> 0x10);
  switch(param_1) {
  default:
    return CONCAT22(uVar1,3);
  case 1:
    *(undefined4 *)(param_2 + 1) = 0;
    *param_2 = 1;
    return (uint)uVar1 << 0x10;
  case 9:
    *param_2 = 9;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    return 0;
  case 10:
    *param_2 = 10;
    param_2[2] = 0;
    param_2[1] = 0;
    return 0;
  case 0xb:
    *param_2 = 0xb;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    return 0;
  case 0xf:
    *param_2 = 0xf;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    return 0;
  case 0x10:
    *param_2 = 0x10;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)(param_2 + 0xb) = 0x408f4000;
    return 0;
  case 0x14:
    param_2[1] = 0;
    *param_2 = 0x14;
    return (uint)uVar1 << 0x10;
  case 0x66:
    *param_2 = 0x66;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    return 0;
  case 0x69:
    *param_2 = 0x69;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    return 0;
  case -1:
    *param_2 = 0xffff;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    return 0;
  }
}


