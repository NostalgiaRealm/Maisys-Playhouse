
/* ==== FUN_00487c50 @ 00487c50 ==== 
 * signature: undefined __thiscall FUN_00487c50(void * this, char * param_1)
 * body: 00487c50-00487cb1
 */

void __thiscall FUN_00487c50(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(short *)((int)this + 0x60) == 0) {
    uVar2 = 0xffffffff;
    pcVar4 = s_Untitled_Scene_004dcf2c;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_Untitled_Graphic_004dcf3c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


