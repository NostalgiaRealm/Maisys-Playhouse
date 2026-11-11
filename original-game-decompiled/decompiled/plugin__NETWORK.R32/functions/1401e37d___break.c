
/* ==== __break @ 1401e37d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37d-1401e37d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


