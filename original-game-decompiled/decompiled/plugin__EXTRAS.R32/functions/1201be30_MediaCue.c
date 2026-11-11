
/* ==== MediaCue @ 1201be30 ==== 
 * signature: undefined __cdecl MediaCue(int param_1)
 * body: 1201be30-1201c113
 */

void __cdecl MediaCue(int param_1)

{
                    /* 0x1be30  6  MediaCue */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 2;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 200;
    FUN_12027170(param_1,0x12037a1c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_1201c170);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_1201c230);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_1201c400);
      goto LAB_1201bf00;
    }
LAB_1201bf1d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_1201e050);
      goto LAB_1201bf3a;
    }
LAB_1201bf57:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_1201cbb0);
      goto LAB_1201bf74;
    }
LAB_1201bf91:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_1201cfd0);
      goto LAB_1201bfae;
    }
LAB_1201bfcb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_1201d2f0);
      goto LAB_1201bfe8;
    }
LAB_1201c005:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_1201d7a0);
      goto LAB_1201c022;
    }
LAB_1201c03f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_1201e0e0);
      goto LAB_1201c05c;
    }
LAB_1201c079:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x25,FUN_1201c6d0);
      goto LAB_1201c096;
    }
LAB_1201c0b3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x2e,FUN_1201c120);
      goto LAB_1201c0d0;
    }
  }
  else {
LAB_1201bf00:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_1201c610);
      goto LAB_1201bf1d;
    }
LAB_1201bf3a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_1201c820);
      goto LAB_1201bf57;
    }
LAB_1201bf74:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_1201cfb0);
      goto LAB_1201bf91;
    }
LAB_1201bfae:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_1201d180);
      goto LAB_1201bfcb;
    }
LAB_1201bfe8:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_1201d760);
      goto LAB_1201c005;
    }
LAB_1201c022:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_1201d7e0);
      goto LAB_1201c03f;
    }
LAB_1201c05c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,10,FUN_1201c6c0);
      goto LAB_1201c079;
    }
LAB_1201c096:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x24,FUN_1201eab0);
      goto LAB_1201c0b3;
    }
LAB_1201c0d0:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1201c108;
    FUN_12027700(param_1,1,1,0,FUN_1201e9f0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,1,1,FUN_1201e130);
  }
LAB_1201c108:
  FUN_12027730(param_1);
  return;
}


