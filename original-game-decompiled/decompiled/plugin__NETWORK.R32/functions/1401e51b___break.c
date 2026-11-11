
/* ==== __break @ 1401e51b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51b-1401e51b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


