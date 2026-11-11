
/* ==== FUN_1401f4aa @ 1401f4aa ==== 
 * signature: undefined __fastcall FUN_1401f4aa(undefined4 param_1, int param_2)
 * body: 1401f4aa-1401f4ab
 */

void __fastcall FUN_1401f4aa(undefined4 param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  undefined2 uVar5;
  int unaff_ESI;
  int iVar4;
  
  uVar5 = (undefined2)param_2;
  uVar3 = in(uVar5);
  iVar4 = CONCAT31((int3)((uint)in_EAX >> 8),uVar3);
  out(uVar5,uVar3);
  piVar1 = (int *)(param_2 * 2 + -0x3febfe11);
  *piVar1 = *piVar1 + param_2;
  out(uVar5,iVar4);
  piVar1 = (int *)(unaff_ESI + iVar4);
  *piVar1 = *piVar1 + param_2;
  LOCK();
  iRam4c1401f0 = iRam4c1401f0 + param_2;
  UNLOCK();
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}


