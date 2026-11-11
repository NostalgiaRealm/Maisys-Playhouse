
/* ==== FUN_1000_0606 @ 1000:0606 ==== 
 * signature: undefined __cdecl16near FUN_1000_0606(void)
 * body: 1000:0606-1000:0628
 */

void __cdecl16near FUN_1000_0606(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xd4;
  *(undefined2 *)0xd4 = 0x400;
  UNLOCK();
  iVar2 = FUN_1000_10bb();
  *(undefined2 *)0xd4 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1000_0177();
  return;
}


