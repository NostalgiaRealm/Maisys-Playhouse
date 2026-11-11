
/* ==== FUN_0044a5a0 @ 0044a5a0 ==== 
 * signature: uint __thiscall FUN_0044a5a0(void * this, char * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 0044a5a0-0044a637
 */

uint __thiscall FUN_0044a5a0(void *this,char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char local_5;
  
  puVar4 = *(undefined4 **)((int)this + 0x160);
  if (puVar4 == (undefined4 *)0x0) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = 0xffffffff;
  local_5 = '\0';
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x164)) {
    do {
      if (local_5 != '\0') break;
      if (puVar4[2] == ~uVar3 - 1) {
        iVar2 = _strncmp(param_1,(char *)(puVar4 + 3),~uVar3 - 1);
        if (iVar2 == 0) {
          local_5 = '\x01';
          *param_2 = *puVar4;
          *param_3 = puVar4[1];
        }
      }
      puVar4 = (undefined4 *)((int)puVar4 + puVar4[2] + 0xc);
      iVar2 = (int)puVar4 - *(int *)((int)this + 0x160);
    } while (iVar2 < *(int *)((int)this + 0x164));
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),local_5);
}


