
/* ==== FUN_00472bd0 @ 00472bd0 ==== 
 * signature: undefined __thiscall FUN_00472bd0(void * this, byte param_1, char param_2)
 * body: 00472bd0-00472c4c
 */

void __thiscall FUN_00472bd0(void *this,byte param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x15e);
  if ((iVar1 != 0) && (*(byte *)((int)this + 0x162) != param_1)) {
    *(byte *)((int)this + 0x162) = param_1;
    if (param_1 == 0) {
      pcVar2 = (code *)FUN_0048b580(iVar1,1,0x26,&local_8);
      DAT_004e34cc = (*pcVar2)(local_8);
    }
    else {
      pcVar2 = (code *)FUN_0048b580(iVar1,1,0x25,&local_8);
      DAT_004e34cc = (*pcVar2)(local_8);
    }
  }
  FUN_00462bf0(this,param_1,param_2);
  return;
}


