
/* ==== FUN_00436ee0 @ 00436ee0 ==== 
 * signature: undefined __thiscall FUN_00436ee0(void * this, int param_1)
 * body: 00436ee0-00436f4a
 */

void __thiscall FUN_00436ee0(void *this,int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  LPVOID local_8;
  
  FreeLibrary(*(HMODULE *)((int)this + param_1 * 0x124 + 0x130));
  uVar3 = FUN_0042fe50(*(void **)((int)this + param_1 * 0x124 + 0x146),&local_8);
  cVar2 = (char)uVar3;
  while (cVar2 != '\0') {
    FUN_004a602d(local_8);
    uVar3 = FUN_0042fe50(*(void **)((int)this + param_1 * 0x124 + 0x146),&local_8);
    cVar2 = (char)uVar3;
  }
  puVar1 = *(undefined4 **)((int)this + param_1 * 0x124 + 0x146);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


