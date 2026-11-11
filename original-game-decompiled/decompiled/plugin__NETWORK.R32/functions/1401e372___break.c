
/* ==== __break @ 1401e372 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e372-1401e372
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


