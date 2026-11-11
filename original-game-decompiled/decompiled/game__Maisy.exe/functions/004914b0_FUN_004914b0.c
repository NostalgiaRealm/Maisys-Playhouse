
/* ==== FUN_004914b0 @ 004914b0 ==== 
 * signature: undefined __cdecl FUN_004914b0(byte * param_1, undefined4 param_2, int * param_3, int * param_4)
 * body: 004914b0-00491720
 */

void __cdecl FUN_004914b0(byte *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char local_9;
  
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_9 = '\0';
    DAT_004de174 = 0;
    uVar5 = 0;
    pbVar2 = param_1 + 1;
    do {
      pbVar6 = pbVar2;
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
      pbVar2 = pbVar6 + 1;
    } while (*pbVar6 == *param_1);
    switch(*param_1) {
    case 0x27:
      if ((uVar5 & 1) == 0) {
        pbVar6 = param_1 + uVar5;
      }
      else {
        pbVar6 = param_1 + uVar5;
        if (*pbVar6 == 0) {
          DAT_004de174 = 0;
          return;
        }
        do {
          if (*param_4 == 0) break;
          bVar1 = *pbVar6;
          if (bVar1 == 0x27) {
            pbVar6 = pbVar6 + 1;
            break;
          }
          if ((PTR_DAT_004de6c0[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            pbVar6 = pbVar6 + 1;
            *(byte *)*param_3 = bVar1;
            *param_3 = *param_3 + 1;
            *param_4 = *param_4 + -1;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *(byte *)*param_3 = bVar1;
          *param_3 = *param_3 + 1;
          *param_4 = *param_4 + -1;
        } while (*pbVar6 != 0);
      }
      goto LAB_00491710;
    case 0x41:
    case 0x61:
      iVar3 = __strcmpi((char *)param_1,"am/pm");
      if (iVar3 == 0) {
        local_9 = 'p';
        pbVar6 = param_1 + 5;
      }
      else {
        iVar3 = __strcmpi((char *)param_1,"a/p");
        if (iVar3 == 0) {
          pbVar6 = param_1 + 3;
        }
        local_9 = 'p';
      }
      break;
    case 0x48:
      if (uVar5 == 1) {
        DAT_004de174 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'H';
      break;
    case 0x4d:
      switch(uVar4) {
      case 0:
        DAT_004de174 = 1;
      case 1:
        local_9 = 'm';
        break;
      case 2:
        local_9 = 'b';
        break;
      case 3:
        local_9 = 'B';
      }
      break;
    case 100:
      switch(uVar4) {
      case 0:
        DAT_004de174 = 1;
      case 1:
        local_9 = 'd';
        break;
      case 2:
        local_9 = 'a';
        break;
      case 3:
        local_9 = 'A';
      }
      break;
    case 0x68:
      if (uVar5 == 1) {
        DAT_004de174 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'I';
      break;
    case 0x6d:
      if (uVar5 == 1) {
        DAT_004de174 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'M';
      break;
    case 0x73:
      if (uVar5 == 1) {
        DAT_004de174 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'S';
      break;
    case 0x79:
      if (uVar5 == 2) {
        local_9 = 'y';
      }
      else if (uVar5 == 4) {
        local_9 = 'Y';
      }
    }
    if (local_9 == '\0') {
      if ((PTR_DAT_004de6c0[(uint)*param_1 * 2 + 1] & 0x80) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        param_1 = param_1 + 1;
      }
      pbVar6 = param_1 + 1;
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + -1;
    }
    else {
      FUN_00490e20(local_9,param_2,param_3,(uint *)param_4);
    }
LAB_00491710:
    bVar1 = *pbVar6;
    param_1 = pbVar6;
  } while( true );
}


