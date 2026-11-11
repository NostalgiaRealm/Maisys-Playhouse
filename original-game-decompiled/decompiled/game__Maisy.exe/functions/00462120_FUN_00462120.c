
/* ==== FUN_00462120 @ 00462120 ==== 
 * signature: undefined __thiscall FUN_00462120(void * this, undefined4 * param_1)
 * body: 00462120-00462197
 */

void __thiscall FUN_00462120(void *this,undefined4 *param_1)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  short *psVar4;
  
  sVar1 = *(short *)((int)this + 0xec);
  if (sVar1 == 1) {
    if (*(HGDIOBJ *)((int)this + 0xf6) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0xf6));
    }
  }
  else if (sVar1 == 2) {
    FUN_0047bce0((char *)((int)this + 0xee));
  }
  if ((*(int *)((int)this + 0x11c) != 0) &&
     (pcVar2 = (char *)(*(int *)((int)this + 0x11c) + 2), *pcVar2 != '\0')) {
    FUN_0047bce0(pcVar2);
  }
  psVar4 = (short *)((int)this + 0xec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar4 = *param_1;
    param_1 = param_1 + 1;
    psVar4 = psVar4 + 2;
  }
  *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) & 0xdf;
  return;
}


