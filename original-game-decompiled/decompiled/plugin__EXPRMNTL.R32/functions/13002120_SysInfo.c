
/* ==== SysInfo @ 13002120 ==== 
 * signature: undefined __cdecl SysInfo(int param_1)
 * body: 13002120-1300224f
 */

void __cdecl SysInfo(int param_1)

{
                    /* 0x2120  3  SysInfo */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xac;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_13003890(param_1,0x130081d8);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_13003c20(param_1,(undefined4 *)s__MComponent_13008030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,7,FUN_130024e0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,8,FUN_130026e0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x22,FUN_13002b90);
      goto LAB_130021ed;
    }
LAB_1300220a:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_13002244;
    FUN_13003c60(param_1,1,0,0x2e,FUN_13002250);
  }
  else {
LAB_130021ed:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,9,FUN_130032c0);
      goto LAB_1300220a;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,0x16,FUN_13003510);
  }
LAB_13002244:
  FUN_13003c90(param_1);
  return;
}


