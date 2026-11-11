
/* ==== FUN_004774f0 @ 004774f0 ==== 
 * signature: undefined4 __cdecl FUN_004774f0(int param_1)
 * body: 004774f0-004776d6
 */

undefined4 __cdecl FUN_004774f0(int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int local_c [2];
  
  puVar1 = *(undefined2 **)(param_1 + 0x1a);
  piVar2 = FUN_0048f9d0();
  *piVar2 = 0;
  switch(*puVar1) {
  case 1:
    fVar4 = (float10)fsin((float10)**(double **)(puVar1 + 3));
    break;
  case 2:
    fVar4 = (float10)fcos((float10)**(double **)(puVar1 + 3));
    break;
  case 3:
    fVar4 = (float10)fptan((float10)**(double **)(puVar1 + 3));
    break;
  case 4:
    fVar4 = (float10)FUN_0048fa12(extraout_ECX);
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 5:
    fVar4 = (float10)FUN_0048fa1c();
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 6:
    fVar4 = (float10)fpatan((float10)**(double **)(puVar1 + 3),(float10)1);
    break;
  case 7:
    fVar4 = (float10)fpatan((float10)**(double **)(puVar1 + 3),(float10)**(double **)(puVar1 + 5));
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 8:
    fVar4 = (float10)FUN_0048fa58(extraout_ECX);
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 9:
    fVar4 = (float10)FUN_0048fa62();
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 10:
    fVar4 = (float10)FUN_0048fa69();
    **(double **)(puVar1 + 8) = (double)fVar4;
    goto switchD_00477516_default;
  case 0xb:
    fVar4 = ROUND((float10)1.4426950408889634 * (float10)**(double **)(puVar1 + 3));
    fVar3 = (float10)f2xm1((float10)1.4426950408889634 * (float10)**(double **)(puVar1 + 3) - fVar4)
    ;
    fVar4 = (float10)fscale((float10)1 + fVar3,fVar4);
    break;
  case 0xc:
    fVar4 = (float10)log2((float10)**(double **)(puVar1 + 3));
    fVar4 = (float10)0.6931471805599453 * fVar4;
    break;
  case 0xd:
    fVar4 = (float10)log2((float10)**(double **)(puVar1 + 3));
    fVar4 = (float10)0.3010299956639812 * fVar4;
    break;
  case 0xe:
    fVar4 = (float10)FUN_0048fa92(*(undefined4 *)(puVar1 + 5));
    break;
  case 0xf:
    fVar4 = SQRT((float10)**(double **)(puVar1 + 3));
    break;
  case 0x10:
    dVar5 = _ceil(**(double **)(puVar1 + 3));
    fVar4 = (float10)dVar5;
    break;
  case 0x11:
    dVar5 = _floor(**(double **)(puVar1 + 3));
    fVar4 = (float10)dVar5;
    break;
  case 0x12:
    fVar4 = ABS((float10)**(double **)(puVar1 + 3));
    break;
  case 0x13:
    dVar5 = _ldexp(**(double **)(puVar1 + 3),(int)(short)puVar1[7]);
    fVar4 = (float10)dVar5;
    break;
  case 0x14:
    dVar5 = _frexp(**(double **)(puVar1 + 3),local_c);
    **(double **)(puVar1 + 8) = dVar5;
    **(double **)(puVar1 + 10) = (double)local_c[0];
    goto switchD_00477516_default;
  case 0x15:
    dVar5 = _modf(**(double **)(puVar1 + 3),*(double **)(puVar1 + 10));
    fVar4 = (float10)dVar5;
    break;
  case 0x16:
    fVar4 = (float10)FUN_004901da(*(undefined4 *)(puVar1 + 5));
    break;
  default:
    goto switchD_00477516_default;
  }
  **(double **)(puVar1 + 8) = (double)fVar4;
switchD_00477516_default:
  piVar2 = FUN_0048f9d0();
  **(undefined2 **)(puVar1 + 1) = (short)*piVar2;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


