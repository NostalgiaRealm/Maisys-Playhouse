
/* ==== MidiAst @ 1201bcb0 ==== 
 * signature: undefined __cdecl MidiAst(int param_1)
 * body: 1201bcb0-1201bdd0
 */

void __cdecl MidiAst(int param_1)

{
                    /* 0x1bcb0  7  MidiAst */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 4;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_12027170(param_1,0x12037a14);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MAsset_12037a00,0,1);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,2,0,0x23,FUN_1201bde0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,2,0,7,FUN_1201bdf0);
      goto LAB_1201bd62;
    }
LAB_1201bd84:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1201bdc5;
    FUN_12027700(param_1,2,0,9,FUN_1201be20);
  }
  else {
LAB_1201bd62:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,2,0,8,FUN_1201be00);
      goto LAB_1201bd84;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,2,0,0x22,FUN_1201be10);
  }
LAB_1201bdc5:
  FUN_12027730(param_1);
  return;
}


