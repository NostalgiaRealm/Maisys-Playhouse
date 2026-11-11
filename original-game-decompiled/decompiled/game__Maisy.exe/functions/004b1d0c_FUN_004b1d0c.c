
/* ==== FUN_004b1d0c @ 004b1d0c ==== 
 * signature: undefined __thiscall FUN_004b1d0c(void * this, HMETAFILE param_1)
 * body: 004b1d0c-004b1d46
 */

void __thiscall FUN_004b1d0c(void *this,HMETAFILE param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 4);
  iVar2 = GetDeviceCaps((HDC)*puVar1,2);
  if (iVar2 == 5) {
    PlayMetaFile((HDC)*puVar1,param_1);
  }
  else {
    EnumMetaFile((HDC)*puVar1,param_1,AfxEnumMetaFileProc,(LPARAM)this);
  }
  return;
}


