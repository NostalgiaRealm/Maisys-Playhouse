
/* ==== FUN_0040f120 @ 0040f120 ==== 
 * signature: undefined __thiscall FUN_0040f120(void * this, char * param_1)
 * body: 0040f120-0040f15d
 */

void __thiscall FUN_0040f120(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(char **)((int)this + 0xc0) == (char *)0x0) {
    uRam00000000 = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)((int)this + 0xc0);
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


