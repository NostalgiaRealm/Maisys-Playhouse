
/* ==== FUN_0044e840 @ 0044e840 ==== 
 * signature: undefined __thiscall FUN_0044e840(void * this, int param_1, char * param_2)
 * body: 0044e840-0044e8b3
 */

void __thiscall FUN_0044e840(void *this,int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_20 [12];
  char *local_14;
  
  if (0 < param_1) {
    iVar2 = FUN_0044e340((int)this);
    if (param_1 <= iVar2) {
      FUN_00430370(*(void **)((int)this + 0x30),param_1,local_20);
      if (local_14 == (char *)0x0) {
        *param_2 = '\0';
        return;
      }
      uVar3 = 0xffffffff;
      do {
        pcVar5 = local_14;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = local_14 + 1;
        cVar1 = *local_14;
        local_14 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        param_2 = param_2 + 1;
      }
      return;
    }
  }
  *param_2 = '\0';
  return;
}


