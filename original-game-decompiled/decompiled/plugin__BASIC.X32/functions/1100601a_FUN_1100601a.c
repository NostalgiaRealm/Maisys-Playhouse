
/* ==== FUN_1100601a @ 1100601a ==== 
 * signature: undefined __cdecl FUN_1100601a(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, int param_8, int param_9, ushort * param_10)
 * body: 1100601a-11006068
 */

void __cdecl
FUN_1100601a(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,ushort *param_10)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    iVar3 = param_6;
    puVar4 = param_10;
    do {
      do {
        uVar1 = *param_4;
        for (uVar2 = (uint)*puVar4; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        }
        param_4 = param_4 + 1;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
      param_4 = param_4 + (param_9 - param_6);
      param_2 = param_2 + (param_8 - param_5);
      param_7 = param_7 + -1;
      iVar3 = param_6;
      puVar4 = param_10;
    } while (param_7 != 0);
  }
  return;
}


