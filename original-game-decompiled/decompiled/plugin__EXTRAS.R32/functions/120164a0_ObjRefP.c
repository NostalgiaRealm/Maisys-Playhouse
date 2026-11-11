
/* ==== ObjRefP @ 120164a0 ==== 
 * signature: undefined __cdecl ObjRefP(int param_1)
 * body: 120164a0-120166ba
 */

void __cdecl ObjRefP(int param_1)

{
                    /* 0x164a0  9  ObjRefP */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x6e;
    *(undefined4 *)(param_1 + 0xae) = 5;
    *(undefined2 *)(param_1 + 0xa6) = 3;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_12027170(param_1,0x120378dc);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120167f0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_12016880);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_120169b0);
      goto LAB_12016570;
    }
LAB_1201658d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12016ba0);
      goto LAB_120165aa;
    }
LAB_120165c7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12016e50);
      goto LAB_120165e4;
    }
LAB_12016601:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12017840);
      goto LAB_1201661e;
    }
LAB_1201663b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12017100);
      goto LAB_12016658;
    }
LAB_12016675:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_120166af;
    FUN_12027700(param_1,1,0,0x25,FUN_120170b0);
  }
  else {
LAB_12016570:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12016af0);
      goto LAB_1201658d;
    }
LAB_120165aa:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12016cb0);
      goto LAB_120165c7;
    }
LAB_120165e4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12017800);
      goto LAB_12016601;
    }
LAB_1201661e:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12017880);
      goto LAB_1201663b;
    }
LAB_12016658:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12017530);
      goto LAB_12016675;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_120166c0);
  }
LAB_120166af:
  FUN_12027730(param_1);
  return;
}


