
/* ==== FUN_004ac8c5 @ 004ac8c5 ==== 
 * signature: uint __fastcall FUN_004ac8c5(undefined4 * param_1)
 * body: 004ac8c5-004ac8ef
 */

uint __fastcall FUN_004ac8c5(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = GlobalLock((HGLOBAL)*param_1);
  if (*(short *)((int)puVar1 + 2) == -1) {
    uVar2 = puVar1[3];
  }
  else {
    uVar2 = *puVar1;
  }
  GlobalUnlock((HGLOBAL)*param_1);
  return uVar2 & 0x40;
}


