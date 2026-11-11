
/* ==== FUN_0047b0c0 @ 0047b0c0 ==== 
 * signature: undefined __cdecl FUN_0047b0c0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 0047b0c0-0047b1a0
 */

void __cdecl
FUN_0047b0c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_8;
  undefined2 uStack_6;
  
  local_10 = 0xffffffff;
  if (0 < param_6) {
    do {
      iVar4 = 0;
      if (0 < param_5 + -1) {
        do {
          uVar2 = *(uint *)(param_1 + iVar4 * 2);
          if (local_10 != uVar2) {
            uVar3 = (((uVar2 & 0x78007800) >> 1 | uVar2 & 0x3c003c0) >> 1 | uVar2 & 0x1e001e) >> 1;
            uStack_6 = CONCAT11(*(undefined1 *)(((int)uVar3 >> 0x10) + param_7),
                                *(undefined1 *)((uVar3 & 0xffff) + param_7));
            local_10 = uVar2;
          }
          *(undefined2 *)(iVar4 + param_2) = uStack_6;
          iVar4 = iVar4 + 2;
        } while (iVar4 < param_5 + -1);
      }
      if (param_5 - iVar4 == 1) {
        uVar1 = *(ushort *)(param_1 + iVar4 * 2);
        *(undefined1 *)(iVar4 + param_2) =
             *(undefined1 *)
              (((((uVar1 & 0x7800) >> 1 | uVar1 & 0x3c0) >> 1 | uVar1 & 0x1e) >> 1) + param_7);
      }
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_3;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


