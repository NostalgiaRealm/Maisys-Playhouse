
/* ==== __break @ 1401e37a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37a-1401e37a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


