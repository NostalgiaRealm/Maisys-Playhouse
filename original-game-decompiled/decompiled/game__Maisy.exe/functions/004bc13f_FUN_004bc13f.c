
/* ==== FUN_004bc13f @ 004bc13f ==== 
 * signature: undefined __thiscall FUN_004bc13f(void * this, char * param_1)
 * body: 004bc13f-004bc18e
 */

void __thiscall FUN_004bc13f(void *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  
  if (DAT_004e5204 == 0) {
    iVar1 = FUN_004bafca();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      uVar2 = FUN_00492680(param_1);
      *(undefined4 *)((int)this + 0x74) = uVar2;
      pvVar3 = (HGLOBAL)FUN_00492680(*(char **)((int)this + 0x70));
    }
    else {
      pvVar3 = FUN_004bd1b8(param_1);
      *(HGLOBAL *)((int)this + 0x74) = pvVar3;
      pvVar3 = FUN_004bd1b8(*(LPCSTR *)((int)this + 0x70));
    }
    *(HGLOBAL *)((int)this + 0x88) = pvVar3;
  }
  return;
}


