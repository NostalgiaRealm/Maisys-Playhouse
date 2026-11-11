
/* ==== FUN_004028cf @ 004028cf ==== 
 * signature: undefined __cdecl FUN_004028cf(int param_1)
 * body: 004028cf-004029c1
 */

void __cdecl FUN_004028cf(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (DAT_00413840 == 1000) {
    if (param_1 == 0) {
      if (DAT_00413ba0 != '\0') {
        if (DAT_00413ba0 != '\f') {
          DAT_00413ba0 = (DAT_00413bd4 == 0) - 1U & 0xc;
          return;
        }
        DAT_00413ba0 = 0;
        return;
      }
    }
    else if (DAT_00413ba0 != '\v') {
      if (DAT_00413ba0 != '\f') {
        DAT_00413ba0 = (DAT_00413bd4 != 0) + '\v';
        return;
      }
switchD_0040294e_default:
      DAT_00413ba0 = '\v';
    }
  }
  else {
    do {
      if (param_1 == 0) {
        DAT_00413ba0 = DAT_00413ba0 + -1;
      }
      else {
        DAT_00413ba0 = DAT_00413ba0 + '\x01';
      }
      switch(DAT_00413ba0) {
      case 0:
        goto switchD_0040294e_caseD_0;
      case 1:
        bVar2 = DAT_00413bec < 0;
        bVar1 = DAT_00413bec == 0;
        break;
      case 2:
        bVar2 = DAT_004138c0 < 0;
        bVar1 = DAT_004138c0 == 0;
        break;
      case 3:
        bVar2 = DAT_00413cc8 < 0;
        bVar1 = DAT_00413cc8 == 0;
        break;
      case 4:
        bVar2 = DAT_004138cc < 0;
        bVar1 = DAT_004138cc == 0;
        break;
      case 5:
        bVar2 = DAT_00413884 < 0;
        bVar1 = DAT_00413884 == 0;
        break;
      case 6:
        bVar2 = DAT_00413cdc < 0;
        bVar1 = DAT_00413cdc == 0;
        break;
      case 7:
        bVar2 = DAT_00413c44 < 0;
        bVar1 = DAT_00413c44 == 0;
        break;
      case 8:
        bVar2 = DAT_00413c3c < 0;
        bVar1 = DAT_00413c3c == 0;
        break;
      case 9:
        bVar2 = DAT_00413844 < 0;
        bVar1 = DAT_00413844 == 0;
        break;
      case 10:
        if (DAT_004138f0 != 0) {
          return;
        }
        if (0 < DAT_00413bd8) {
          return;
        }
        bVar2 = DAT_00413bc0 < 0;
        bVar1 = DAT_00413bc0 == 0;
        break;
      default:
        goto switchD_0040294e_default;
      }
    } while (bVar1 || bVar2);
  }
switchD_0040294e_caseD_0:
  return;
}


