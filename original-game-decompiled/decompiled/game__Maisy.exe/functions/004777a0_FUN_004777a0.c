
/* ==== FUN_004777a0 @ 004777a0 ==== 
 * signature: uint __cdecl FUN_004777a0(int param_1)
 * body: 004777a0-004777cb
 */

uint __cdecl FUN_004777a0(int param_1)

{
  void *this;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x16);
  if (*(int **)(uVar1 + 4) != (int *)0x0) {
    this = (void *)FUN_0040c620(*(int **)(uVar1 + 4));
    uVar1 = 0;
    if (this != (void *)0x0) {
      uVar1 = FUN_00408510(this,*(undefined4 **)(param_1 + 0x1a));
    }
  }
  return uVar1 & 0xffffff00;
}


