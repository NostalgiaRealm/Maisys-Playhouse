
/* ==== QTVRComponent @ 12004980 ==== 
 * signature: undefined __cdecl QTVRComponent(int param_1)
 * body: 12004980-12004a84
 */

void __cdecl QTVRComponent(int param_1)

{
                    /* 0x4980  13  QTVRComponent */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 2;
    *(undefined4 *)(param_1 + 0xaa) = 1;
    FUN_12027170(param_1,0x12037170);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_12004a90);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12004aa0);
      goto LAB_12004a20;
    }
LAB_12004a3e:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12004a7a;
    FUN_12027700(param_1,1,0,9,FUN_12004ac0);
  }
  else {
LAB_12004a20:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12004ab0);
      goto LAB_12004a3e;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x16,FUN_12004ad0);
  }
LAB_12004a7a:
  FUN_12027730(param_1);
  return;
}


