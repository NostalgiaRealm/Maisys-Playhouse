
/* ==== panning @ 1201a4a0 ==== 
 * signature: undefined __cdecl panning(int param_1)
 * body: 1201a4a0-1201a72a
 */

void __cdecl panning(int param_1)

{
                    /* 0x1a4a0  19  panning */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 100;
    *(undefined2 *)(param_1 + 0xa6) = 4;
    FUN_12027170(param_1,0x12037994);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,10,FUN_1201a780);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_1201a7c0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_1201a830);
      goto LAB_1201a56d;
    }
LAB_1201a58a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_1201a9e0);
      goto LAB_1201a5a7;
    }
LAB_1201a5c4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_1201aab0);
      goto LAB_1201a5e1;
    }
LAB_1201a5fe:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_1201ae10);
      goto LAB_1201a61b;
    }
LAB_1201a638:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_1201b0e0);
      goto LAB_1201a655;
    }
LAB_1201a672:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_1201b590);
      goto LAB_1201a68f;
    }
LAB_1201a6ac:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_1201b010);
      goto LAB_1201a6c9;
    }
  }
  else {
LAB_1201a56d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_1201a930);
      goto LAB_1201a58a;
    }
LAB_1201a5a7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_1201aa70);
      goto LAB_1201a5c4;
    }
LAB_1201a5e1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_1201abc0);
      goto LAB_1201a5fe;
    }
LAB_1201a61b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_1201afd0);
      goto LAB_1201a638;
    }
LAB_1201a655:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_1201b1f0);
      goto LAB_1201a672;
    }
LAB_1201a68f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_1201b840);
      goto LAB_1201a6ac;
    }
LAB_1201a6c9:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1201a703;
    FUN_12027700(param_1,1,0,0x25,FUN_1201b050);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_1201a730);
  }
LAB_1201a703:
  FUN_12027730(param_1);
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,1,0,FUN_1201b950);
  }
  return;
}


