
/* ==== FUN_0044de20 @ 0044de20 ==== 
 * signature: void * __thiscall FUN_0044de20(void * this, char * param_1, short param_2)
 * body: 0044de20-0044deda
 */

void * __thiscall FUN_0044de20(void *this,char *param_1,short param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char local_50 [64];
  int local_10;
  void *local_c;
  void *local_8;
  
  local_8 = this;
  local_10 = FUN_0044e340((int)this);
  iVar6 = 1;
  local_c = (void *)0x0;
  piVar2 = (int *)FUN_00430190(*(int *)((int)local_8 + 0x30));
  if (0 < local_10) {
    do {
      if ((*(byte *)(piVar2 + 6) & 1) == 0) {
        if ((piVar2[3] == 0) && ((int *)*piVar2 != (int *)0x0)) {
          (**(code **)(*(int *)*piVar2 + 0x70))(local_50);
          iVar5 = -1;
          pcVar3 = local_50;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          if (iVar5 != -2) {
            pcVar3 = FUN_0043b970(local_50);
            piVar2[3] = (int)pcVar3;
          }
        }
        if (((char *)piVar2[3] != (char *)0x0) &&
           (uVar4 = FUN_0043d430(param_1,(char *)piVar2[3]), uVar4 == 0)) {
          local_c = FUN_0044db20(local_8,iVar6,param_2,'\0','\x01');
          break;
        }
      }
      piVar2 = (int *)((int)piVar2 + 0x1a);
      iVar6 = iVar6 + 1;
    } while (iVar6 <= local_10);
  }
  FUN_004301f0(*(int *)((int)local_8 + 0x30));
  return local_c;
}


