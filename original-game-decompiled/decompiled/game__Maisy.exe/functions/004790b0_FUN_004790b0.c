
/* ==== FUN_004790b0 @ 004790b0 ==== 
 * signature: char __thiscall FUN_004790b0(void * this, short param_1, char param_2, char * param_3)
 * body: 004790b0-0047913d
 */

char __thiscall FUN_004790b0(void *this,short param_1,char param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_20 [8];
  char *local_18;
  
  if ((*(short *)(*(int *)((int)this + 0x54) + 0x26) < param_1) || (param_3 == (char *)0x0)) {
    return '\0';
  }
  *param_3 = '\0';
  if ((param_1 == 1) && (param_2 != '\0')) {
    FUN_0040f120(DAT_004d99a8,param_3);
  }
  else {
    FUN_00430370(*(void **)((int)this + 0x54),(int)param_1,local_20);
    if (local_18 != (char *)0x0) {
      uVar2 = 0xffffffff;
      do {
        pcVar4 = local_18;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar4 = local_18 + 1;
        cVar1 = *local_18;
        local_18 = pcVar4;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar4 = pcVar4 + -uVar2;
      pcVar5 = param_3;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
  }
  return '\x01' - (*param_3 == '\0');
}


