
/* ==== FUN_0041dcc0 @ 0041dcc0 ==== 
 * signature: undefined __cdecl FUN_0041dcc0(char * param_1, byte * param_2, uint param_3, char param_4)
 * body: 0041dcc0-0041dd72
 */

void __cdecl FUN_0041dcc0(char *param_1,byte *param_2,uint param_3,char param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (int)param_3 >> 3;
  if (0 < iVar1) {
    do {
      bVar2 = *param_1 != param_4;
      if (param_1[1] != param_4) {
        bVar2 = bVar2 | 2;
      }
      if (param_1[2] != param_4) {
        bVar2 = bVar2 | 4;
      }
      if (param_1[3] != param_4) {
        bVar2 = bVar2 | 8;
      }
      if (param_1[4] != param_4) {
        bVar2 = bVar2 | 0x10;
      }
      if (param_1[5] != param_4) {
        bVar2 = bVar2 | 0x20;
      }
      if (param_1[6] != param_4) {
        bVar2 = bVar2 | 0x40;
      }
      if (param_1[7] != param_4) {
        bVar2 = bVar2 | 0x80;
      }
      *param_2 = bVar2;
      param_1 = param_1 + 8;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  bVar2 = 0;
  switch(param_3 & 7) {
  case 7:
    if (param_1[6] != param_4) {
      bVar2 = 0x40;
    }
  case 6:
    if (param_1[5] != param_4) {
      bVar2 = bVar2 | 0x20;
    }
  case 5:
    if (param_1[4] != param_4) {
      bVar2 = bVar2 | 0x10;
    }
  case 4:
    if (param_1[3] != param_4) {
      bVar2 = bVar2 | 8;
    }
  case 3:
    if (param_1[2] != param_4) {
      bVar2 = bVar2 | 4;
    }
  case 2:
    if (param_1[1] != param_4) {
      bVar2 = bVar2 | 2;
    }
  case 1:
    if (*param_1 != param_4) {
      bVar2 = bVar2 | 1;
    }
    *param_2 = bVar2;
    return;
  default:
    return;
  }
}


