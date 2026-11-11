
/* ==== FUN_00469bd0 @ 00469bd0 ==== 
 * signature: byte __fastcall FUN_00469bd0(int * param_1)
 * body: 00469bd0-00469c18
 */

byte __fastcall FUN_00469bd0(int *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x218))();
  if (cVar2 != '\0') {
    return 0;
  }
  bVar3 = FUN_00412e60((int)param_1);
  if ((((bVar3 == 0) && ((short)param_1[0x18] == 0)) &&
      ((*(byte *)((int)param_1 + 0x21) & 0x40) == 0)) && (*(short *)((int)param_1 + 0x22) != 0x43))
  {
    bVar3 = (**(code **)(iVar1 + 0x210))();
    return bVar3;
  }
  bVar3 = FUN_00412e60((int)param_1);
  return bVar3;
}


