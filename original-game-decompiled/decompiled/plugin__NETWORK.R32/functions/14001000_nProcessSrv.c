
/* ==== nProcessSrv @ 14001000 ==== 
 * signature: undefined __cdecl nProcessSrv(int param_1)
 * body: 14001000-140012e7
 */

void __cdecl nProcessSrv(int param_1)

{
                    /* 0x1000  6  nProcessSrv */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x51a;
    *(undefined2 *)(param_1 + 0xa6) = 3;
    *(undefined2 *)(param_1 + 0xa4) = 5;
    FUN_140088b0(param_1,0x1402604c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_140012f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,8,FUN_14001570);
      goto LAB_140010a3;
    }
LAB_140010c1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14001ad0);
      goto LAB_140010df;
    }
LAB_140010fd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x1b,FUN_14001de0);
      goto LAB_1400111b;
    }
LAB_14001139:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_140020c0);
      goto LAB_14001157;
    }
LAB_14001175:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_140042a0);
      goto LAB_14001193;
    }
LAB_140011b1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_140036f0);
      goto LAB_140011cf;
    }
LAB_140011ed:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x28,FUN_14002890);
      goto LAB_1400120b;
    }
LAB_14001229:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x31,FUN_14002aa0);
      goto LAB_14001247;
    }
LAB_14001265:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,1,FUN_14004b30);
      goto LAB_14001283;
    }
LAB_140012a1:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_140012dd;
    FUN_14008e40(param_1,1,1,3,FUN_14007d10);
  }
  else {
LAB_140010a3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14001930);
      goto LAB_140010c1;
    }
LAB_140010df:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x1a,FUN_14001c80);
      goto LAB_140010fd;
    }
LAB_1400111b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14001e50);
      goto LAB_14001139;
    }
LAB_14001157:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_140022c0);
      goto LAB_14001175;
    }
LAB_14001193:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14002e20);
      goto LAB_140011b1;
    }
LAB_140011cf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_14002800);
      goto LAB_140011ed;
    }
LAB_1400120b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x2e,FUN_140028a0);
      goto LAB_14001229;
    }
LAB_14001247:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,0,FUN_14004760);
      goto LAB_14001265;
    }
LAB_14001283:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,2,FUN_14007690);
      goto LAB_140012a1;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,4,FUN_140087a0);
  }
LAB_140012dd:
  FUN_14008e70(param_1);
  return;
}


