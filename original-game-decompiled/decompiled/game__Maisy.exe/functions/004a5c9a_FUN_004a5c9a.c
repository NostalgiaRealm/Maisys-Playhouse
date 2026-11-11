
/* ==== FUN_004a5c9a @ 004a5c9a ==== 
 * signature: undefined __fastcall FUN_004a5c9a(int param_1)
 * body: 004a5c9a-004a5cfa
 */

void __fastcall FUN_004a5c9a(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = 0;
      do {
        for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar3); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          FUN_004abc24((CString *)(puVar1 + 2));
        }
        iVar3 = iVar3 + 4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 8));
    }
    FUN_004a602d(*(LPVOID *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


