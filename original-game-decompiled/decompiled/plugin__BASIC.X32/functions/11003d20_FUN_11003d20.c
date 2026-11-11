
/* ==== FUN_11003d20 @ 11003d20 ==== 
 * signature: undefined4 __cdecl FUN_11003d20(undefined4 * param_1, int param_2)
 * body: 11003d20-11003d64
 */

undefined4 __cdecl FUN_11003d20(undefined4 *param_1,int param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 0x34) != '\0') {
    uVar1 = FUN_1100fc30((int)param_1);
    uVar1 = FUN_1101db80(param_1,uVar1,1,(int)*(short *)(param_2 + 0x20),
                         (int)*(short *)(param_2 + 0x22),0,0);
    *(undefined1 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x36) = 0;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


