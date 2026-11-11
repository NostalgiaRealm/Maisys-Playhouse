
/* ==== FUN_0044e650 @ 0044e650 ==== 
 * signature: int __thiscall FUN_0044e650(void * this, int * param_1)
 * body: 0044e650-0044e722
 */

int __thiscall FUN_0044e650(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  char *pcVar5;
  char local_7c [64];
  undefined1 local_3c [12];
  undefined4 local_30;
  int *local_20 [3];
  char *local_14;
  int local_10;
  undefined4 local_c;
  
  ppiVar4 = local_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar4 = (int *)0x0;
    ppiVar4 = ppiVar4 + 1;
  }
  *(undefined2 *)ppiVar4 = 0;
  local_20[0] = param_1;
  (**(code **)(*param_1 + 0x70))(local_7c);
  iVar3 = -1;
  pcVar5 = local_7c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    local_14 = FUN_0043b970(local_7c);
  }
  local_c = *(undefined4 *)((int)param_1 + 0x1e);
  iVar3 = *(int *)((int)this + 0x42);
  local_10 = (int)*(short *)((int)param_1 + 0x22);
  if (-1 < iVar3) {
    iVar2 = FUN_0044e340((int)this);
    if (iVar3 <= iVar2) goto LAB_0044e6c0;
  }
  *(undefined4 *)((int)this + 0x42) = 0;
LAB_0044e6c0:
  iVar3 = *(int *)((int)this + 0x42);
  if (iVar3 == 0) {
    (**(code **)(**(int **)((int)this + 0x30) + 0xe8))(local_20);
    iVar3 = FUN_0044e340((int)this);
  }
  else {
    FUN_00430370(*(void **)((int)this + 0x30),iVar3,local_3c);
    *(undefined4 *)((int)this + 0x42) = local_30;
    FUN_0042ff10(*(void **)((int)this + 0x30),iVar3,local_20);
  }
  if (DAT_004dbdc0 == '\0') {
    param_1[3] = iVar3;
    (**(code **)(*param_1 + 0x154))(iVar3);
  }
  return iVar3;
}


