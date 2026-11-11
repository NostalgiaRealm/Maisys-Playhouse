
/* ==== FUN_0047b1b0 @ 0047b1b0 ==== 
 * signature: undefined __cdecl FUN_0047b1b0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 0047b1b0-0047b20d
 */

void __cdecl
FUN_0047b1b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  
  if (0 < param_6) {
    do {
      iVar2 = param_5 + -1;
      while (-1 < iVar2) {
        uVar1 = *(uint *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + -1;
        *(undefined1 *)(param_2 + 1 + iVar2) =
             *(undefined1 *)
              (((((uVar1 & 0xf00000) >> 4 | uVar1 & 0xf000) >> 4 | uVar1 & 0xf0) >> 4) + param_7);
      }
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


