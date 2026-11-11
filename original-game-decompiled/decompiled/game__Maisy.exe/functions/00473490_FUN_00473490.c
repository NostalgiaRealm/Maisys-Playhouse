
/* ==== FUN_00473490 @ 00473490 ==== 
 * signature: undefined __fastcall FUN_00473490(int * param_1)
 * body: 00473490-0047350c
 */

void __fastcall FUN_00473490(int *param_1)

{
  uint uVar1;
  
  FUN_0046ad70(param_1);
  *(short *)((int)param_1 + 0x92) = (short)param_1[0x27];
  *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)((int)param_1 + 0x9e);
  *(short *)((int)param_1 + 0x96) = (short)param_1[0x28];
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)((int)param_1 + 0xaa);
  uVar1 = *(uint *)((int)param_1 + 0xa2) & 0x40000000;
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x148))
            (CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0)));
  if ((*(byte *)((int)param_1 + 0xa5) & 0x80) != 0) {
    *(undefined2 *)(param_1 + 0x26) = 0x7fff;
    return;
  }
  *(undefined2 *)(param_1 + 0x26) = 0;
  return;
}


