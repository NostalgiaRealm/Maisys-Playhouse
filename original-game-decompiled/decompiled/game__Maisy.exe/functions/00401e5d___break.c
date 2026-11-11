
/* ==== __break @ 00401e5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e5d-00401e5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


