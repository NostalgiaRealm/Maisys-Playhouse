
/* ==== FUN_0041e3e0 @ 0041e3e0 ==== 
 * signature: uint __thiscall FUN_0041e3e0(void * this, int param_1, int param_2, int param_3)
 * body: 0041e3e0-0041e42a
 */

uint __thiscall FUN_0041e3e0(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  BOOL BVar4;
  
  (**(code **)(*(int *)this + 0x114))();
  sVar2 = *(short *)(param_1 + 0x1a);
  hMem = *(HGLOBAL *)(param_1 + 0x1c);
  pvVar3 = GlobalLock(hMem);
  cVar1 = *(char *)((int)pvVar3 + (param_2 >> 3) + sVar2 * param_3);
  BVar4 = GlobalUnlock(hMem);
  return CONCAT31((int3)((uint)BVar4 >> 8),cVar1 >> ((byte)param_2 & 7)) & 0xffffff01;
}


