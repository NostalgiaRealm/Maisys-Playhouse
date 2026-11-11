
/* ==== FUN_0045b890 @ 0045b890 ==== 
 * signature: undefined __thiscall FUN_0045b890(void * this, int * param_1)
 * body: 0045b890-0045b981
 */

void __thiscall FUN_0045b890(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int *local_8;
  
  if ((((*param_1 <= param_1[1]) && (param_1[1] != *param_1)) && (iVar3 = *(int *)this, iVar3 != 0))
     && (iVar1 = *(int *)(iVar3 + 0x26), iVar1 != 0)) {
    iVar5 = -1;
    iVar6 = 0;
    local_8 = this;
    iVar3 = FUN_00430190(iVar3);
    local_c = -1;
    if (0 < iVar1) {
      piVar4 = (int *)(iVar3 + 4);
      do {
        if (piVar4[-1] < param_1[1]) {
          if (param_1[1] < *piVar4) {
            piVar4 = (int *)(iVar3 + iVar6 * 8);
            iVar3 = *param_1;
            if (*piVar4 < iVar3) {
              piVar4[1] = iVar3;
              local_10 = param_1[1];
              local_c = iVar3;
              FUN_004301f0(*local_8);
              FUN_0042ff60((void *)*local_8,iVar6 + 2,&local_10);
              return;
            }
            *piVar4 = param_1[1];
            FUN_004301f0(*local_8);
            return;
          }
          iVar2 = *param_1;
          if (piVar4[-1] < iVar2) {
            if (iVar2 < *piVar4) {
              *piVar4 = iVar2;
            }
          }
          else {
            local_c = iVar6;
            if (iVar5 == -1) {
              iVar5 = iVar6;
            }
          }
        }
        piVar4 = piVar4 + 2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    FUN_004301f0(*local_8);
    if ((iVar5 != -1) && (iVar5 <= local_c)) {
      do {
        iVar5 = iVar5 + 1;
        FUN_00430090((void *)*local_8,iVar5);
      } while (iVar5 <= local_c);
    }
  }
  return;
}


