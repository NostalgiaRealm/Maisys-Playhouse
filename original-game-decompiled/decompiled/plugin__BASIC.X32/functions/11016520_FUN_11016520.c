
/* ==== FUN_11016520 @ 11016520 ==== 
 * signature: undefined __cdecl FUN_11016520(uint * param_1, short * param_2, int param_3, HRGN param_4, short param_5)
 * body: 11016520-110166bc
 */

void __cdecl FUN_11016520(uint *param_1,short *param_2,int param_3,HRGN param_4,short param_5)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int x;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = (param_5 * 0xff) / 100;
  if (local_10 < 0) {
    local_10 = -local_10;
  }
  local_14 = (int)param_2[1];
  if (param_5 < 1) {
    if (local_14 < param_2[3]) {
      do {
        x = (int)*param_2;
        if (x < param_2[2]) {
          do {
            if ((param_4 == (HRGN)0x0) || (BVar1 = PtInRegion(param_4,x,local_14), BVar1 != 0)) {
              uVar2 = *param_1;
              uVar3 = (uVar2 & 0xff0000) + local_10 * -0x10000;
              uVar4 = (uVar2 & 0xff00) + local_10 * -0x100;
              uVar2 = (uVar2 & 0xff) - local_10;
              if ((int)uVar3 < 0) {
                uVar3 = 0;
              }
              if ((int)uVar4 < 0) {
                uVar4 = 0;
              }
              if ((int)uVar2 < 0) {
                uVar2 = 0;
              }
              *param_1 = uVar2 | uVar4 | uVar3;
            }
            x = x + 1;
            param_1 = param_1 + 1;
          } while (x < param_2[2]);
        }
        param_1 = (uint *)((int)param_1 + param_3);
        local_14 = local_14 + 1;
      } while (local_14 < param_2[3]);
    }
  }
  else if (local_14 < param_2[3]) {
    do {
      local_c = (int)*param_2;
      if (local_c < param_2[2]) {
        do {
          if ((param_4 == (HRGN)0x0) || (BVar1 = PtInRegion(param_4,local_c,local_14), BVar1 != 0))
          {
            uVar2 = *param_1;
            uVar3 = (uVar2 & 0xff0000) + local_10 * 0x10000;
            uVar4 = (uVar2 & 0xff00) + local_10 * 0x100;
            uVar2 = local_10 + (uVar2 & 0xff);
            if (0xff0000 < (int)uVar3) {
              uVar3 = 0xff0000;
            }
            if (0xff00 < (int)uVar4) {
              uVar4 = 0xff00;
            }
            if (0xff < (int)uVar2) {
              uVar2 = 0xff;
            }
            *param_1 = uVar2 | uVar4 | uVar3;
          }
          param_1 = param_1 + 1;
          local_c = local_c + 1;
        } while (local_c < param_2[2]);
      }
      param_1 = (uint *)((int)param_1 + param_3);
      local_14 = local_14 + 1;
    } while (local_14 < param_2[3]);
    return;
  }
  return;
}


