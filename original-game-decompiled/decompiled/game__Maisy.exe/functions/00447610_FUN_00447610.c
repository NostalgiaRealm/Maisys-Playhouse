
/* ==== FUN_00447610 @ 00447610 ==== 
 * signature: bool __cdecl FUN_00447610(HGLOBAL param_1, short param_2, short * param_3, short * param_4)
 * body: 00447610-0044768c
 */

bool __cdecl FUN_00447610(HGLOBAL param_1,short param_2,short *param_3,short *param_4)

{
  LPVOID pvVar1;
  char cVar2;
  short sVar3;
  
  cVar2 = '\0';
  pvVar1 = GlobalLock(param_1);
  sVar3 = *param_3;
  do {
    if (param_2 <= sVar3) {
LAB_0044766a:
      if (cVar2 != '\x02') {
        *param_4 = param_2;
      }
      GlobalUnlock(param_1);
      return cVar2 == '\x02';
    }
    if ((cVar2 == '\0') && (*(char *)((int)sVar3 + (int)pvVar1) == '<')) {
      *param_3 = sVar3;
      cVar2 = '\x01';
    }
    if ((cVar2 == '\x01') && (*(char *)((int)sVar3 + (int)pvVar1) == '>')) {
      cVar2 = '\x02';
      *param_4 = sVar3;
      goto LAB_0044766a;
    }
    sVar3 = sVar3 + 1;
  } while( true );
}


