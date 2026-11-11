
/* ==== FUN_0040b0c0 @ 0040b0c0 ==== 
 * signature: bool __thiscall FUN_0040b0c0(void * this, char * param_1, int * param_2, char * param_3, char * param_4)
 * body: 0040b0c0-0040b274
 */

bool __thiscall FUN_0040b0c0(void *this,char *param_1,int *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_174 [256];
  undefined2 local_74;
  undefined4 local_72;
  short local_48 [22];
  int local_1c;
  int local_18;
  undefined2 *local_14;
  char *local_10;
  char *local_c;
  char local_5;
  
  local_10 = local_174;
  iVar3 = 0;
  local_18 = 0;
  local_1c = 0;
  local_5 = '\0';
  local_72 = 0;
  local_c = param_1;
  *param_2 = (int)this;
  local_74 = 1;
  FUN_0046d250(param_1,&local_1c);
  if (*local_c == '.') {
    local_c = local_c + 1;
  }
  do {
    if (iVar3 != 0) break;
    iVar2 = -1;
    pcVar4 = local_c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0046d0d0('.',~(ushort)iVar2 - 1,(int)local_c,(int)local_174,(int *)&local_c);
    if (local_c == (char *)0x0) {
      local_5 = '\x01';
    }
    local_10 = local_174;
    local_14 = &local_74;
    FUN_0046d280(&local_10,(int *)&local_14);
    FUN_004374f0(local_10,param_3);
    FUN_00437550((int)param_3);
    if (local_5 != '\0') break;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[0] = 0x69;
    iVar3 = (**(code **)(*(int *)*param_2 + 0x98))(param_3,local_14,local_48);
    if ((iVar3 == 0) && (local_48[0] == 0x69)) {
      iVar3 = FUN_00455ee0(local_48,&local_18,(int *)0x0);
      if (iVar3 == 0) {
        if (local_18 == 0) {
          iVar3 = 0x8000b;
        }
        else {
          *param_2 = local_18;
        }
      }
    }
    else {
      iVar2 = -1;
      pcVar4 = local_c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_0046d0d0('.',~(ushort)iVar2 - 1,(int)local_c,(int)local_174,(int *)&local_c);
      local_10 = local_174;
      local_14 = &local_74;
      FUN_0046d280(&local_10,(int *)&local_14);
      FUN_004374f0(local_10,param_4);
      FUN_00437550((int)param_4);
    }
  } while (local_5 == '\0');
  return iVar3 == 0;
}


